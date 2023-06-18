#include <bits/stdc++.h>
using namespace std; 
void fun(int i , int N){
    if(i<1)return ;
    cout<<i<<"\n";
    fun(i-1,N);
}

int main(){

    int N;
    cin>>N;
    fun(N,N);
    return 0;
}