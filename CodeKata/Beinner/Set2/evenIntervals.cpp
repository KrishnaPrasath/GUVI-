#include <iostream>
using namespace std;
void interval(int a , int b);
int main(){
    int N,Q;
    cin>>N>>Q;
    interval(N,Q);
}

void interval(int a , int b){
    if(a<0||b<=0){
        cout<<"invalid i/p";       
    }else{
        
    for(int i=a+1;i<b;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    }
}
