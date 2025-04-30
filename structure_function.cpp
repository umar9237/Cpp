#include<iostream>
using namespace std;
struct student{
    string name;
    int rollno;
    int marks[3];
};
void inputdetails(student &s){
    cout<<"Enter name "<<endl;
    cin>>s.name;
    cout<<"Enter Roll No: "<<endl;
    cin>>s.rollno;
    cout<<"Enter marks of 3 subjects: "<<endl;
    for(int i=0;i<3;i++){
        cin>>s.marks[i];
    }
    }
    void calculate(const student &s,int &total,float &avg){
        total=0;
        for(int i=0;i<3;i++){
            total+=s.marks[i];
        }
        avg=total/3;
    }
    void displaydetails(const student &s,int total,float avg){
        cout<<"\n STUDENT DETAILS\n"<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Roll No: "<<s.rollno<<endl;
        cout<<"Total marks: "<<total<<endl;
        cout<<"Average: "<<avg<<endl;
            
            }

int main(){
    student s;
    int total;
    float avg;
    inputdetails(s);
    calculate(s,total,avg);
    displaydetails(s,total,avg);

 
return 0;
}