#include <iostream>
 
using namespace std;
 
int main() {

    int j=1;

    for (double a = 0; a <= 2; a=a+0.2)
    {
        double k=j+a;
       for (int b = 0; b < 3; b++)
       {
        cout<<"I="<<a<<" J="<<k<<endl;
        k++;
       }
       j=1;
    }
    
 
    return 0;
}