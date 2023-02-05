#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
       int temp;
       cin>>temp;
       int sum=0;
       for (int j = 1; j < temp; j++)
       {
            if(temp%j==0){
                sum+=j;
            }
       }
       if (sum==temp)
       {
        cout<<temp<<" eh perfeito"<<endl;
       }
       else
       {
        cout<<temp<<" nao eh perfeito"<<endl;
       }
       
       
    }
    
 
    return 0;
}