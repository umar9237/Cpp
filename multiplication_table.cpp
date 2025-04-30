#include<iostream>
using namespace std;
int main(){
int rows,cols;
cout<<"enter no of rows"<<endl;
cin>>rows;
cout<<"enter no of cols"<<endl;
cin>>cols;
for(int i=1;i<=rows;i++){
    for(int j=1;j<=cols;j++){
        cout<<i*j<<"\t";
    }
    cout<<endl;
}

return 0;
}