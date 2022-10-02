#include<bits/stdc++.h>
using namespace std;



int main(){ 
    int tc, n, min; cin>>tc; float ip;
    while(tc--){
        cin>>n; int res=0, it;
        for(int i=0; i<n; i++){
            cin >>ip;
            if(i==0) min =ip;
            else{
                it=1; //divisor;
                while(ceil(ip/it) >= 2*min) it++;
                res += it-1;
            }
        }
        cout << res << endl;
    }
    return 0;
}