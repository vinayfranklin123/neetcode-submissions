class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> res;
        int rem;
        for (int i = 0; i < numbers.size(); i++) {
            rem = target - numbers[i];
            if (res.count(rem)) {
                return {res[rem], i+1};
            } else {
                res[numbers[i]] = i+1;
            }
        }
        return {0,0};
    }
};
