#include <iostream>
 
using namespace std;
 
int main() {
 
    int postion=0,temp,prev=-1;

    for (int i = 0; i < 100; i++)
    {
        cin>>temp;
        if (temp>prev)
        {
            postion=i;
            prev=temp;
        }
        
    }
    cout<<prev<<endl<<postion+1<<endl;
    
 
    return 0;
}