class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=100000,mx=0,ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mn) {
                mn=prices[i];
                mx=prices[i];
            }
            else if(prices[i]>mx) {
                mx=prices[i];
                ans=max(ans,(mx-mn));
            }
        }
        
        
        
        
        
    /*    map<int,int>mp,mpp;
        while(j){
            mx=max(mx,prices[j]);
            mp[j]=mx;
            j--;
        }
        while(i){
            mn=min(mn,prices[i]);
            mpp[i--]=mn;
            ans=max(ans,(mp[j]-mpp[j]));
        }*/
        
        return ans;
    }
};