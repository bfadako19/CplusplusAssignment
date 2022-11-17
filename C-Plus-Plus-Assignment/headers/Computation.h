#include <iostream>

using namespace std;

class Computation
{
    public:
    
        virtual void computeLowest() = 0;
        virtual void computeHighest() = 0;
        virtual void computeSum() = 0;
};