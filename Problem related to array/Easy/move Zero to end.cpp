/*first use the two pointer pointing to the first element of array
now i is for scaning of the non zero element 
j is for swaping the non zero element
if non zero elment found then swap it with i and incrase j++*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for(int i = 0; i<n ; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
