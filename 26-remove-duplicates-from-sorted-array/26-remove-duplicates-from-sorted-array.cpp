class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),j=0;
        set<int> s1;
        for(int i=0;i<n;i++) s1.insert(nums[i]);
        int k=s1.size();
        for(int x:s1){
            nums[j++]=x;
        }
        return k;
     /*   int i;
        for(i=0;i<n;i++){
            if(nums[i]==nums[j]) continue;
            else {
                j+=1;
                nums[j]=nums[i];
            }
        }
       // for(int k=j;k<i;k++) nums[k]='_';
        return j;*/
    }
};