#include <iostream>
 
using namespace std;


void PrintOutput(string msg,int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<msg<<"["<<i<<"] = "<<arr[i]<<endl;
    }
    
}

 
int main() {

    int arr[15];

    for (int i = 0; i < 15; i++)
    {
        cin>>arr[i];
    }

    int even[5]={0},odd[5]={0};
    int i=0,j=0,count=0;

    while (count<15)
    {
        if (arr[count]%2==0)
        {
            even[i]=arr[count];
            i++;
        }
        else
        {
            odd[j]=arr[count];
            j++;
        }

        if(i==5){
            PrintOutput("par",even,i);
            i=0;
        }
        if(j==5){
            PrintOutput("impar",odd,j);
            j=0;
        }

        count++;
        
    }

    if(j!=0){
       PrintOutput("impar",odd,j);
    }

    if(i!=0){
       PrintOutput("par",even,i); 
    }
    
    
 
    return 0;
}