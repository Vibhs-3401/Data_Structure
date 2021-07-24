#include<iostream>
using namespace std;

int main() {

  int row;
  cin>>row;
  int count = 1;
  
  for (int i=1; i<=row; i++) {
    for (int col = 1; col<=i; col++) {
        cout<<count<<" ";
        count+=1;
    }
    cout<<endl;
  }
  return 0;
}
