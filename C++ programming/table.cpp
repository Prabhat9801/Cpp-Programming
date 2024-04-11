#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cout<<"Enter the value of x = ";
    cin>>x;
    for(int i=1;i<=10;i++){
        y = x*i;
        cout<<y<<"\n";
    }
    return 0;
}