#include<iostream>
using namespace std;
class student{
    public:
    int roll_no = 25;
    int height = 6;
    int marks = 98;


};
int main(){ 
    student Rohit;
    cout<<"The roll no of Rohit = "<<Rohit.roll_no<<endl;
    cout<<"The Height of the rohit = "<<Rohit.height<<endl;
    cout<<"The marks of the Rohit = "<<Rohit.marks;
    return 0;


}