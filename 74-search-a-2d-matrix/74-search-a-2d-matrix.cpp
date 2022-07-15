class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        if(!matrix.size()) return 0;
        int low=0,high=(m*n)-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(matrix[mid/m][mid%m] == target) return 1;
            if(matrix[mid/m][mid%m] > target) high=mid-1;
            else low=mid+1;

        }
        
        
    /*    
        while(matrix[i][j]<target && i<n) i++; cout<<i;
        int k=0;
        while(k!=n-1){
            mid=k+(n-1)/2;
            if(target==matrix[i][mid]) return 1;
            else if(target>matrix[i][mid]) k=mid+1;
            else n=mid-1;
        }*/
        
        return 0;
    }
};