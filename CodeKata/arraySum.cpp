#include <iostream>
using namespace std;
int main() {
  int N,K,x,i=0;
  int arr[N];
  cin>>N>>K;
  for(int  i=0;i<N;i++){
    cin>>arr[i];
  }
  int sum=0;
  for(int j=0;j<K;j++){
    sum+=arr[j];
  }
  cout<<sum;
  
}
