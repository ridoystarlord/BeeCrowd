#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int x,y,n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;

        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            cout<<fixed<<setprecision(1)<<(double)x/y<<endl;
        }
    }
    
 
    return 0;
}