#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double s=1;
    int i=2,j=3;
    while (j<=39)
    {
       s=s+(j/(double)i);
       i*=2;
       j+=2;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
 
    return 0;
}