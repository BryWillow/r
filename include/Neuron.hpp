#pragma once

namespace neuWillow
{
  class Neuron
  {
    public:
      long getUniqueId() const { return _uniqueId; }
      
    private:
      long _uniqueId; 
  };
}