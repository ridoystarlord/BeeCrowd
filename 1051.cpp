#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double salary;
    double tax=0;
    cin>>salary;

    if (salary>=0 && salary<=2000)
    {
        cout<<"Isento"<<endl;
        return 0;
    }
    else if (salary>2000 && salary<=3000)
    {
        salary=salary-2000;
        tax=(salary*8)/100;
    }
    else if (salary>3000 && salary<=4500)
    {
        salary=salary-2000;
        if (salary>1000)
        {
            double separateAmount=salary-1000;
            tax=tax+((1000*8)/100)+((separateAmount*18)/100);
        }
        else
        {
            tax=tax+((1000*8)/100);
        }
        
    }
    else
    {
        salary=salary-2000;
        if (salary>1500)
        {
            double separateAmount=salary-2500;
            tax=tax+((1000*8)/100)+((1500*18)/100)+((separateAmount*28)/100);
        }
        else
        {
            tax=tax+((1000*8)/100);
        }
        
    }
    cout<<fixed<<setprecision(2)<<"R$ "<<tax<<endl;
    
 
    return 0;
}