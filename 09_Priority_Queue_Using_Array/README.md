# 🔗 Priority Queue Using Array (C++)

---

## 📌 Description

This directory contains a C++ implementation of a **Priority Queue** data structure utilizing a static, fixed-size array. Unlike a standard queue that strictly follows the FIFO rule, a priority queue dequeues elements based on their assigned priority. 

In this specific implementation, **the numerical value of the element acts as its priority** (Higher value = Higher priority). 
*   **Enqueue Operation:** Elements are inserted at the `rear` in the order they arrive, exactly like a standard linear queue.
*   **Dequeue Operation:** The queue is dynamically searched for the maximum value. Once found, this highest-priority element is deleted, and all subsequent elements are shifted one position to the left to fill the gap and maintain contiguous memory.

## ⏱️ Time Complexities

*   **Enqueue:** *O(1)* (Constant time insertion at the `rear` index)
*   **Dequeue (Priority):** *O(n)* (Linear time required to linearly scan the array for the maximum element, plus additional time to shift elements leftwards)
*   **Front:** *O(1)* (Direct access to the element at the `front` index)
*   **Display:** *O(n)* (Requires traversing the active elements from the `front` to the `rear` index)

## 💾 Space Complexity

*   *O(n)* auxiliary space for allocating a fixed-size array, where `n` is the predefined maximum capacity (`#define N 5`).
