#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i]=n;
        n=n+n;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"N["<<i<<"] = "<<arr[i]<<endl;
    }
    
 
    return 0;
}