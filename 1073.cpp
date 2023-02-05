#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    cout<<fixed<<setprecision(0);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            cout<<i<<"^2"<<" = "<< pow(i,2)<<endl;
        }
        
    }
    
 
    return 0;
}