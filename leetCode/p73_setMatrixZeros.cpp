#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> row (matrix.size(), false), col(matrix[0].size(), false);
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] ==0){ row[i] = true; col[j]=true;}
            }
        }
        
        for(int i=0; i<matrix.size(); i++){
            if(row[i]==0){
                for(int j=0; j<matrix[0].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main(){
debabrota.sadhukhan3@gmailcom
newpass3hubgit



}