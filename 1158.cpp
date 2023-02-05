#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   cin>>n;

   for (int i = 0; i < n; i++)
   {
    int x,y,sum=0,j=0;
    cin>>x>>y;

    if (x%2==0)
    {
        x=x+1;
    }
    

    while (j<y)
    {
        sum=sum+x;
        x=x+2;
        j++;
    }
    cout<<sum<<endl;
    
   }
   
 
    return 0;
}