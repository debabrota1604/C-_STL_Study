#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc, inp1, maxOdd=0; cin>>tc;
    while(tc--){
        cin >> inp1; vector<int> balls (inp1, 0), b2;
        for(int i=0;i<inp1; i++){
            cin >> balls[i];
            if (balls[i]%2 == 1 && balls[i] > balls[maxOdd]) {
                maxOdd = i;
            }
        }
        cout << "\t" << maxOdd+1 << endl;
    }


    return 0;
}