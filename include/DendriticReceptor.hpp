#include <memory>
#include <set>
#include "include/NeuroTransmitter.hpp"

using namespace std;

namespace neuWillow
{

  enum ReceptorBindingResult
  {
     UnknownFailure,
     IncompatibleNeurotransmitter,
     Success
  };

  class DendriticReceptor
  {      
    private:  
      /**
       * We will have many instances of DendriticReceptors.
       * This id allows us to find a specific instance.
       * This should be automatically done in the ctor.
       */
      long _uniqueId;

    public:
      /**
       * Neurotransmitters can bind to the Dendritic Receptor
       * on either their DenriticSpine or MainStem binding sites.
       * The Dendritic Spine is the most common binding site.
       */
      enum PostSynapticBindingSite
      {
        DendriticSpine,
        MainStem
      };

      long getUniqueId() const;

      /**
       * Simulates the process of a neurotransmitter attempting to 
       * bind to a dendritic receptor site. The neurotransmitter might
       * fail to bind for a variety of reasons: this type might not
       * be compatible with the site, the site might be damaged, etc.  
       * See: https://en.wikipedia.org/wiki/Neurotransmitter
       */ 
      ReceptorBindingResult bind(
        PostSynapticBindingSite postSynapticBindingSite, 
        unique_ptr<Neurotransmitter> neuroTransmitter);
  };

};