#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;

int T[10];
bool alldivisible = true; //zakladamy ze sa podzielne

int main(void)
{
    // initialize random seed
    srand (time(NULL));
   

    //fill
    for(int i = 0; i < 10; i++)
    {
        T[i] = rand() % (41-5) + 6;
    }

    //check
    for(int i = 0; i < 10; i++)
    {
        if(T[i] % 3 != 0)
        {
            alldivisible = false;
            break;
        }
    }

    if(alldivisible) cout << "TAK";
    else cout << "NIE";

    return 0;
}
