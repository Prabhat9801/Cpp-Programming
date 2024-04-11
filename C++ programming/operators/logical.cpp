#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    cout<<"\n"<<(a<b)&&(a>b);
    cout<<"\n"<<(a<b)||(a>b);
    cout<<"\n"<<(a>b)&&(a<b);
    cout<<"\n"<<(a>b)||(a<b);
    cout<<"\n"<<!(a>b);
    cout<<"\n"<<!(a<b);
    return 0;
    
}