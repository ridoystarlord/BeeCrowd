#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int a,b,sum=0;

    cin>>a>>b;

    int mini=min(a,b);
    int maxi=max(a,b);

    for (int i = mini; i <= maxi; i++)
    {
        if (i%13!=0)
        {
            sum=sum+i;
        }
        
    }
    cout<<sum<<endl;
 
    return 0;
}