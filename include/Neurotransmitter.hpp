#pragma once

namespace neuWillow
{
  /**
   * There are quite a few more neurotransmitters, but
   * these are the ones we are interested in.
   */
  enum NeurotransmitterTypes
  {
    Acetylcholine,
    AminoAcid,
    Dopamine,
    Gaba,
    Glutamate,
    Histaime,
    Neuropeptide,
    Norepinephrine,
    Peptide,
    Serotonin,
  };

  class Neurotransmitter
  {
    public:
      Neurotransmitter();
      ~Neurotransmitter();
      
    public:
      virtual bool isExcitatory() = 0;
  };

  class Dopamine : Neurotransmitter
  { 
    public:
      bool isExcitatory() { return true; }
  };

  class Gaba : Neurotransmitter
  { 
    public:
      bool isExcitatory() { return false; }
  };

  class Glutamate : Neurotransmitter
  { 
    public:
      bool isExcitatory() { return true; }
  };

  class Seratonin : Neurotransmitter
  { 
    public:
      bool isExcitatory() { return false; }
  };

} // namespace neuWillow