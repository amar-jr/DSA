class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int ans=INT_MIN;
        sort(lights.begin(),lights.end());
        int n=lights.size()-1;
        for(int i=0;i<arrivalTime.size();i++){
            int waiting=0;
            for(int j=n; j>=0;j--){
                int extratime= arrivalTime[i]%period;
                if(lights[j]>extratime){
                    waiting=0;
                    break;
                }
                else{
                    waiting=max(waiting,period-extratime);
                    break;
                    j=j/2;
                }
            }
            ans=max(ans,waiting);
        }
        if(ans==INT_MIN) ans=0;
        return ans;
    }
};