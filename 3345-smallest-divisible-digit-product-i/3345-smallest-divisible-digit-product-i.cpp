class Solution {
public:
    int smallestNumber(int n, int t) {
        int rem;
        for(int i=n;;i++){
            int p=1;
            int a=i;
            while(a!=0){
                rem=a%10;
                p=p*rem;
                a=a/10;
            }
            if(p%t==0){
                return i;
            }
        }
        return n;
    }
};