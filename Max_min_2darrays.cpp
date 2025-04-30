#include<iostream>
using namespace std;
void findmaxmin(int arr[][3],int rows,int cols,int &max,int &min){
    max=arr[0][0];
    min=arr[0][0];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max)max=arr[i][j];
            if(arr[i][j]<min)min=arr[i][j];
        }
       
    }
}
int main(){
    int matrix[3][3]={{12,15,19},{16,19,55,},{19,44,32}};
    int max,min;
    findmaxmin(matrix,3,3,max,min);
    cout<<"Max= "<<max<<endl;
    cout<<"Min= "<<min;
    
return 0;
}