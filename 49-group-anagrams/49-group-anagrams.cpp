class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        int n=strs.size();
        string s[n];
        for(int i=0;i<n;i++){
            s[i]=strs[i];
            sort(s[i].begin(),s[i].end());
        }
        vector<string>v;
        
        bool *visited = new bool[n];
        for (int i=0; i<n; i++)
            visited[i] = false;
        
       for(int i=0;i<n;i++){
           if(!visited[i]){
               v.push_back(strs[i]);
               for(int j=i+1;j<n;j++){
                   if(s[i]==s[j]){
                       v.push_back(strs[j]);
                       visited[j]=true;
                   }
               }
               res.push_back(v);
               v.clear();
           }
       }
        return res;
    }
};