class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        int n=nums.size();
        
        map<int,int>fmp;
        map<int,int>hmp;
        for(int i=0;i<n;i++){
            fmp[nums[i]]++;
        }
        for(auto i:nums){
            if(!fmp[i]) continue;
            fmp[i]--;
            if(hmp[i-1]>0){
                hmp[i-1]--;
                hmp[i]++;
            }
            else if(fmp[i+1]&&fmp[i+2]){
                fmp[i+1]--;
                fmp[i+2]--;
                hmp[i+2]++;
            }
            else return false;
        }
        return true;
    }
};