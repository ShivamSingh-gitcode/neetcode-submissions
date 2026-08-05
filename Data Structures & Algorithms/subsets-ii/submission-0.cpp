class Solution {
public:

    void sub(vector<int>&arr,int index,int n,vector<vector<int>>&ans,vector<int>temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    int next = index+1;
    while(next<n && arr[next]==arr[index])  next++;
    // to not add the element in empty temp 
    sub(arr,next,n,ans,temp);
    // to  add the element in empty temp 
    temp.push_back(arr[index]);
    sub(arr,index+1,n,ans,temp);
    temp.pop_back();

 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        sub(nums,0,nums.size(),ans,temp);
        return ans;
    }
};
