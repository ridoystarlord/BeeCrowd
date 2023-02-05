#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,count=2;
    cin>>n;

    int f=0,e=1;
    cout<<0;
    while (count<=n)
    {
        if (count<=n)
        {
            cout<<" ";
        }
        int temp=f;
        f=f+e;
        cout<<f;
        e=temp;
        count++;
        
        
    }
    cout<<endl;
 
    return 0;
}