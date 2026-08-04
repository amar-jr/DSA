class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans=INT_MIN;
        int s=height.size();

        int i=0,e=s-1;
        while(i<e){
            ans=max(ans, (min(height[i],height[e])*(e-i)));
            if(height[i]<=height[e]) i++;
            else e--;
        }
        return ans;
    }
};