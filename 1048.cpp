#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double a,earn;
    int per;
    cin>>a;

    if (a>=0 && a<=400)
    {
        per=15;
        earn=(a*per)/100;
    }
    else if (a>=400.01 && a<=800)
    {
        per=12;
        earn=(a*per)/100;
    }
    else if (a>=800.01 && a<=1200)
    {
        per=10;
        earn=(a*per)/100;
    }
    else if (a>=1200.01 && a<=2000)
    {
        per=7;
        earn=(a*per)/100;
    }
    else
    {
        per=4;
        earn=(a*per)/100;
    }
    cout<<fixed<<setprecision(2);
    cout<< "Novo salario: "<<a+earn<<endl;
    cout<< "Reajuste ganho: "<<earn<<endl;
    cout<<"Em percentual: "<<per<<" %"<<endl;
 
    return 0;
}