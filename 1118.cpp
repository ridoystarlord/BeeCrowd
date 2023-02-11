#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {

    double x,y;

    while (1)
    {
        while(cin>>x){
            if(x>=0 && x<=10){
                break;
            }
            cout<<"nota invalida"<<endl;
        }
        while (cin>>y)
        {
            if(y>=0 && y<=10){
                break;
            }
            cout<<"nota invalida"<<endl;
        }
        

        cout<<fixed<<setprecision(2)<<"media = "<<(x+y)/2<<endl<<"novo calculo (1-sim 2-nao)"<<endl;
        int temp;
        while(cin>>temp){
            if(temp<1 || temp>2){
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            }
            if(temp==2){
            return 0;
            }
            if(temp==1){
            break;
            }

        }

        
        


    }
    
    
    return 0;
}