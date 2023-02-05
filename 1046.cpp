#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,sum=0;
    cin>>a>>b;
    if (a>b)
    {
        sum=(24-a)+b;
        cout<<"O JOGO DUROU "<<sum<<" HORA(S)"<<endl;
    }
    else if (a<b)
    {
        sum=b-a;
        cout<<"O JOGO DUROU "<<sum<<" HORA(S)"<<endl;
    }
    else
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    
 
    return 0;
}