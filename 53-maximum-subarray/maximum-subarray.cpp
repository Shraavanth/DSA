class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=nums.size();

        int max_sum=INT_MIN;
        int sum=0;

        for(int i=0;i<l;i++)
        {
            int sum=sum+nums[i];
            max_sum=max(max_sum,sum);
            if(sum<0)
            {
                sum=0;
            }

        }
        return max_sum;
    }
};