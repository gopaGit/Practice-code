class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN;
        if(nums.size()==1) return nums[0]; 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans=max(ans,sum);
            cout<<ans<<" ";
            if(sum<0) sum=0;
        }
        return ans;
    }
};