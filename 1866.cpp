#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,n;
    cin>>n;

    while (n)
    {
        cin>>a;
        if (a%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
    n--;
    }
    

    
    
 
    return 0;
}