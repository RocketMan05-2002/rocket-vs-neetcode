class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // we gotta return the pair of i and j where two sum is equal to target
        // brute force first

        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        
    }
};
