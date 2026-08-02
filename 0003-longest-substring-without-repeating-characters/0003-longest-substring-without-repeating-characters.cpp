class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;

        int ans=0;
        int count=0;
        int alphabets[128]={0};
        while(j<s.size()){
            if(alphabets[s[j]]==0){
                alphabets[s[j]]+=1;
                count++;
                j++;
            }
            else{
                while(i<j && s[i]!=s[j]){
                    alphabets[s[i]]=0;
                    i++;
                }
                if(s[i]==s[j]){
                    // alphabets[s[i]-97]=0;
                    count=j-i;
                    i++;
                }
                // alphabets[s[j]-97]+=1;
                j++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};