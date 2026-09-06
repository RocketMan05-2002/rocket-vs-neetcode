class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // i can use frequency array and check if any number's 
        // frequency goes > 1 means there are duplicates.
        // but constraint says - -10^9 <= nums[i] <= 10^9
        // so frequency array idea gets buried
        // i can certainly use a set to put all array elements
        // agar size kam hua toh duplicates hein, :')

        unordered_set<int>S;
        for(int i=0;i<nums.size();i++) S.insert(nums[i]);
        if(S.size()<nums.size()) return true;
        else return false;
    }
};