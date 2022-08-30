#include<bits/stdc++.h>
using namespace std;

// Problem: Rearrage a sorted array in max-min form i.e.
// given an array as { 1 2 3 4 5 6}, 
// rearrange will be { 6 1 5 2 4 3}

// Algorithm:
// 1. Use a flag to differentialte between odd and even indices in result array.
// 2. Even indices will contain reverse of max elements from RHS.
// 3. Odd indices will contain min elements.
// 4. Mathematical formula for even indices: 

void rearrangeMaxMin(vector<int> &arr){

}


int main(){
    vector<int> vec {2,3,4,5,7,8,9,11,13,14,15};

    rearrangeMaxMin(vec);


    for(auto item:vec) cout << item << " ";
    cout << endl;

    return 0;
}