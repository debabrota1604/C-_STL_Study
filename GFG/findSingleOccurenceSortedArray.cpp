#include<bits/stdc++.h>
using namespace std;

int modifiedBinarySearch_SingleFinder(vector<int> &arr, int start, int end, int number){
    int mid = (end-start)/2;
    if (arr[mid] == arr[mid+1]) 
        return modifiedBinarySearch_SingleFinder(arr, mid, end, number);
    else if (arr[mid] == arr[mid-1]) 
        return modifiedBinarySearch_SingleFinder(arr, start, mid-1, number);
    else return mid;
}


int main(){



    return 0;
}