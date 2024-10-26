#pragma once

namespace neuWillow
{
  class Synapse
  {
    public:
      Synapse(long uniqueId);
      ~Synapse();
      
      long getUniqueId() const { return _uniqueId; }

      private:

        long _uniqueId;
  };     
}