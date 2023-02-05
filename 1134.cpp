#include <iostream>
 
using namespace std;
 
int main() {

    int a=0,g=0,d=0;
 
    while (1)
    {
        int temp;
        cin>>temp;
        if(temp==4){
            break;
        }else if(temp<1 || temp>4){
            continue;
        }else{
            if (temp==1)
            {
                a++;
            }
            else if (temp==2)
            {
                g++;
            }
            else
            {
                d++;
            }
            
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
    
 
    return 0;
}