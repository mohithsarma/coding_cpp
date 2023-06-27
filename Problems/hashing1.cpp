#include <bits/stdc++.h>

using namespace std; 


int main (){
  //array input
  int n; 
  std::cin>>n; 
  int arr[n];
  for(int i =0;i<n;i++) std::cin>>arr[i];

  // precomputing the hash array or freq array 
  int hash[1000000] = {0}; // setting and declaring the array elements to be 0 
  for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
  }

  // output 
  int q ;
  std::cin>>q; 
  int num;
  while(q!=0){
    std::cin>>num;
    if(num<13)
    std::cout<<hash[num]<<" \n";
    q--;
  }

}