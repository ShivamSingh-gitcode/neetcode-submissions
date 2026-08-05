class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int newlen = 2*n;
        vector<int>ans(newlen);
        for(int i=0;i<n;i++){
            ans[i] = nums[i];
        }
        for(int i=0;i<n;i++){
            ans[i+n] = nums[i];
        }
        return ans;
    }
};