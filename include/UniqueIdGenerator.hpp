#pragma once

#include <random>>

using namespace std;

namespace neuWillow
{
  // TODO: This needs *major* optimization, but is the lowest important
  //       item on the priority list. Definitely revisit.
  class UniqueIdGenerator
  {
    public:
      long generateId();

      private:
        default_random_engine _randomGenerator;
  };
}