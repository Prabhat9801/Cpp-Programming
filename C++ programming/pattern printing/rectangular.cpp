#include<iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter the value of row = ";
    cin>>row;
    int column;
    cout<<"Enter the value of column = ";
    cin>>column;
    for(int i=1;i<=row;i++){
        cout<<"*";
        for(int j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<"\n";
        // cout<<"*";
    }
    // cout<<"\n";
    return 0;
}