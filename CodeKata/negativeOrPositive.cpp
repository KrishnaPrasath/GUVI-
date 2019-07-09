#include <iostream>
using namespace std;
int num ;
void check(int num);
int main(){
cin>>num;
check(num);
}
void check(int num){
  if (num > 0){
    cout<"Positive";
  } else if (num < 0){
        cout<<"Negative";
  } else cout<<"Zero";
  
}
