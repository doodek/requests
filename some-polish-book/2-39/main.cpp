#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;
double * T;
int n;

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}


int main(void)
{
    // initialize random seed
    srand (time(NULL));
    
    cout << "type n " << endl;
    cin >> n;

    T = new double[n];

    //fill
    for(int i = 0; i < n; i++)
    {
        T[i] = fRand(-5, 40);
    }


    double min = T[0];
    //int count = 1;
    for(int i = 1; i < n; i++)
    {
        if(T[i] < min)
        {
            min = T[i];
            //count = 1;
        }    
        /*
        else if(T[i] == min)
        {
            count++;
        }
        */
    }

    cout << "Najmniejsza to: " << min  << endl; ;

    
    return 0;
}
