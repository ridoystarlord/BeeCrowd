#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double a,b,c,d;
    cin>>a>>b>>c>>d;

    double firstAvg=(a*2+b*3+c*4+d*1)/10;
    cout<<fixed<<setprecision(1);
    cout <<"Media: "<<firstAvg<<endl;
    if (firstAvg>=7)
    {
        cout <<"Aluno aprovado."<<endl;
    }
    else if (firstAvg<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(firstAvg>=5 && firstAvg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        double exam;
        cin>>exam;
        cout<<"Nota do exame: "<<exam<<endl;
        double secondAvg=(firstAvg+exam)/2;
        if (secondAvg>=5)
        {
            cout <<"Aluno aprovado."<<endl;
        }
        else if (secondAvg<4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<"Media final: "<<secondAvg<<endl;
    }
    

 
    return 0;
}