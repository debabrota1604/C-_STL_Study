//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    long long int countPalinByLen(auto mp, int len){
        
    }
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       //Your code here
        long long int res=0;
        unordered_map<char, int> m;
        for(auto ch:str) m[ch]+=1; //frequency counter

        for(auto iter=0;iter<str.size();iter++){ //get #palindrome possible for each length
            countPalinByLen(m,iter);
        }

    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends