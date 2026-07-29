class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=1,blue=2;
        int k=0;
        for(int i=0;i<nums.size()-1;i++){
            int min=i;
            int temp;
            for(int j=i+1;j<nums.size();j++){
                if(nums[min]>nums[j]){
                    min=j;
                }
            }
            if(min!=i){
                temp=nums[i];
                nums[i]=nums[min];
                nums[min]=temp;
            }
        }
    }
};