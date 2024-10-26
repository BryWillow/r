#include "include/DendriticReceptor.hpp"
#include "include/UniqueIdGenerator.hpp"

namespace neuWillow
{
  DendriticReceptor::DendriticReceptor()
  {
    // This doesn't need to be a class.
    // I've made it a class for now so I can easily keep track
    // and test all the scenarios where it's used.
    UniqueIdGenerator generator;
    _uniqueId = generator.generateId();
  }

  ReceptorBindingResult DendriticReceptor::bind(
    PostSynapticBindingSite postSynapticBindingSite, 
    unique_ptr<NeuroTransmitter> neuroTransmitter)
  {
    // TODO: check the state of the binding site
    return UnknownFailure;    
  }

  long DendriticReceptor::getUniqueId() const
  {
    return _uniqueId;;
  }
}