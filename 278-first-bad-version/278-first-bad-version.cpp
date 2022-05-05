// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        if(n==1) return n;
      //  int bad,ans; cin>>bad;
        while(isBadVersion(n)){
            //ut<<n;
            n--;
        }
      //  else ans=bad;
        return n+1;
        
    }
};