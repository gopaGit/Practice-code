class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;int ans=0,cnt=0,p=0,j=0,k=0;
        for(int i=0;i<s.size();i++){
          //  ans=abs(j-k);
         //   if(!mp[s[i]]){
                 mp[s[i]]++;
            if(mp.size()==(i-j+1)){
                ans=max(ans,(i-j+1));
            }
            else if(mp.size()<(i-j+1)){
                while(mp.size()<(i-j+1)){
                    mp[s[j]]--;
                    if(mp[s[j]]==0) mp.erase(s[j]);
                    j++;
                }
            }
        }
        map <char,int>::iterator it;
        for( it=mp.begin();it!=mp.end();it++)
    {
    cout<<it->first<<" "<<it->second<<endl;
    }
        //out<<mp;
        return ans;
    
    /*        
            
            if(mp[s[i]]>1){
                
                p++;
                mp[s[p]]--;
                cnt=0;i=p;
            }
            else cnt++;
        }
        ans=max(ans,cnt);
        return ans;*/
    }
};