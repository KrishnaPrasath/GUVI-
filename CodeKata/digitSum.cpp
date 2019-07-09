//#sumofDigits
#include <iostream>
using namespace std;
int main(){
  int a,temp=0;
  cin>>a;
  while(a>0){
    temp++;
    a/=10;
  }
  cout<<temp;
}

