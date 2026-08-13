class Solution {
public:
void reverse(vector<int>&nums,int index,int size){
        int start = index;
        int end = size;
       if(start>end) return;
        while(start<end){
        int temp = nums[start];;
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
        }
}
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};