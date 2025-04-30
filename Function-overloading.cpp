#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
double add(double a,double b){
    return a+b;

}
int main(){
    cout<<add(5,6)<<endl;
    cout<<add(6,7,10)<<endl;
    cout<<add(5.5,6.5)<<endl;



return 0;
}