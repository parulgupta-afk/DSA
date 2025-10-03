class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(int i = 0;i<s.size();i++) {
            switch(s[i]){
                case '(':
                st.push(s[i]);
                break;
                
                case '[':
                st.push(s[i]);
                break;
                
                case '{':
                 st.push(s[i]);
                break;
                
                case '}':
                if(st.empty() || st.top()!='{') return false;
                else st.pop();
                break;
                
                case ']':
                if(st.empty() || st.top()!='[') return false;
                else st.pop();
                break;
                
                case ')':
                if(st.empty() || st.top()!='(') return false;
                else st.pop();
                break;
                
            }
        }   
        return st.empty();
    }
};
