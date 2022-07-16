class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        nums.clear();
        for(auto p:mp){
            if(p.second>(n/3)) nums.push_back(p.first);
        }
        return nums;
    }
};