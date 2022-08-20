#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int val=0, rew=0;
        for (int i=0; i<s.size()-1; i++){
            if ( s[i]=='0' && s[i+1]=='0'){
                rew++;
            }
            else if ( s[i]=='0' && s[i+1]=='1'){
                val++; i-=1;
            }
            else if ( s[i]=='1' && s[i+1]=='0'){
                
            }
            else if ( s[i]=='1' && s[i+1]=='1'){
                
            }
        }
        return val;
    }
};



int main(){
    Solution s;
    cout << s.secondsToRemoveOccurrences("11100") << endl;



    return 0;
}