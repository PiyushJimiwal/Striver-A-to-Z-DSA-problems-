/*
Let the array be arr[] of size n.

Start from the first element and compare it with the next one.

If arr[j] > arr[j+1], swap them.

Move to the next pair and continue until the end of the array.
→ After the first pass, the largest element will be at the end.

Repeat the process for the remaining unsorted part (n-1, n-2, …).

If during a pass no swaps are made, the array is already sorted — stop early. 

*/

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            bool swaped = false;
            for(int j=0;j<n-i-1;j++){
                if(nums[j] > nums[j+1])
                    swap(nums[j], nums[j+1]);
                    swaped = true;
            }
        }
        return nums;
    }
};
