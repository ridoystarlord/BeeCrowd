#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,count=0;

    cin>>x;

    while (count<6)
    {
        if (x%2==1)
        {
            count++;
            cout<<x<<endl;
        }
        x++;
        
    }
    

 
    return 0;
}