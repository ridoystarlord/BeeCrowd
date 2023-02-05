#include <iostream>
#include<algorithm>
#include <cmath>
 
using namespace std;
 
int main() {
 
    double a,b,c;

    cin>>a>>b>>c;

    double arr[3]={a,b,c};

    sort(arr,arr+3,greater<int>());

    a=arr[0];
    b=arr[1];
    c=arr[2];

    double d=pow(a,2);
    double e=pow(b,2);
    double f=pow(c,2);

    if (a>=b+c)
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if (d==(e+f))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if (d>(e+f))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if (d<(e+f))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if (a==b && b==c && a==c)
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if (a==b || b==c || a==c)
    {
         cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    
    
 
    return 0;
}