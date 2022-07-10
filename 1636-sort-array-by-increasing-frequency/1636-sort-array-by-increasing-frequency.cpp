class Solution {
public:
    
    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        return (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp; 
        if(nums.size()==1) return nums;

        for(auto x:nums) mp[x]++;

        vector<pair<int,int>>f;
        
        for(auto m:mp){
            f.push_back(m);
        }
        sort(f.begin(),f.end(),cmp);
        vector<int>r;
        
        for(auto c:f){
            for(int i=0;i<c.second;i++){
                r.push_back(c.first);
            }
        }
        
        return r;
    }
};