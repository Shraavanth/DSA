class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int p=1;
        int l=0;
        int n=nums.size();

        for(int r=0;r<n;r++)
        {
            p=p*nums[r];
            while(l<=r && p>=k)
            {
                p=p/nums[l];
                l=l+1;
            }

            count+=r-l+1;
        }
        return count;
    }
};