# 🔗 Selection Sort Algorithm (C++)

---

## 📌 Description

This directory contains a C++ implementation of **Selection Sort**, an in-place comparison sorting algorithm. 

The algorithm divides the input array into two parts: a sorted sublist built up from left to right at the front (left) of the array, and a sublist of the remaining unsorted items that occupy the rest of the array. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. 

The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

## ⏱️ Time Complexities

*   **Best Case:** *O(N²)* (Unlike Bubble Sort, Selection Sort does not inherently adapt if the array is already sorted. It will still scan the remaining elements to find the minimum)
*   **Average Case:** *O(N²)* (Requires nested loops to iterate and find the minimum element in the unsorted portion)
*   **Worst Case:** *O(N²)* (Occurs regardless of the initial arrangement of the array elements)

## 💾 Space Complexity

*   *O(1)* constant auxiliary space. Selection Sort is an in-place sorting algorithm, requiring only a single additional memory space (for the `SmallIndex` and swap operations) regardless of the input array size `N`.
