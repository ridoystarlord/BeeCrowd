#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int m,n;
    while (1)
    {
        cin>>m>>n;
        if (m<=0 || n<=0)
        {
            break;
        }
        int sum=0;
        int mini=min(m,n);
        int maxi=max(m,n);
        for (int i = mini; i <= maxi; i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<endl;
        
    }
    
 
    return 0;
}