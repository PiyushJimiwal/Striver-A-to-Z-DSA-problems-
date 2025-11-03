class Solution {
public:
    int largestElement(vector<int>& nums) {
        int currentmax = nums[0];
        int maxelement = nums[0];
        int n = nums.size();
        for(int i = 1 ; i<n; i++){
            if(nums[i] >= currentmax){
                currentmax = nums[i];
                maxelement = currentmax;
            }
        }
        return maxelement;
    }
};
