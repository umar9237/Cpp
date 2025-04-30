#include<iostream>
using namespace std;
int main(){
   const string n="hello";
   string reveresd;
    for(int i=n.length()-1;i>=0;i--){
        reveresd+=n[i];

    }
    cout<<reveresd;
    

return 0;
}