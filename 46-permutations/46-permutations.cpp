class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        //vector<int>v;
        sort(nums.begin(),nums.end());
        do{
            res.push_back(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return res;
    }
};