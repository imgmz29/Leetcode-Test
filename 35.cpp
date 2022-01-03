class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int curr;
        
        while(start <= end){
            curr = (start + end) / 2;
            if(nums[curr] == target){
                return curr;
            }
            if(nums[curr] > target){
                end = curr - 1;
            }
            else{
                start = curr + 1;
            }
        }
        
        return start;       
    }
};
