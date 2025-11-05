/*🔹 Algorithm (one step):
Traverse the array once, keeping track of the largest and second largest elements —
if the current element is greater than the largest, update second = largest and largest = current;
else if it’s smaller than largest but greater than second, update second = current.

✅ Time Complexity: O(n)
✅ Space Complexity: O(1)
*/
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int second = INT_MIN;
        int currentmax = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > currentmax){
                second = currentmax;
                currentmax = nums[i];
            }
            else if(nums[i] < currentmax && nums[i] > second){
                second = nums[i];
            }
        }
        if(secodn = INT_MIN){
            return -1;
        }
        return second;
    }
};
