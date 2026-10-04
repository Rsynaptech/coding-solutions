class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        int n=s.length();
        for(int i=0 ; i<n ; i++){
            s[i]=tolower(s[i]);
            ans.push_back(s[i]);
        }
        return ans;
    }
};