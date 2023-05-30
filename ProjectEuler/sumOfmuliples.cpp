#include <bits/stdc++.h>

using namespace std ;

int main(){

    int k=3,l=5,m=15;
    int mult = k ; 
    int multl = l ; 
    int multm = m; 
    int sumk = 0;
    while(mult<1000){
        sumk+=mult; 
        mult +=3; 
    }
    std::cout<<sumk<<"\n"<<mult<<"\n";
    int suml = 0;
    while(multl<1000){
        suml+=multl; 
        multl +=l; 
    }
    std::cout<<suml<<"\n"<<multl<<"\n";
    int summ = 0;
    while(multm<1000){
        summ+=multm; 
        multm +=m; 
    }
    std::cout<<summ<<"\n"<<multm<<"\n";
    

    std::cout<<sumk+suml-summ<<" result\n";
    return 0;
}