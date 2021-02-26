#include <iostream>

using namespace std;

int n;
double * arr;

bool findOther(double T[], int size, int find)
{
    for(int i = 0; i < size; i++)
    {
        if(T[i] != find) return true;
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

    if(findOther(arr, n, 2)) cout << "TAK";
    else cout << "NIE";
    
}
