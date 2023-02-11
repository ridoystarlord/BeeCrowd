#include <iostream>
 
using namespace std;
 
int main() {

    int count=0;
 
    int x,y,inter=0,gem=0,draw=0;
    while (1)
    {
        cin>>x>>y;

        if (x==y)
        {
            draw++;
        }
        else if (x>y)
        {
            inter++;
        }
        else
        {
           gem++;
        }
        
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        count++;
        int temp;
        cin>>temp;
        if(temp==2){
            cout<<count<<" grenais"<<endl;
            cout<<"Inter:"<<inter<<endl;
            cout<<"Gremio:"<<gem<<endl;
            cout<<"Empates:"<<draw<<endl;
            if (inter==gem)
            {
                cout<<"Não houve vencedor"<<endl;
            }else if(inter>gem){
            cout<<"Inter venceu mais"<<endl;
            }else{
                cout<<"Gremio venceu mais"<<endl;
            }
            
            return 0;
            }
    }
    
 
    return 0;
}