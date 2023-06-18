#include <bits/stdc++.h>
using namespace std; 
int fun( int N){
    if(N==0){
        return 0;
    }
    return N+fun(N-1);
}

int main(){

    int N;   
    cin>>N;
    cout<<fun(N);
}