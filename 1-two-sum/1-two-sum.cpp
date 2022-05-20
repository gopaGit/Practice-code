class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;vector<int> g1;
        unordered_map<int,int>mp;
        for(i=0;i<(nums.size());i++){
            
            if(mp.count(target-nums[i]))
            {
             g1.push_back(mp[(target-nums[i])]);
             g1.push_back(i);}
             mp[nums[i]]=i;

        }
        return(g1);
    }
};