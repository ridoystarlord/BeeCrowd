#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    int x,y;
    cin>>x>>y;
    int mini=min(x,y);
    int maxi=max(x,y);
    for (int i = mini+1; i < maxi; i++)
    {
        if(i%5==2 ||i%5==3){
            cout<<i<<endl;
        }
    }
    
 
    return 0;
}