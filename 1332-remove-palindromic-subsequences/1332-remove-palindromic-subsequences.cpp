class Solution {
public:
    int removePalindromeSub(string s) {
        string str=s;
        reverse(s.begin(),s.end());
        if(str==s) return 1;
        else return 2;            
            
       }
    
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        /*   int sz=s.size();
        int i=0,j=sz-1,ans=0;
        string s
        while(i<=j){
            if(s[i]==s[j]){
                i++;j--;
            }
            else {
                if(s[i]==s[j-1]) j--;
                else i++;
                ans+=1;
            }
        }
        return ans+1;*/
};