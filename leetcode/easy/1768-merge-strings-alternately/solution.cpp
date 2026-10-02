class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length()-1;
        int m=word2.length()-1;
        string ans="";
        int i=0;
        int j=0 ;
        while(j<=m || i<=n){
            if(i<=n){
            ans.push_back(word1[i]);
            }
            i++;
            if(j<=m){
            ans.push_back(word2[j]);
            }
            j++;
        }
        return ans;
    }
};