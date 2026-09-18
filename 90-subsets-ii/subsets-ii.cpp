class Solution {
public:

    void getSubsets(vector<int>& nums, vector<int>& ans,int i,vector<vector<int>>& subsets)
    {
        if(i==nums.size())
        {
            subsets.push_back(ans);
            return;
        }

        //include
        ans.push_back(nums[i]);
        getSubsets(nums,ans,i+1,subsets);

        //exclude
        ans.pop_back();
        int ind=i+1;
        while(ind<nums.size() && nums[ind]==nums[ind-1])
        {
            ind++;
        }
        getSubsets(nums,ans,ind,subsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        vector<vector<int>> allSubsets;

        getSubsets(nums,ans,0,allSubsets);
        return allSubsets;

    }
};