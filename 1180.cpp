#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int small=arr[0],position=-1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
            position=i;
        }
        
    }
    cout<<"Menor valor: "<<small<<endl;
    cout<<"Posicao: "<<position<<endl;
    
    
 
    return 0;
}