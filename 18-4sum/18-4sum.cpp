class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v2;
        
        if(nums.empty()) return v2;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            long long t3=(long long)target-(long long)nums[i];
            for(int j=i+1;j<n;j++){
                long long target2=t3-(long long)nums[j];
                
                int front=j+1,back=n-1;
                while(front<back){
                    int tsum=nums[front]+nums[back];
                    if(target2 > tsum) front++;
                    else if(target2<tsum) back--;
                    else {
                        vector<int>q(4,0);
                        q[0]=nums[i];
                        q[1]=nums[j];
                        q[2]=nums[front];
                        q[3]=nums[back];
                        v2.push_back(q);
                        
                        while(front<back && nums[front]==q[2]) ++front;
                        while(front<back && nums[back]==q[3]) --back;
                    }
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return v2;
        
        
    }
};