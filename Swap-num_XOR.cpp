#include<iostream>
using namespace std;
void swapnum(int &n1,int &n2){
    n1=n1 ^ n2;
    n2=n1 ^ n2;
    n1=n1 ^ n2;
}
int main(){
    int a=5,b=6;
    cout<<"Before swap"<<endl;
    cout<<a<<b<<endl;
    swapnum(a,b);
    cout<<a<<b<<endl;


return 0;
}