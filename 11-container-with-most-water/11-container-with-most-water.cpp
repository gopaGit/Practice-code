class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1,mn=0,mtn=0;
        while(s<e){
            mn=min(height[s],height[e]);
          //  cout<<mn<<" ";
            mtn=max(mtn,(mn*(e-s)));
            //cout<<mtn<<" ";
            if(mn==height[s]) s++;
            else e--;
        }
        return mtn;
    }
};