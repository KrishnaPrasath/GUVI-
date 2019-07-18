#include <iostream>
#include <math.h>

using namespace std;

int checkArmStrong( int n);

int main() {
    int N,E;
    cin>>N>>E;
    while(N<E){
        int ans=checkArmStrong(N);
    if(ans==N){
        cout<<ans<<" ";
    }
    N++;
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
