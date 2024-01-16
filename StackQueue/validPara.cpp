class Solution {
    stack<int> st;//leetcode

public:
    bool isValid(string s) {
        int i = 0;
        while (s[i] != '\0' ){
            char c = s[i];
            switch (c) {
            case '(':
            case '[':
            case '{':
                st.push(c);
                break;
            case ')':
                if(st.empty() || st.top()!='(') return false;
                st.pop();
                break;
            
            case '}':
                if(st.empty()|| st.top()!='{') return false;
                st.pop();
                break;
            case ']':
                if(st.empty() || st.top()!='[') return false;
                st.pop();
            break;
        }
        i++;
        
        }
        return st.empty();
    }
    
};