#include <bits/stdc++.h>
using namespace std; 
/*
if age < 18 
print -- not eligible for work 
if age >= 18 
print -- eligible for job 
if age >=55 and 57 
print -- eligible for job but retirement soon 
if age > 57 
print -- retirement time 
*/

int main () {
    int age; 
    cin >> age; 
    if ( age < 18){
        cout<< "not eligible for job\n ";
    }
    else if ( age <=57){
        cout<< " Eligible for job "; 
        if(age>=55){
            cout<<", but retirement soon";
        }
        cout<<"\n";
    }
    else {
        cout<<"retirement time \n";
    }
    return 0 ; 
}