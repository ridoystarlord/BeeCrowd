#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin>>n;

    int val=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<val<<" ";
            val++;
        }
        val++;
        cout<<"PUM"<<endl;
        
    }
    
 
    return 0;
}