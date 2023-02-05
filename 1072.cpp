#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,temp,in=0,out=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if (temp>=10 && temp<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
        
    }
    cout<<in<<" in"<<endl<<out<<" out"<<endl;
    return 0;
}