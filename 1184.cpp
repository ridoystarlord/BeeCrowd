#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {

    double m[12][12];

    int n;
    char ch;
    cin>>ch;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double temp;
            cin>>temp;
            m[i][j]=temp;
        }
        
    }
    double ans=0,diagonal=0,count=0;;
    if (ch=='S')
    {
        for (int j = 0; j < 12; j++)
        {
            for (int i = 0; i < diagonal; i++)
            {
                ans+=m[j][i];
            }
            diagonal++;
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    if (ch=='M')
    {
        for (int j = 0; j < 12; j++)
        {
            for (int i = 0; i < diagonal; i++)
            {
                ans+=m[j][i];
                count++;
            }
            diagonal++;
        }
        cout<<fixed<<setprecision(1)<<ans/count<<endl;
    }

    return 0;
}
