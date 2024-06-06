#include <vector>

/**
 * You are given two integer arrays nums1 and nums2,
 * sorted in non-decreasing order, and two integers m and n,
 * representing the number of elements in nums1 and nums2
 * respectively. Merge nums1 and nums2 into a single array
 * sorted in non-decreasing order.
 * The final sorted array should not be returned by the function,
 * but instead be stored inside the array nums1.
 * To accommodate this, nums1 has a length of m + n,
 * where the first m elements denote the elements that should be
 * merged, and the last n elements are set to 0 and
 * should be ignored. nums2 has a length of n.
 */

class Solution
{
public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n)
    {
        int i = m - 1;     ///< Last element of nums1
        int j = n - 1;     ///< Last element of nums2
        int z = m + n - 1; ///< Number of elements of two vectors

        // Go through all elements of nums2
        while (j >= 0)
        {
            // Check if there are elements in nums1 and
            // if the element in nums1 is greater than nums2
            if (i >= 0 && nums1[i] > nums2[j])
            {
                // Puts the element of nums1 at the end of nums1 and go on
                nums1[z] = nums1[i];
                z--;
                i--;
            }
            else
            {
                // Puts the element of nums2 at the end of nums2 and go on
                nums1[z] = nums2[j];
                z--;
                j--;
            }
        }
    }
};