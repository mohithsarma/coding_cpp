#include <bits/stdc++.h>

using namespace std ;
bool isPrime(long long int n ){
    if(n==2){
        return true; 
    }

     for(long long int i =2 ;i*i<=n;i++){
            if(n%i==0){
                return false;
            }

        }
        return true;
}
int main(){
    long long int n;
    cin>>n;
    long long int count = 0; 
    long long int nums = 2;
    cout<<isPrime(9)<<"\n";
    while(count!=n){

        if(isPrime(nums)){
            count+=1;
            // cout<<count<<" "<<nums<<"\n";
        }
        nums+=1;
    }
    cout<<"number is "<<nums-1<<"\n";
    return 0;
}