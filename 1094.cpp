#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int c=0,r=0,s=0,count=0;

 for (int i = 0; i < n; i++)
 {
    int temp;
    char ch;

    cin>>temp>>ch;
    // getchar();
    count+=temp;
    if(ch=='C'){
        c+=temp;
    }else if(ch=='R'){
        r+=temp;
    }else if(ch=='S'){
        s+=temp;
    }
    
 }
cout<<fixed<<setprecision(2);
cout<<"Total: "<<count<<" cobaias"<<endl;
cout<<"Total de coelhos: "<<c<<endl;
cout<<"Total de ratos: "<<r<<endl;
cout<<"Total de sapos: "<<s<<endl;
cout<<"Percentual de coelhos: "<<(100*c)/(double)count<<" %"<<endl;
cout<<"Percentual de ratos: "<<(100*r)/(double)count<<" %"<<endl;
cout<<"Percentual de sapos: "<<(100*s)/(double)count<<" %"<<endl;
 
 
    return 0;
}