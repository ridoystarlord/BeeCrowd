#include <iostream>
 
using namespace std;
 
int main() {
 
    while (1)
    {
        int x;
        cin>>x;

        if (x==0)
        {
            break;
        }else{
            for (int i = 1; i <= x; i++)
            {
                cout<<i;
                if (i+1<=x)
                {
                    cout<<" ";
                }
                
            }
            cout<<endl;
            
        }
        
    }
    
 
    return 0;
}