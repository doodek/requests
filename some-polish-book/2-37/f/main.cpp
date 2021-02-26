#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

int T[11];

bool isAnyDivisibleBy(int T[], int size, int ref)
{
    for(int i=0; i < size; i++)
    {
        if((T[i] % ref) == 0) return true;
    }
    return false;
}


int main(void)
{
    // initialize random seed
    srand (time(NULL));
   
    //fill
    for(int i = 0; i < 11; i++)
    {
        T[i] = rand() % 34;
    }

    if(isAnyDivisibleBy(T, 11, 4)) cout << "NIE";
    else cout << "TAK";

    return 0;
}
