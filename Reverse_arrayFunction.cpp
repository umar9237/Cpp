#include<iostream>
using namespace std;
void reversearr(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={10,9,15};
    int size= sizeof(arr)/sizeof(arr[0]);
    reversearr(arr,size);

return 0;
}