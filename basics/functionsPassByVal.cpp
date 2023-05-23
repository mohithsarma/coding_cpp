#include <bits/stdc++.h>

using namespace std; 
//pass by Value 
// a copy of the variable is created and used in the function instance. 
//Pass by reference. 
// if we attach & to the variable when creating parameters for the functions it will 
// use the address of the variable so the changes that are made will be used 
void doSomething(int num){
    cout<<num<<endl;
    num+=100;
    cout<<num<<endl;
    num+=100;
    cout<<num<<endl;
}
void doSomethingString(string ster){
    ster[0] = 'L';
    cout<< " Hi "<<ster << endl;
    
}
int main() {
    int i = 23 ; 
    doSomething(i);
    cout<< i << endl;
    
    string ster = "Mohtih";
    doSomethingString(ster);
    cout<<"Hi "<< ster <<"\n";

    return 0; 

}