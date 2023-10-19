```cpp
#include <iostream>
#include <vector>
#include <algorithm>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    std::sort(nums1.begin(), nums1.end());
    int n = nums1.size();
    if (n % 2 == 0) {
        return (nums1[n / 2 - 1] + nums1[n / 2]) / 2.0;
    } else {
        return nums1[n / 2];
    }
}

int main() {
    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2};
    std::cout << findMedianSortedArrays(nums1, nums2) << std::endl;

    nums1 = {1, 2};
    nums2 = {3, 4};
    std::cout << findMedianSortedArrays(nums1, nums2) << std::endl;

    return 0;
}
```