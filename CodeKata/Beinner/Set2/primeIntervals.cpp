#include <iostream>
using namespace std;

bool prime(int n);

int main(){
    int N,Q;
    cin>>N>>Q;
    while(N<Q){
        bool result=prime(N+1);
        if(result){
            cout<<N+1<<" ";
        }
        N++;
    } 
}

bool prime(int n){
    bool flag=true;
    if(n<0){
        cout<<"no";
        flag=false;
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=false;
            }
        }
    }return flag;
    }
    
