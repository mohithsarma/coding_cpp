#include <bits/stdc++.h>

using namespace std ;
bool isPrime(long long int n ){
    long long int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    long long int num = 600851475143;
    // int  num =1475143;
    vector <long long int> v ;
    long long int maxPrimeFactor=0;
    int count=0;
    for( long long int i=2;i <sqrt(num) ;i++){
        if(num%i==0){
            count++;
            cout<<i<<"*"<<num/i<<" \n";
            if(isPrime(i)){
                if(maxPrimeFactor<i){
                    maxPrimeFactor=i;
                }
            }
            if(isPrime(num/i)){
                if(maxPrimeFactor<num/i){
                    maxPrimeFactor=num/i;
                }
            }
            v.insert(v.end(),{i,num/i});

        }


    }
    cout<<"maxPrimeFactor =\n"<<maxPrimeFactor;
    return 0;
}