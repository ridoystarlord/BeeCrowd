#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double s=0;
    int i=1;
    while (i<=100)
    {
       s=s+(1/(double)i);
       i++;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
 
    return 0;
}