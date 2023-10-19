Here is a TypeScript solution for finding the median of two sorted arrays:

```typescript
function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
    const merged: number[] = [...nums1, ...nums2].sort((a, b) => a - b);
    const mid = Math.floor(merged.length / 2);

    if (merged.length % 2 === 0) {
        return (merged[mid - 1] + merged[mid]) / 2;
    } else {
        return merged[mid];
    }
}

console.log(findMedianSortedArrays([1, 3], [2]));
console.log(findMedianSortedArrays([1, 2], [3, 4]));
```

This solution first merges the two sorted arrays into one sorted array. Then it checks if the length of the merged array is even or odd. If it's even, it returns the average of the two middle numbers. If it's odd, it returns the middle number.