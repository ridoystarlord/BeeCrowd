#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double temp,sum=0;
    int count=0;

    for (int i = 0; i < 6; i++)
    {
        cin>>temp;

        if (temp>0)
        {
            count++;
            sum=sum+temp;
        }
        
    }
    cout<<fixed<<setprecision(1);
    cout<<count<<" valores positivos"<<endl;
    cout<<sum/count<<endl;
    
 
    return 0;
}