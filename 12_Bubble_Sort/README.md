# 🔗 Bubble Sort Algorithm (C++)

---

## 📌 Description

This directory contains a C++ implementation of **Bubble Sort**, one of the simplest sorting algorithms. It is a stable, in-place sorting algorithm that works by repeatedly stepping through the list to be sorted. 

The algorithm functions by comparing each pair of adjacent items and swapping them if they are in the wrong order (i.e., if the current element is greater than the next element in an ascending sort). This pass through the array is repeated until no swaps are needed, which indicates that the list is fully sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list (beginning of the array) while larger elements sink to the bottom.

## ⏱️ Time Complexities

*   **Best Case:** *O(N)* (Occurs when the array is already sorted. *Note: The current implementation requires a boolean flag to achieve this optimized best-case time, otherwise it remains O(N²)*)
*   **Average Case:** *O(N²)* (Requires nested loops to iterate and compare elements)
*   **Worst Case:** *O(N²)* (Occurs when the array is sorted in reverse order)

## 💾 Space Complexity

*   *O(1)* constant auxiliary space. Bubble Sort is an in-place sorting algorithm, meaning it only requires a single additional memory space (for the `swap` operation temporary variable) regardless of the input size `N`.
