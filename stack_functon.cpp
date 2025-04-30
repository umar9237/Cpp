#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> plate;
    plate.push(20);
    plate.push(30);
    plate.push(40);
    cout<<"Top plate "<<plate.top()<<endl;
    plate.pop();
    cout<<"New Top plate "<<plate.top()<<endl;



return 0;
}