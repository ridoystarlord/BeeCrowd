#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    double m[12][12];

    int n;
    char ch;
    cin>>n>>ch;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double temp;
            cin>>temp;
            m[i][j]=temp;
        }
        
    }
    double ans=0;
    if (ch=='S')
    {
        for (int i = 0; i < 12; i++)
        {
            ans+=m[i][n];
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    else if(ch=='M')
    {
        for (int i = 0; i < 12; i++)
        {
            ans+=m[i][n];
        }
        cout<<fixed<<setprecision(1)<<ans/12<<endl;
    }

    return 0;
}
