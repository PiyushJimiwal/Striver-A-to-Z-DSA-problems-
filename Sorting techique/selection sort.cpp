# The algorithm is simple just take the first element as the smallest element 
# Then iterate through the array and check if any element is smaller than the first element 
# If found swap the element  to the first element 
# last update the index to the smaller element found 
# do it repeadly until the array become sorted 

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n-1;i++){
            int minindex = i;
            for(int j = i+1; j<n;j++){
                if(nums[j] < nums[minindex])
                    minindex = j;
            }
            swap(nums[i],nums[minindex]);
        }
    return nums;
    }
};
