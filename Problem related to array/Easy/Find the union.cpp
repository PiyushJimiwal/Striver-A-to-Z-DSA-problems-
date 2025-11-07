class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
            } 
            else if (nums2[j] < nums1[i]) {
                if (result.empty() || result.back() != nums2[j])
                    result.push_back(nums2[j]);
                j++;
            } 
            else { // nums1[i] == nums2[j]
                if (result.empty() || result.back() != nums1[i])
                    result.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        // Add remaining elements
        while (i < n1) {
            if (result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            if (result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};
