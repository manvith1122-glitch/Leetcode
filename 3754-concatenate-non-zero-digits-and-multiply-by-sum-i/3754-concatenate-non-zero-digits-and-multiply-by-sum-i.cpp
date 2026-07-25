class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return n;
        }
        string s=to_string(n);
        string p="";
        for(char ch:s){
            if(ch!='0'){
             p+=ch;
            }
        }
        long long x=stoi(p);
        long long o=x;
        long long rem;
        long long sum=0;
        while(x!=0){
            rem=x%10;
            sum=sum+rem;
            x=x/10;
        }
        long long m;
        m=o*sum;
        return m;
    }
};