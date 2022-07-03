class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int k=0;
        for(auto x:mp){
            if(x.second > 1) nums[k++]=x.first;
        }
        nums.erase(nums.begin()+k,nums.end());
        
        return nums;
        
    }
};