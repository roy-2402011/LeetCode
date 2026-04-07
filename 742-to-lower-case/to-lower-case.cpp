class Solution {
public:
    string toLowerCase(string s) {
        int sz = s.size();
        for(int i=0;i<sz;i++)
        {
            s[i]=tolower(s[i]);
        }
        return s;
    }
};