class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        vector<int> v1=arr;
        sort(arr.begin(),arr.end());
        int tmp=1;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==0)
            mp[arr[i]]=tmp++;
        }
        for(int i=0;i<v1.size();i++)
            v1[i]=mp[v1[i]];
        
        return v1;
    }
};