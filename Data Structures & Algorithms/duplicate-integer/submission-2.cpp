class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>S;
        for(int i=0;i<nums.size();i++){
            S.insert(nums[i]);
        }
        if(S.size()<nums.size()) return true;
        else return false;
    }
};