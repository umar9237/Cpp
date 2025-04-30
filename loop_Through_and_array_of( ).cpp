#include<iostream>
using namespace std;
int main()
{
    int mynumber[5]={10,20,30,40,50};
    for(int i=0;i< sizeof(mynumber)/ sizeof(mynumber[0]);i++){
        cout<<mynumber[i]<<endl;
    }

}
