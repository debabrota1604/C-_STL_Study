#include<bits/stdc++.h>
using namespace std;

/* 
A Naive C++ recursive implementation of LIS problem

To make use of recursive calls, this function must return two things:
1) Length of LIS ending with element arr[n-1]. We use max_ending_here for this purpose
2) Overall maximum as the LIS may end with an element before arr[n-1] max_ref is used this purpose.

The value of LIS of full array of size n is stored in *max_ref which is our final result
*/
int _lis(int arr[], int n, int* max_ref)
{
    cout << "Entering LIS(" << n << ", " << *max_ref <<")\n";
	/* Base case */
	if (n == 1){
        cout << "Base case: Return 1\n";
        return 1;
    }

	// 'max_ending_here' is length of LIS ending with arr[n-1]
	int res, max_ending_here = 1;

	/* Recursively get all LIS ending with arr[0], arr[1] ... arr[n-2]. If arr[i-1] is smaller than arr[n-1], and max ending with arr[n-1] needs to be updated, then update it */
	for (int i = 1; i < n; i++) {
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] < arr[n - 1]	&& res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}

	// Compare max_ending_here with the overall max. And update the overall max if needed
	if (*max_ref < max_ending_here)	*max_ref = max_ending_here;

	// Return length of LIS ending with arr[n-1]
    cout << "LIS(" << n << ", " << *max_ref << "): Returning " << max_ending_here << endl;
	return max_ending_here;
}

void printVec(vector<int> v){
    for(auto num:v) cout << num << " ";
    cout << endl;
}

//Optimized LIS
int lis_nPow2(vector<int> arr){
    vector<int> lis (arr.size(),0);
    lis[0] = 1;

	/* Compute optimized LIS values in
	bottom up manner */
	for (int i = 1; i < arr.size(); i++) {
		lis[i] = 1;
		for (int j = 0; j < i; j++){
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
            cout << "(i,j): (" << i<<','<<j<<"): "; getchar(); printVec(lis);
        }
	}
    return *max_element(lis.begin(),lis.end());
}


// The wrapper function for _lis()
int lis(int arr[], int n)
{
	// The max variable holds the result
	int max = 1;

	// The function _lis() stores its result in max
	_lis(arr, n, &max);

	// returns max
	return max;
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 45, 49, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);  vector<int> v (arr, arr+n);
	cout << "Basic LIS:\n" << lis(arr, n) <<" is the Longest Increasing SUbsequence.\n";
	cout << "Optimized LIS:\n"; lis_nPow2(v); cout <<" is the Longest Increasing SUbsequence.\n";
	return 0;
}