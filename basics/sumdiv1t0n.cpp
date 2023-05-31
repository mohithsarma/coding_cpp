//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long int  sum =0;
        for(int j =1;j<=N;j++){
        for(long long int i=1;i*i<=j;i++){
            if(j%i==0){
                if(j/i!=i){
                    sum +=j/i+i;
                }
                else {
                    sum+=i;
                }
            }
        }}
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends