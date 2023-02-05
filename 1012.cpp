#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double a,b,c;

    cin>>a>>b>>c;

    double triangleArea=(a*c)/2;
    double circleArea=3.14159*c*c;
    double trapeziumArea=((a+b)/2)*c;
    double squareArea=b*b;
    double rectangleArea=a*b;
    cout<<fixed<<setprecision(3);

    cout <<"TRIANGULO: "<<fixed<<triangleArea<<endl;
    cout <<"CIRCULO: "<<fixed<<circleArea<<endl;
    cout <<"TRAPEZIO: "<<fixed<<trapeziumArea<<endl;
    cout <<"QUADRADO: "<<fixed<<squareArea<<endl;
    cout <<"RETANGULO: "<<fixed<<rectangleArea<<endl;

    return 0;
}