#include <iostream>
using namespace std;

int main(){
  int N,k,temp=1;
  cin>>N>>k;
  while(k>0){
    temp*=N;
    k--;
  }
  cout<<temp;
}
