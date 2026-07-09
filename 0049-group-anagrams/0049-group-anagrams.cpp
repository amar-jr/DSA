class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string, vector<string>> store;

        for(int i=0; i<strs.size(); i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());

            auto it=store.find(temp);

            if(it!=store.end()){
                it->second.push_back(strs[i]);
            }
            else{
                store[temp]={strs[i]};
            }
        }

        vector<vector<string>> ans;

        for(auto it:store){
            
            ans.push_back(it.second);
        }
        return ans;
    }
};