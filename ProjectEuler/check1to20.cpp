#include <bits/stdc++.h>

using namespace std ;
// long long int gcd(long long int a , long long int b){ 
//     long long int r = 0; 
//     if (a<b){
//         a= a+b;
//         b= a-b;
//         a= a-b;
//     }
//     while(b){
//         r = a%b;
//         a = b;
//         b = r; 
//     }
//     cout<<"a = "<<a<<"\n";
//     return a;

// }

int main(){
// long long int k = 1;
// long long int check = 116396280;
long long int lcm = 2520 ;
long long int rem;
// long long int n = 100;
    // while(n>0){
    for(long long int i=11;i<=20;i++){
        // k = (k*i)/__gcd(i,k);
        // if(gcd(lcm,i)<=10 && gcd(lcm,i)>20)
        lcm = lcm*i / __gcd(lcm,i);
        // rem = lcm*i % __gcd(lcm,i);
        // cout<<" lcm = " << lcm << "\n";

            // cout<<k<<" remainder for "<<i<<" is "<<k%i<<"\n";
    }
    // for(long long int i=11;i<= 20;i++){
        // cout<<lcm%i<<" remainder for "<<i<<"\n";
    // }
    cout<<lcm<<"\n";
    // n-=1;
    // }
    // cout<<116396280%k<<"\n";
    return 0 ; 
}