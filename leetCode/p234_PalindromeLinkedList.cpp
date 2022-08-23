#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // Algorithm:
        // 1. Measure the length of the linked list. -> in O(n)
        // 2. Declare a stack of len/2 size to match pattern. -> O(1)
        // 3. traverse the list from head to middle to populate the stack. ->O(n)
        // 4. Check if the reverse pattern exists from middle to end by popping off from stack. ->O(n)
        // 5. Take care of even and odd length. ->O(1)
        // Total runtime = O(n), Total Space = O(n)

    }
};

int main(){
    Solutions s;





    return 0;
}