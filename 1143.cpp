#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    int loopStartVal=1;
    for (int i = 0; i < n; i++)
    {
        int t=loopStartVal;
        for (int i = 0; i < 3; i++)
        {
            cout<<t;
            if (i+1<3)
            {
                cout<<" ";
            }
            
            t=t*loopStartVal;
        }
        loopStartVal++;
        cout<<endl;
        
    }
    
 
    return 0;
}