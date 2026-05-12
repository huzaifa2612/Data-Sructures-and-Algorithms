# 🔗 Insertion Sort Algorithm (C++)

---

## 📌 Description

This directory contains a C++ implementation of **Insertion Sort**, a simple and intuitive comparison-based sorting algorithm. It builds the final sorted array one item at a time. 

The algorithm mimics the way you might sort playing cards in your hands. It iterates through the input array, consuming one input element each repetition, and grows a sorted output list. At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there. It repeats until no input elements remain.

This algorithm is highly efficient for small data sets or arrays that are already partially sorted.

## ⏱️ Time Complexities

*   **Best Case:** *O(N)* (Occurs when the array is already sorted. The inner loop condition `arr[prev] > curr` fails immediately, resulting in a single pass).
*   **Average Case:** *O(N²)* (Requires nested iterations to scan and shift elements).
*   **Worst Case:** *O(N²)* (Occurs when the array is sorted in reverse order, requiring maximum element shifting).

## 💾 Space Complexity

*   *O(1)* constant auxiliary space. Insertion Sort is an in-place sorting algorithm, requiring only a few single variables (`curr`, `prev`) for the shifting operations regardless of the input array size `N`.
