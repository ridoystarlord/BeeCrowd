#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int temp,sum=0,count=0;
    while (1)
    {

        cin>>temp;

        if (temp<0)
        {
            break;
        }
        else
        {
            sum+=temp;
            count++;
        }
        
    }
    cout<<fixed<<setprecision(2)<<(double)sum/count<<endl;
 
    return 0;
}