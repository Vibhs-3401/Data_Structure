#include<iostream>
using namespace std;

int main() {

  int row;
  cin>>row;
  
  for (int i=1; i<=row; i++) {
    for (int col = 1; col<=i; col++) {
        cout<<i<<" ";
    }
    cout<<endl;
  }
  return 0;
}
