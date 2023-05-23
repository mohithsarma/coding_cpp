#include <bits/stdc++.h>
using namespace std; 
// arrays are always   passed by the reference. 


int doSomethingArr(int arr[],int n){
    arr[0]+=100 ;
    cout<< "value of arr[0] inside function\n"<< arr[0] <<"\n"<<n<<endl;

    return 0 ; 
}
int main () {
    int arr[5]; 
    int n =5;
    for( int i =0;i<=4;i++){
        cin>>arr[i];
    }
    doSomethingArr(arr,n);
    cout<< "value of the arr in main function\n";
    for(int i =0;i<=4 ; i++){
        cout<<arr[i]<<endl; 
    }

    return 0 ; 
}