#include<iostream>
using namespace std;
int main(){
    int originalscores[5]={100,90,70,40,20};
    int backupscores[5];
    for(int i=0;i<5;i++){
    backupscores[i]=originalscores[i];
    }
    cout<<"backup scores: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"player"<<(i+1)<<":"<<backupscores[i]<<endl;
    }
}  












