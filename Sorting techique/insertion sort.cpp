/* Start from the second element (since a single element is trivially sorted).

Compare the current element (called key) with the elements before it.

Shift all elements greater than the key one position ahead.

Insert the key into its correct position. */ 

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i<n;i++){
            int key = nums[i];
            int j = i-1;

            while(j>=0 && (nums[j] > key)){
                nums[j+1] = nums[j];
                j = j - 1;
            }
        nums[j+1] = key;
        }
        return nums;
    }
};

