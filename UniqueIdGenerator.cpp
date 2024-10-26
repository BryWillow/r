#include <random>
#include "include/UniqueIdGenerator.hpp"

namespace neuWillow
{
    using namespace std;

    long UniqueIdGenerator::generateId()
    {
        // TODO: I have not tested the performance of this.
        // Revisit, Revist;
        return _randomGenerator();
    }
}