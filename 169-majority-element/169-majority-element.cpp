class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int cnt=0,ans=0;
        for(auto x: nums){
            mp[x]++;
            if(mp[x]>cnt){
                cnt=mp[x];
                ans=x;
            }
        }
        return ans;
        
    }
};