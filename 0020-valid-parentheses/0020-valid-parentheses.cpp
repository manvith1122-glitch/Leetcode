class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1){
            return false;
        }
       int n=s.length();
       stack<char> st;
       for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty())
                return false;

            if(s[i]==')'&&st.top()!='(')
                return false;

            if(s[i]==']'&&st.top()!='[')
                return false;

            if(s[i]=='}'&&st.top()!='{')
                return false;

            st.pop();
        }
       }
        return st.empty();
       }
};