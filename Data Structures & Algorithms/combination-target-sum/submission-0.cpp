class Solution {
public:
void comb(vector<int>&nums,int index,int n,int sum,int target,vector<vector<int>>&ans,vector<int>&temp){
    if(sum>target)
      return;
    if(index==n){
        if(sum == target){
            ans.push_back(temp);
        }
        return;
    }
    comb(nums,index+1,nums.size(),sum,target,ans,temp);
    temp.push_back(nums[index]);
    comb(nums,index,nums.size(),sum+nums[index],target,ans,temp);
    temp.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        comb(nums,0,nums.size(),0,target,ans,temp);
        return ans;
    }
};
