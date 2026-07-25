class Solution {
public:
    int maxProduct(int n) {
       int rem;
       int i=0;
       vector<int> arr;
        while(n!=0){
            int sum=0;
            rem=n%10;
            sum=sum+rem;
            n=n/10;
            arr.push_back(sum);
        }
        sort(arr.begin(),arr.end());
        int mx=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                mx=max(mx,arr[i]*arr[j]);
            }
        }
      return mx;
    }
};