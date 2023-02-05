#include <iostream>
 
using namespace std;
 
int main() {
 
    int i=1,temp;

    while (i!=0)
    {
        cin>>temp;

        if (temp==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            i=0;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }
        
    }
    
 
    return 0;
}