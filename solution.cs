Here is a JavaScript solution for finding the median of two sorted arrays:

```javascript
function findMedianSortedArrays(nums1, nums2) {
    let nums = nums1.concat(nums2).sort((a, b) => a - b);
    let len = nums.length;
    return len % 2 === 0 ? (nums[len / 2 - 1] + nums[len / 2]) / 2 : nums[Math.floor(len / 2)];
}

console.log(findMedianSortedArrays([1, 3], [2]));
console.log(findMedianSortedArrays([1, 2], [3, 4]));
```

This console application takes two sorted arrays as input and returns the median of the combined array. The `findMedianSortedArrays` function first concatenates the two input arrays and sorts the resulting array in ascending order. It then checks if the length of the sorted array is even or odd. If it's even, it returns the average of the two middle numbers. If it's odd, it returns the middle number. The `console.log` statements are used to test the function with two sets of input arrays.