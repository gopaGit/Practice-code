class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) cnt0++;
            else if(nums[i]==1) cnt1++;
            else cnt2++;
        }
        nums.clear();
        while(cnt0--) nums.push_back(0);
        while(cnt1--) nums.push_back(1);
        while(cnt2--) nums.push_back(2);
    }
};