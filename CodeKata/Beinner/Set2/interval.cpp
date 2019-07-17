#include <iostream>
using namespace std;
void interval(int a , int b);
int main(){
    int a,b;
    cin>>a>>b;
    interval(a,b);
}

void interval(int a , int b){
    for(int i=a;i<b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
