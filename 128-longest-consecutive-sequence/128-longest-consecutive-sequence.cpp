class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;                               // Empty Set
        for(int i:nums){
            s.insert(i);
        
        }
        int mx=0,ln=0;
        for(int num:nums){
            if(!s.count(num-1)) {
                int currentnum=num;
                int ccnt=1;
                while(s.count(currentnum+1)){
                    ccnt+=1;
                    currentnum=currentnum+1;
                }
                mx=max(mx,ccnt);
            }
        }
        return mx;
    }
};