class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxp=nums[0],imin=nums[0],n=nums.size(),ans=nums[0];
        if(nums.size()==1) return nums[0];
        for(int i=1;i<n;i++){
            
            if(nums[i]<0) swap(imin,mxp);
            //p*nums[i];
            mxp=max(nums[i]*mxp,nums[i]);
            imin=min(nums[i]*imin,nums[i]);
            ans=max(mxp,ans);
        //  if(nums[i]>0) mxp=max(mxp,nums[i]);
        //  if(p==0) p=1;
          //if(p<0 && i<n && nums[i+1]>0) p=1;
        }
        return ans;
        
    }
};