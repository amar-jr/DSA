class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=m+n;


        if(m==0){
            nums1=nums2;
        }
        else if(n==0) return;

        int ptr = m+n-1, num1Ptr=m-1,num2Ptr=n-1;
        
        while(ptr > num1Ptr){
            if(num1Ptr>=0 && nums1[num1Ptr] > nums2[num2Ptr]){
                swap(nums1[num1Ptr], nums1[ptr]);
                ptr--;
                num1Ptr--;
            }
            else{
                nums1[ptr]= nums2[num2Ptr];
                num2Ptr--;
                ptr--;
            }
        }
    }
};