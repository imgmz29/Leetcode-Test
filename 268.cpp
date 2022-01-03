class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            if (*it != ans){
                return ans;
            }
            ans++;
        }
        return ans;
    }
};
