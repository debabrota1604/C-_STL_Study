#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int train4Energy =  accumulate(energy.begin(), energy.end(),-initialEnergy) +1;
        int train4Exp = 0;
        for (auto i:experience){
            if (i >= initialExperience){
                train4Exp = i-initialExperience+1;
                initialExperience +=i;
            }
            else{
                initialExperience +=i;
            }
        }
        cout << train4Energy << " : " << train4Exp << endl;
        return train4Energy + train4Exp;
    }
};


int main(){
    Solution s;
    //vector<int> engy {1, 1, 1, 1}, exp {1, 1, 1, 50};
    //cout << s.minNumberOfHours(2, 4, engy, exp) << endl;


    //vector<int> engy {1,4,3,2}, exp {2,6,3,1};
    //cout << s.minNumberOfHours(5,3, engy, exp) << endl;


    vector<int> engy {69,22,93,68,57,76,54,72,8,78,88,15,58,61,25,70,58,91,79,22,91,74,90,75,31,53,31,7,51,96,76,17,64,89,83,54,28,33,32,45,20},
     exp {51,81,46,80,56,7,46,74,64,20,84,66,13,91,49,30,75,43,74,88,82,51,72,4,80,30,10,19,40,27,21,71,24,94,79,13,40,28,63,85,70};

    cout << s.minNumberOfHours(11, 23, engy, exp) << endl;


    return 0;
}