#include<iostream>
using namespace std;
int main()
{
    int x[2][3]={{10,20,30},{40,50,60}};
    for(int i=0;i<2;i++)//for rows
    {
        for(int j=0;j<=2;j++)//for columns
        {
            cout<<x[i][j];
        }
        cout<<endl;
    }
}