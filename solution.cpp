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