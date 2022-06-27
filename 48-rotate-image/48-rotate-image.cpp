class Solution {
public:
    void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
               swap( &matrix[i][j],&matrix[j][i]);
            }
        }
        for(int k=0;k<n;k++){
            reverse(matrix[k].begin(),matrix[k].end());
        }
        
        
    }
};