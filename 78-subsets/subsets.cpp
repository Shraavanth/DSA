class Solution {
public:
    void getSubsets(vector<int>& nums, vector<int>& ans,int i,vector<vector<int>>& subsets)
    {
        if(i==nums.size())
        {
            subsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        getSubsets(nums,ans,i+1,subsets);

        //exclude
        ans.pop_back();
        getSubsets(nums,ans,i+1,subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allSubsets;

        getSubsets(nums,ans,0,allSubsets);
        return allSubsets;
        
    }
};