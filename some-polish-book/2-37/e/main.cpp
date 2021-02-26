#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

double T[9];

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

bool areAllNotLessThan(double T[], int size, double ref)
{
    for(int i=0; i < size; i++)
    {
        if(T[i] < ref) return false;
    }
    return true;
}


int main(void)
{
    // initialize random seed
    srand (time(NULL));
   

    //fill
    for(int i = 0; i < 10; i++)
    {
        T[i] = fRand(-4, 28);
    }

    if(areAllNotLessThan(T, 9, 9)) cout << "TAK";
    else cout << "NIE";

    return 0;
}
