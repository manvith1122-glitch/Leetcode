class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mi=INT_MAX;
        int mx=INT_MIN;
        int c;
        for(int i=0;i<nums.size();i++){
            mi=min(mi,nums[i]);
            mx=max(mx,nums[i]);
        }
        c=gcd(mi,mx);
        return c;
    }
};