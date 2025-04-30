#include<iostream>
using namespace std;
void funcB(){
    cout<<"Inside Function B"<<endl;
}
void funcA(){
    cout<<"Inside Function A"<<endl;
    funcB();
}
int main(){
    cout<<"Inside main"<<endl;
    funcA();

return 0;
}