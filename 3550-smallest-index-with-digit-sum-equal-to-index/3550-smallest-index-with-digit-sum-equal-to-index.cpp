class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int minn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int rem;
            int sum=0;
            while(n>0){
                rem=n%10;
                sum=sum+rem;
                n=n/10;
            }
            if(sum==i){
                minn=min(minn,i);
                return minn;
            }
        }
        
        return -1;
    }
};