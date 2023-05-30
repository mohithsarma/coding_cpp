
#include <bits/stdc++.h>

using namespace std ;
int reverse(int n ){
    int r =0;
    while(n>0){
        r*=10;
        r+=n%10;
        n=n/10;
    }
    // cout<<r<<"\n";
    return r;
}
int palindrome(int i ){
    int r = reverse(i);
    int sum = 1000*i+r;
    cout<<sum<<"\n";
    return sum;
}
// find one factor more 100;
bool hasFactorGt100(int n){
    for(int i=100;i<=999;i++){
        if(n%i==0){
            if(n/i>=100 && n/i<=999)
            return true;
        }
    }
    return false;
}
int main(){
    // int maxPal = 0;
    for(int i=999;i>=100;i--){
        int pal = palindrome(i);
        if(hasFactorGt100(pal)){
            cout<<pal<<" is the max\n";
            return 0;
        }
    }
    return 0;
}