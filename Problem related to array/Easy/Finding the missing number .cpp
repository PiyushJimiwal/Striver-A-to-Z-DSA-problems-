
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int maxNum = *max_element(nums.begin(), nums.end());
    int minNum = *min_element(nums.begin(), nums.end());

    unordered_set<int> st(nums.begin(), nums.end());

    for (int i = minNum; i <= maxNum; i++) {
        if (st.find(i) == st.end()) {
            return i;  // found the missing number
        }
    }

    // If all numbers between min and max exist, maybe the missing number is before min or after max
    // For example: [1,2,3,4] → maybe 0 or 5 is missing
    if (minNum > 0) return minNum - 1;
    return maxNum + 1;
    }
};
