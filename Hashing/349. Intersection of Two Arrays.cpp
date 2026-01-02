class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>q(nums1.begin(),nums1.end());
        unordered_set<int>w(nums2.begin(),nums2.end());
        vector<int>a;
        for(auto x:q){
            if(w.count(x)){
                a.push_back(x);
            }
        }
        return a;
    }
};