class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;int j=numbers.size()-1;
        vector<int> ind;
        while(i<j){
            if(numbers[i]+numbers[j]==target) {
                ind.push_back(i+1); ind.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]>target) j--;
            else i++;
        }
        
        
        
        
        //    while((numbers[i]+numbers[j]<target)){
 /*    while((i<numbers.size())){
         cout<<i<<"  "<<j<<endl;
            if(numbers[i]+numbers[j]==target) {
                ind.push_back(i+1); ind.push_back(j+1);
                break;
            }
            if((numbers[i]+numbers[j])>target){ i++;
                                               j=i+1;}
             else j++;
         if (j==numbers.size())
         {
             i+=1;
             j=i+1;
         }
         
        }  */
        return ind;
    }
};