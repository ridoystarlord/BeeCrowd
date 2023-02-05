#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,temp;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp==0){
            cout<<"NULL"<<endl;
        }
        else if (temp%2==0)
        {
            if (temp>0)
            {
                cout<<"EVEN POSITIVE"<<endl;
            }
            else
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }
            
        }
        else
        {
            if (temp>0)
            {
                cout<<"ODD POSITIVE"<<endl;
            }
            else
            {
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
        
    }
    
 
    return 0;
}