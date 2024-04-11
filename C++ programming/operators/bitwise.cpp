#include<iostream>
using namespace std;
int main(){
    int n=100;
    cout<<(100>>2)<<endl; /* (a>>b == a/2^b) */
    cout<<(100<<2)<<endl; /* (a<<b == a*2^b) */
    cout<<(~100)<<endl;
    cout<<(400 & 100)<<endl;
    cout<<(400 | 100)<<endl;
    cout<<(400 ^ 100)<<endl;
    

    return 0;
}