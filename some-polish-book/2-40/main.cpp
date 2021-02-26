#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int * T;
int n;

int main(void)
{
    // initialize random seed
    srand (time(NULL));
    
    cout << "type n " << endl;
    cin >> n;

    T = new int[n];

    //fill
    for(int i = 0; i < n; i++)
    {
        T[i] = (rand() % (120 + 1)) - 1;
    }


    double min = T[0];
    int count = 1;
    for(int i = 1; i < n; i++)
    {
        if(T[i] < min)
        {
            min = T[i];
            count = 1;
        }    
        else if(T[i] == min)
        {
            count++;
        }
        
    }

    cout << "Najmniejsza to: " << min << " Wystąpienia: " << count << endl;

    
    return 0;
}
