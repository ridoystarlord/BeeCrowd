#include <iostream>
 
using namespace std;
 
int main() {
 
   int t,k=0;
   cin>>t;

   for (int i = 0; i < 1000; i++)
   {
    if (k<t-1)
    {
        cout<<"N["<<i<<"] = "<<k<<endl;
        k++;
    }
    else
    {
        cout<<"N["<<i<<"] = "<<k<<endl;
        k=0;
    }
    
   }
   
 
    return 0;
}