#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,z;
    cin>>x;
    while (1)
    {
        cin>>z;
        if(z>x){
            break;
        }
    }

    int sum=0,count=0;

    while (1)
    {
        sum+=x;
        count++;
        if (sum>z)
        {
            break;
        }
        x++;
        
    }
    cout<<count<<endl;

    
 
    return 0;
}