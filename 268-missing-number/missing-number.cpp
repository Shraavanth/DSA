class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int total=0;
        for(int i=0;i<=n;i++)
        {
            sum+=i;
        }

        for(int val:nums)
        {
            total+=val;
        }

        int i=sum-total;
        return i;
        
    }
};