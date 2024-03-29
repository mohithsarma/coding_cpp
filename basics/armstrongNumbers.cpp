//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int chk = n, sum =0,tmp;
        int digits = log10(n)+1;
        while(n!=0){
            tmp = n%10; 
            sum += pow(tmp,digits);
            n/=10;
        }
        if(chk == sum){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends