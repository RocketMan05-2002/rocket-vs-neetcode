class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // we gotta return the pair of i and j where two sum is equal to target

        // efficient solution
        unordered_map<int,int> mp;
        // to keep looking back every time we go ahead to see if pair exists

        for(int i=0;i<nums.size();i++){
            int needed = target-nums[i];
            if(mp.find(needed)!=mp.end()){
                return {mp[needed],i}; //needed wale no. ka index & this index
            }
            mp[nums[i]]=i;
        }

        // brute force -
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        
    }
};
