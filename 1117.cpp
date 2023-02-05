#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double a,b;

    while (1)
    {
        cin>>a;
        if (a>=0 && a<=10)
        {
            break;
        }
        cout<<"nota invalida"<<endl;
        
    }
    while (1)
    {
        cin>>b;
        if (b>=0 && b<=10)
        {
            break;
        }
        cout<<"nota invalida"<<endl;
        
    }
    cout<<fixed<<setprecision(2)<<"media = "<<(a+b)/2<<endl;
    
 
    return 0;
}