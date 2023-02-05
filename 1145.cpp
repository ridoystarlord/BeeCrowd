#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y;
    cin>>x>>y;

    int start=1;
    while (start<=y)
    {
        for (int j = 0; j < x; j++)
        {
            cout<<start;
            if (j+1<x)
            {
                cout<<" ";
            }
            
            start++;
        }
        cout<<endl;
        
    }
    
 
    return 0;
}