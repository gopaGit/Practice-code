class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0,k=0; 
        while(i<s.size()){
            while((i<s.size())&&s[i]!=' ') i+=1;
            
            
            k=i-1;
            //cout<<k<<" ";
           while(j<k){
               swap(s[k],s[j]); k--;j++;
           } 
            j=i+1;
            i++;
        }
        return s;
    }
};