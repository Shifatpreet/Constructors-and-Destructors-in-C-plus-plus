//Shifatpreet Singh
//exp-12
#include<iostream>
using namespace std;
class Student{
    int rollno;
    char name[50];
    double fee;
    public:
    Student()
    {
        cout<<"Enter student Details"<<endl;
        cout<<"Enter The roll number"<<endl;
        cin>>rollno;
        cout<<"Enter The Name of the student"<<endl;
        cin>>name;
        cout<<"Enter The Fees"<<endl;
        cin>>fee;
    }
    void display(){
        cout<<endl<<"Roll Number: "<<rollno<<"\t"<<"Name: "<<name<<"\t"<<"Fee: "<<fee;
    }
};
int main(){
    Student s1;
    s1.display();
    return 0;
}
/*
Output:
Enter student Details
Enter The roll number
98
Enter The Name of the student
Shifat
Enter The Fees
23324

Roll Number: 98	Name: shifat	Fee: 23324
*/
