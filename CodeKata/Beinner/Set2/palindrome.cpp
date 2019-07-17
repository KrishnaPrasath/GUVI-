#include <iostream>
using namespace std;

int palindrome(int n);

int main(){
    int N;
    cin>>N;
    int result=palindrome(N);
    if(N==result){
        cout<<"yes";
    }else{
        cout<<"no";
    }

}

int palindrome(int n){
    int temp=0,sum=100;
    while(n>0){
        temp*=10;
        temp+=n%10;
        n/=10;
    }
    return temp;
    
}
