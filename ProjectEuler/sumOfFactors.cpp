
#include <bits/stdc++.h>

using namespace std ;

int main(){
    long long int num = 600851475143,sum=0;
    // int  num =1475143;
    
    int count=0;
    for( long long int i=2;i <sqrt(num) ;i++){
        if(num%i==0){
            count++;
            cout<<i<<"*"<<num/i<<" \n";
            if(num/i!=i){
                sum+=i;
                sum+=num/i;
            }
            else {
                sum+=i;
            }
        }


    }
    cout<<"sum ="<<sum;
    return 0;
}