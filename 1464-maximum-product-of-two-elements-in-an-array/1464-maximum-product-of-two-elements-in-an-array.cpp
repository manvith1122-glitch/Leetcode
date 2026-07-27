class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int a;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                  a=(nums[i]-1)*(nums[j]-1);
                  maxi=max(maxi,a);
            }
        }
        return maxi;
    }
};