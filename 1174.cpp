#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    cout<<fixed<<setprecision(1);
    for (int i = 0; i < 100; i++)
    {
        double temp;
        cin>>temp;

        if (temp<=10)
        {
            cout<<"A["<<i<<"] = "<<temp<<endl;
        }
        
    }
    
 
    return 0;
}