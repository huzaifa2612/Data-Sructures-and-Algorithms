# 🔗 Circular Queue Using Array (C++)

---

## 📌 Description

This directory contains a C++ implementation of a **Circular Queue** data structure utilizing a static, fixed-size array. 

A standard linear queue suffers from a major drawback: once the `rear` reaches the end of the array, no more elements can be enqueued, even if there is vacant space at the front (due to previous dequeues). This implementation solves that memory wastage problem by treating the array as circular. It logically connects the last index back to the first index (`0`), allowing efficient reuse of empty spaces.

The queue strictly operates on the **FIFO (First In, First Out)** principle, employing circular pointer arithmetic (or manual wrapping) to manage the `front` and `rear` indices seamlessly.

## ⏱️ Time Complexities

*   **Enqueue:** *O(1)* (Constant time insertion with circular `rear` index adjustment)
*   **Dequeue:** *O(1)* (Constant time removal with circular `front` index adjustment)
*   **Front / Peek:** *O(1)* (Direct array access to the element at the current `front` index)
*   **Display:** *O(n)* (Requires traversing the active elements of the queue from the `front` index to the `rear` index circularly)

## 💾 Space Complexity

*   *O(n)* auxiliary space for allocating a fixed-size array, where `n` is the predefined maximum capacity of the queue (`#define N 5`). Memory utilization is highly optimized compared to a linear array queue.
