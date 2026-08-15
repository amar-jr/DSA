class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        for(auto j:t){
            if(j==s[i]){
                i++;
            }
            
        }
        return i==s.size();
    }
};