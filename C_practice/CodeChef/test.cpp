#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc,sz,ip,mx,mn,j,k; cin>>tc;
	while(tc--){
	    cin>>sz; vector<int> c; mx=INT_MIN;mn=INT_MAX;
	    for(int i=0;i<sz;i++){
	        cin>> ip;
	        c.emplace_back(ip);
	        if(mx < ip) mx=ip;
	        if(mn > ip) mn=ip;
	    }
	    cout << "Max: " << mx << endl;
	    cout << "Min: " << mn << endl;
	    if((c[0] == mx && c[sz-1] ==mn) || (c[0] == mn && c[sz-1] ==mx)) cout<<"-1\n";
	    else{
	        for(int i=0; i<sz;i++){
	            if(c[i] == mx){ j=i;} //breaks at max index;
	            else if(c[i] ==mn){ k=i;}
	        }
	        if(j <sz-1 && j>0){
	            cout << j-1 << endl; //first array
    	        for(int i=0; i<j-1;i++) cout << c[i] << " ";
    	        cout << endl;
    	        
    	        cout << sz-j+1 << endl;
    	        for(int i=j-1 ;i<sz;i++) cout << c[i] << " ";
    	        cout << endl;
	        }
	        else{
	            cout << k-1 << endl;
    	        for(int i=0; i<k-1;i++) cout << c[i] << " ";
    	        cout << endl;
    	        
    	        cout << sz-k-1 << endl;
    	        for(int i=k-1;i<sz;i++) cout << c[i] << " ";
    	        cout << endl;
	        }
	        
	    }
	}
	return 0;
}
