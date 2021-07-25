#include<iostream>
using namespace std;

int main() {

  int row;
  cin>>row;
  int count = 1;
  
  for (int i=1; i<=row; i++) {
    for (int col = 1; col<=i; col++) {
        cout<<"*";
    }
    
    int space = 2*row - 2*i;
    for (int col = 1; col<=space; col++) {
        cout<<" ";
    }
    for (int col=1; col<=i; col++) {
        cout<<"*";
    }
    cout<<endl;
  }
  
  for (int i=row; i>=1; i--) {
    for (int col = 1; col<=i; col++) {
        cout<<"*";
    }
    
    int space = 2*row - 2*i;
    for (int col = 1; col<=space; col++) {
        cout<<" ";
    }
    for (int col=1; col<=i; col++) {
        cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
