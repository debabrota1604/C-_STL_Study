#include<bits/stdc++.h>
using namespace std;

// Problem: Given a sorted array of positive integers, rearrange the array 
// alternately i.e first element should be maximum value, second minimum value, 
// third second max, fourth second min and so on. 
// Input: arr[] = {1, 2, 3, 4, 5, 6, 7}
// Output: arr[] = {7, 1, 6, 2, 5, 3, 4}

// Algorithm 1: Use auxilary array to keep elements. Then replace before return.
// Use two pointer technique to replace at single iteration only.
void rearrangeMaxMin(vector<int> &arr){
    vector<int> res; bool flag=false;
    int lo = 0, hi = arr.size()-1;

    while(lo <hi){
        if(!flag){ res.emplace_back(arr[hi]);flag = !flag; hi--; }
        else    { res.emplace_back(arr[lo]);flag = !flag; lo++;}
    }
    arr= res;
}

// Algorithm 2: Use modular arithmetic to store intermediate results in a single array.
// Optimization: Time complexity unchanged at O(n). Space complexity reduces drastically from O(n) to O(1).


void display(vector<int> arr){
    for(int item:arr) cout << item << " ";
    cout << endl;
}

int main(){
    vector<int> vec {1,2,3,4,5,6,7,8,9};

    cout << "Before rearrangement: "; display(vec);
    rearrangeMaxMin(vec);
    cout << "After rearrangement: "; display(vec);



    return 0;
}