#include <bits/stdc++.h>

using namespace std; 
// write a program to find if you are
//  >=18 , yes 
// <18, no 
int main() {
    int age; 
    cin >> age; 
    if(age>=18){
        cout<<"You are an adult!\n";
    }
    else if(age<18) { 
        cout<< "you are not an adult\n";
    }

    return 0 ; 
}