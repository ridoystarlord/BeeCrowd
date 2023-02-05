#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;

        unsigned long long int arr[temp+1];

        arr[0]=0;
        arr[1]=1;

        for (int j = 2; j <= temp; j++)
        {
            arr[j]=arr[j-2]+arr[j-1];
        }
        cout<<"Fib("<<temp<<") = "<<arr[temp]<<endl;
    }
    
 
    return 0;
}