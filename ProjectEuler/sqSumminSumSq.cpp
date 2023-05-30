#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n=100; 
    int sumofsq = n*(n+1)*(2*n+1)/6;
    int sumsSq =  n*n*(n+1)*(n+1)/4;
    cout<<sumsSq-sumofsq;
    return 0;
}