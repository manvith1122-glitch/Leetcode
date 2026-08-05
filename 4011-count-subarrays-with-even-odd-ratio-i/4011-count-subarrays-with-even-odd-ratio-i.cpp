class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int l=0,r=0;
        int count=0;
        int p;
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[j]%2==0){
                    x++;
                }
                else{
                    y++;
                }
                if(y>0){
                    p=(float)x/y;
                }
                if(y>0 && (float)x/y<=(float)a/b){
                    count++;
                }
            }
            x=0;
            y=0;
            
        }
        return count;
    }
};