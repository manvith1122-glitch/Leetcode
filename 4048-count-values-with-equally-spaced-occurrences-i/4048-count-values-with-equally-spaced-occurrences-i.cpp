class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int freq=0;
            for(int p=0;p<nums.size();p++){
                if(nums[p]==nums[i])
                    freq++;
            }
            if(freq==3){
                for(int j=i+1;j<nums.size();j++){
                    for(int k=j+1;k<nums.size();k++){
                        if(nums[i]==nums[j]&&nums[j]==nums[k]){
                            if((j-i)==(k-j))
                                count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};