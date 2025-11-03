/* Start

If the array has 0 or 1 element, return (already sorted).

Choose a pivot element (commonly the first, last, or middle element).

Partition the array into two parts:

Elements less than the pivot.

Elements greater than or equal to the pivot.

Recursively apply the same process to the two subarrays.

Combine the results:

Sorted Left Subarray + Pivot + Sorted Right Subarray

End */

class Solution {
public:
    int partition(vector<int>&nums,int low, int high){
        int pivot = nums[high];
        int i = low - 1;
        for(int j = low; j < high; j++){
            if(nums[j] <= pivot){
                i = i+1;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[high]);
        return i+1;
    }

     void quickSortHelper(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pi = partition(nums, low, high);
            quickSortHelper(nums, low, pi - 1);
            quickSortHelper(nums, pi + 1, high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        quickSortHelper(nums,low,high);
        return nums;
    }
};

