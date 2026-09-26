class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> check;
        for(int i = 0; i < nums.size(); i++) {
            if (check.contains(nums[i]))
                return true;
            check[nums[i]] = i;
        }
        return false;
    }
};