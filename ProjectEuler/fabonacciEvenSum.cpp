#include <bits/stdc++.h>

using namespace std ;

int main(){
    long long int max_ceiling = 4000000;
    int i = 1;
    int j = 2; 
    // int fabonacci = 0;
    int sum = j;
    while(j <max_ceiling){
        int temp = j ; 
        j = i+j; 
        i  = temp;
        if(j%2 == 0){
            sum+=j;
        }
    }
    std::cout<<"sum of even numbers is \n "<<sum<<"\n";
    return 0;
}