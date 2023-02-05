#include <iostream>
 
using namespace std;
 
int main() {
 
   int temp;
   int even=0,odd=0,positive=0,negative=0;

   for (int i = 0; i < 5; i++)
   {
    cin>>temp;
    if (temp>0)
    {
        positive++;
    }
    else if(temp<0)
    {
        negative++;
    }

    if (temp%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    
   }

    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<positive<<" valor(es) positivo(s)"<<endl;
    cout<<negative<<" valor(es) negativo(s)"<<endl;
   
 
    return 0;
}