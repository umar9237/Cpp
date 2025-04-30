#include<iostream>
using namespace std;
int main(){
    int arr[4]={15,17,19,23};
    int low=0;
    int high=3;
    while(low<=high){
        // arr[low]=arr[low] ^ arr[high];
        // arr[high]=arr[low] ^ arr[high];
        // arr[low]=arr[low] ^ arr[high];

        //we can also use this code to swap/revrse numbers
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
 for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
 }



return 0;
}