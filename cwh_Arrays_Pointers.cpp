#include<iostream>
using namespace std;
int main(){
    int marks[4]={10,40,60,70};
    cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
            cout<<marks[2]<<endl;
                cout<<marks[3]<<endl;
                int*p=marks;
                // cout<<*p<<endl;
                // cout<<*(p+1)<<endl;
                // cout<<*(p+2)<<endl;
                // cout<<*(p+3)<<endl;

                cout<<*(p++)<<endl;
                cout<<*p<<endl;


 // int marks[4]={20,30,50,55};
 // int i=0;
// do{
 // cout<<marks[i]<<endl;
   //     i++;
   // }
 // while(i<4);



        

}