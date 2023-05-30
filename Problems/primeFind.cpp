#include <bits/stdc++.h>

using namespace std ;
bool isPrime(int n ){
    int cnt =0;
    for(int i=1; i*i<n;i++){
        if(n%i==0){
            cnt++;
            if(n/i != i ){
                cnt++;
            }
        }
    }
    if(cnt==2)    return true; 
            return false;

}

int main(){
    // int bruteForce = 0;
    int T = 0;
    cin>>T;

    while(T--){
        int k ; 
        cin >> k;
        if(isPrime(k)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}