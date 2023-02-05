#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int endTime=(c*60)+d;
    int startTime=(a*60)+b;

    int difference=endTime-startTime;
    if (difference<=0)
    {
        int totalHours=24*60;
        int hours=(totalHours+difference)/60;
        int minutes=(totalHours+difference)%60;
       cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
    }
    else
    {
        int hours=difference/60;
        int minutes=difference%60;
        cout<<"O JOGO DUROU "<<hours<<" HORA(S) E "<<minutes<<" MINUTO(S)"<<endl;
    }
    
    
 
    return 0;
}