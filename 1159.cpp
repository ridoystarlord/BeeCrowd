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
   }
   else
   {
    int sum=0,i=0,a=x;
    while (i < 5)
    {
        if (a%2==0)
        {
            sum=sum+a;
            a=a+2;
            i++;
        }else{
            a=a+1;
        }
        
    }
    cout<<sum<<endl;
    
   }
   
}

 
    return 0;
}