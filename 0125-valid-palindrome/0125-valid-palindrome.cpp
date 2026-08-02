class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.size();
        for(int i=0; i<len ;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }

        string ans="";
        for(int i=0; i<len ;i++){
            if(s[i]>='a' && s[i]<='z'){
                ans+=s[i];
            }
            else if(s[i]>='0' && s[i]<='9'){
                ans+=s[i];
            }
        }
        int start=0, end=ans.size()-1;

        while(start<end){
            if(ans[start]!=ans[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};