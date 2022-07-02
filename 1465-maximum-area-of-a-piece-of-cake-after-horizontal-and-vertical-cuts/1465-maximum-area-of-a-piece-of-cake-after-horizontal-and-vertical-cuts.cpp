class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const unsigned long long M = 1000000007;
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        long long dv=0,dh=0;
        int nh=horizontalCuts.size(),vh=verticalCuts.size();
         dh=max(horizontalCuts[0],abs(horizontalCuts[nh-1]-h));
         dv=max(verticalCuts[0],abs(verticalCuts[vh-1]-w));

        for(int i=1;i<verticalCuts.size();i++){
            dv=max(int(dv),abs(verticalCuts[i]-verticalCuts[i-1]));
        }
        for(int i=1;i<horizontalCuts.size();i++){
            dh=max(int(dh),abs(horizontalCuts[i]-horizontalCuts[i-1]));
        }
        return ((dv*dh)%M);
    }
};