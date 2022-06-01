class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int p=0;
        for(auto i:nums){
            p=p+i;
            v.push_back(p);
            
        }
        return v;
        
    }
};