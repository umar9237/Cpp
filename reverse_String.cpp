#include<iostream>
#include<string>
using namespace std;
string reversestring(const string &str){
    string reversed;
    for(int i=str.length()-1;i>=0;i--){
        reversed+=str[i];
    }
    return reversed;
}
int main(){
    string str;
    string reversed;
cout<<"Enter a string"<<endl;
getline(cin,str);
reversed=reversestring(str);
cout<<reversed;
return 0;
}