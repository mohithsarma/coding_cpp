#include <bits/stdc++.h>

using namespace std; 
// functions are a set of code that will perform something for you 
// functions are used to modularise the code. 
// Functions are used to increase readability of the code you can make the code such that it can be understood by a thierd person. 
// Functions are used same code multiple times. 
// most used functions are. 
// void -> which doesn't return anything. 
// return 
// parameterised. 
// non-paramaterised.  

void printName(){
    cout<<"hey striver\n";
}
void printName(string name){
    cout<<"hey " << name <<" \n";
}

int main () {

    string name; 
    cin >> name ; 
    printName(name);    
    
    string name2;
    cin>> name2; 
    printName(name2);
    return 0; 


}
 