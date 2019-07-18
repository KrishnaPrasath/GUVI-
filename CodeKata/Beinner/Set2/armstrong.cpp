#include <iostream>
#include <math.h>

using namespace std;

int checkArmStrong( int n);

int main() {
    int N;
    cin>>N;
    int ans=checkArmStrong(N);
    if(ans==N){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}

int checkArmStrong( int n){
    int temp,result=0;
    while(n>0){
        temp=0;
        temp=n%10;
        
        n/=10; 
        result=result+pow(temp,3);
        }
    return result;
}
