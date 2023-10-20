function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
    const merged: number[] = [...nums1, ...nums2].sort((a, b) => a - b);
}