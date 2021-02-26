#include <iostream>

using namespace std;

int n;
double * arr;

bool findNotLessThan(double T[], int size, int ref)
{
    for(int i = 0; i < size; i++)
    {
        if(T[i] >= ref) return true;
    }
   return false;
}


int main(void)
{
    cout << "Type n " << endl;
    cin >> n;   //read n from kb
    
    arr = new double[n];

    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    if(findNotLessThan(arr, n, 20)) cout << "TAK";
    else cout << "NIE";
    
    return 0;
}
