#include<iostream>
using namespace std;
void swappointer(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=4,y=5;
    swappointer(&x,&y);
    cout<<"The value of a is "<<x<<" and the value of y is "<<y<<endl;

        
return 0;
}