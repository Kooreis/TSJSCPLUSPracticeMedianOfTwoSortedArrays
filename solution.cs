function findMedianSortedArrays(nums1, nums2) {
    let nums = nums1.concat(nums2).sort((a, b) => a - b);
    let len = nums.length;
}