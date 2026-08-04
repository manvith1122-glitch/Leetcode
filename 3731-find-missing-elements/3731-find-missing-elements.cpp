class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> arr;
        int min=nums[0];
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }
        }
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]];
        }
        for(int i=min;i<=max;i++){
            if(mp.find(i)==mp.end()){
                arr.push_back(i);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;

    }
};