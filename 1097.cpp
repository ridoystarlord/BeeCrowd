#include <iostream>
 
using namespace std;
 
int main() {

    int j=7;

    for (int a = 1; a <= 9; a=a+2)
    {
        int k=j;
       for (int b = 0; b < 3; b++)
       {
        cout<<"I="<<a<<" J="<<k<<endl;
        k--;
       }
       j=j+2;
    }
    
 
    return 0;
}