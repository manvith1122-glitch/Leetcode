class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int length=0;
        if(s.length()==0){
            return 0;
        }
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    length=max(length,i-st.top());
                }
                
            }
        }
        return length;
    }
};