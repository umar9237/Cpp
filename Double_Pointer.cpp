#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *ptr=&num;
    int **dptr=&ptr;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<*dptr<<endl;
    cout<<**dptr<<endl;

return 0;
}