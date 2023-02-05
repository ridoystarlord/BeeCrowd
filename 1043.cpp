#include <iostream>
#include <algorithm>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double a,b,c;
    cin>>a>>b>>c;
    double arr[3]={a,b,c};

    sort(arr,arr+3);
    cout<<fixed<<setprecision(1);
    if (arr[2]<arr[0]+arr[1])
    {
        cout<<"Perimetro = "<<a+b+c<<endl;
    }
    else
    {
        cout<<"Area = "<<((a+b)/2)*c<<endl;
    }
    
 
    return 0;
}