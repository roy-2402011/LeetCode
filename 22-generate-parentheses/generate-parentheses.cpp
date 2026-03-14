
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c: s) {
            if (c == '(') st.push(c);
            else {
                if(st.empty()) return false;
                st.pop();
            }
        }

        return st.empty();
    }

    void solve(int n, string s, vector<string> &ans) {
        if ( s.size() == n*2 ) {
            if (isValid(s)) ans.push_back(s);
            return;
        }

        solve( n, s + "(", ans );
        solve( n, s + ")", ans );
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans; 
        solve(n, "", ans);
        return ans;
    }
};
