#include <iostream>

using namespace std;

int T[15];
bool allNotGreater = true; //we assume all of the numbers ng 11


int main(void)
{
    //fill
    for(int i = 0; i < 15; i++) 
    {
        cin >> T[i];
    }
    

    //check
    for(int i = 0; i < 15; i++)
    {
        if(T[i] > 11)
        {
            allNotGreater = false;
            break;
        }
    }
    if(allNotGreater) cout << "TAK";
    else cout << "NIE";
    
    return 0;
}
