#include<iostream>
using namespace std;
int myfunction(int x,int y){
    return x+y;
}
double myfunctionplus(double x,double y){
    return x+y;
}
int main(){
    int num1=myfunction(8,5);
    double num2=myfunction(3.5,6.26);
    cout<<"int: "<<num1<<endl;
    cout<<"double: "<<num2<<endl;
}
