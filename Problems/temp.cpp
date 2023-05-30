#include <bits/stdc++.h>

using namespace std ;

void prodThreenums(int n){
    int a=1,b=1,c=1;
    for(int i =2;i*i<n;i++){
        if(n%i==0){
            a = i;
            break;
        }
    }
    n=n/a;
    for(int i =2;i*i<n;i++){
        if(n%i==0 && i>a){
            b = i;
            break;
        }
    }
    c=n/b;
    if(a!=b && b!=c && a!=c && a!=1 && b!=1 && c!=1){
        cout<<"YES"<<"\n"<<a<<" "<<b<<" "<<c<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

    
}

int main(){
    // int bruteForce = 0;
    int temp = 0;
    cin>>temp;

    for(int i =0;i<temp;i++){
        int k ; 
        cin >> k;
        prodThreenums(k);

    }
    return 0;
}