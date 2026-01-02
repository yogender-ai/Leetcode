//optimized version
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>q;
        int n;
        for(auto x:nums){
            q[x]++;
            if(q[x]>1){
                return x;

            }
        }
        return -1;
        /*for(auto x:q){
            if(x.second>1){
                n=x.first;
                break;
            }
        }*/

    }
};