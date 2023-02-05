#include <iostream>
 
using namespace std;
 
int main() {
 
    int count=0;
    double temp;
    for(int i=0;i<6;i++){
        cin>>temp;
        if(temp>0){
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}