class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int ans=INT_MIN;
        int maxlight=lights[0];

        for(int i=1;i<lights.size();i++){
            maxlight=max(maxlight,lights[i]);
        }
        // sort(lights.begin(),lights.end());
        // int n=lights.size()-1;
        for(int i=0;i<arrivalTime.size();i++){
            int waiting=0;
            int extratime= arrivalTime[i]%period;
            if(maxlight>extratime){
                waiting=0;
            }
            else{
                waiting=max(waiting,period-extratime);
            }
            ans=max(ans,waiting);
        }
        // if(ans==INT_MIN) ans=0;
        return ans;
    }
};