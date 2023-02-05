#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double a,b,c;

    cin>>a>>b>>c;

    double sqrtValue=pow(b,2)-(4*a*c);

    if (2*a==0 || sqrtValue<0)
    {
        cout <<"Impossivel calcular"<<endl;
    }
    else
    {
        double r1=(-b+(sqrt(sqrtValue)))/(2*a);
        double r2=(-b-(sqrt(sqrtValue)))/(2*a);
        cout <<fixed<<setprecision(5);
        cout <<"R1 = "<<r1<<endl;
        cout <<"R2 = "<<r2<<endl;
    }
    

    return 0;
}