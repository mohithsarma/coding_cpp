//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    stack<int> st;
		    int t=0,comp;
		    int digits = log10(n)+1;
		    if(digits%2==0) comp = digits/2;
		    else  comp = digits/2+1;
            for(int i=0;i<digits;i++){
                if(i<(comp)){
                    st.push(n%10);
                    n=n/10;
                    // cout<<"\n"<<n;
                }
                else
                {
                    if(digits%2 == 0){
                        if(st.top() == n%10){
                            st.pop();
                            n=n/10;
                            // cout<<"\n"<<n;

                        }
                        else {
                            // cout<<"\n"<<n;
                            return "No";
                        }
                    }
                    else{
                        if(t==0){ st.pop();
                        t+=1;}
                        if(st.top() == n%10){
                            // cout<<n%10<<"\n";
                            st.pop();
                            n=n/10;
                        }
                        else{
                            // cout<<"\n"<<n;
                            return "No";
                        }
                        
                    }
                }
            }
            return "Yes";
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
