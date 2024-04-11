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
         for(int j=1;j<=column;j++){
            if(i==1||j==1||i==row||j==column){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<"\n";
      }
   return 0;
}