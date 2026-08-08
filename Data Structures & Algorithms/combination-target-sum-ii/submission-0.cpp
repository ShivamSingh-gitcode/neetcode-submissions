class Solution {
public:
void comb(vector<int>& candidates,int target,int index,int n,int sum,
vector<vector<int>>&ans,vector<int>&temp){
    if(sum>target) return;
    if(index==n){
        if(sum==target){
            ans.push_back(temp);
        }
        return;
    }
     int next = index+1;
        while(next<n && candidates[next]==candidates[index]) next++;
    comb(candidates,target,next,n,sum,ans,temp);
    temp.push_back(candidates[index]);
    comb(candidates,target,index+1,n,sum+candidates[index],ans,temp);
    temp.pop_back();
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        comb(candidates,target,0,candidates.size(),0,ans,temp);
        return ans;
    }
};
