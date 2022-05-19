class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=0;vector<int> g1;
        for(i=0;i<(nums.size()-1);i++){
            for( j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    g1.push_back(i);g1.push_back(j);
                }
            }
        }
        return(g1);
    }
};