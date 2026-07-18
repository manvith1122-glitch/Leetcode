class Solution {
public:
    long long maximumValue(int n, int s, int m) {
      if(n==1){
        return s;
    }
    //   vector<long long> seq(n);
    //   seq[0]=s; 
    //   for(long long i=1;i<n;i++){
    //     if(i%2!=0){
    //         seq[i]=seq[i-1]+m;
    //     }
    //     else{
    //         seq[i]=seq[i-1]-1;
    //     }
    //   }
    //   long long mx=INT_MIN;
    //   for(long long i=0;i<n;i++){
    //     mx=max(mx,seq[i]);
    //   }
    long long p=s;
      return p+m*floor(n/2)-(floor(n/2)-1);
    }
};