/*
Divide:
Split the array into two halves until each subarray has only one element.

Conquer (Sort):
Recursively sort each half.

Combine (Merge):
Merge the two sorted halves into a single sorted array.
*/


class Solution {
public:
    void partition(vector<int>&nums,int low,int high, int mid){
        int n1 = mid - low + 1;
        int n2 = high - mid;

        vector<int> left(n1) , right(n2);

        for(int i = 0; i< n1; i++){
            left[i] = nums[low+i];
        }
        for(int j = 0; j <n2; j++){
            right[j] = nums[mid+1+j];
        }

        int i = 0, j = 0, k = low;

        while( i < n1 && j < n2){
            if(left[i] <= right[j]){
                nums[k] = left[i];
                i++;
            }
            else{
                nums[k] = right[j];
                j++;
            }
        }

        while(i<n1){
            nums[k] = left[i];
            i++;
            k++;
        }
        while(j<n2){
            nums[k] = right[j];
            j++;
            k++;
        }
    }
    void mergesorthelp(vector<int>&nums,int low,int high){
        if(low<high){
            
        int mid = (low+high)/2;
        mergesorthelp(nums,low, mid);
        mergesorthelp(nums,mid+1,high);
        partition(nums,low,mid,high);
        }
    }
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        if(n <= 0){
            return nums;
        }
        mergesorthelp(nums, 0 , n-1);
        return nums;
    }
};

