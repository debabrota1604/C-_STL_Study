#include<iostream>
#include<map>
using namespace std;
int *seq,seqLen;
map<int, pair<int, int>> m; //pair of index, max_element

int las(int endIndex){
    pair<int, int> p; int temp, temp2;
    int val = las(endIndex -1);
    
}

int main(){
    cout << "Given an integer sequence, this program computes the longest subsequence which is in ascending order.\nInput sequence length: "; cin >> seqLen;
    cout << "Enter the sequence (space seperated): ";
    seq = new int[seqLen]; for(int i=0;i<seqLen; i++){ cin >> seq[i]; }
    for(auto i=0; i<seqLen; i++){ cout << seq[i] << " "; }
    
    cout << "Max Length is: " << las(seqLen) <<endl;


    return 0;
}