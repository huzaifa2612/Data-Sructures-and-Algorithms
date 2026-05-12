# 🔗 Priority Queue Using Linked List (C++)

---

## 📌 Description

This directory contains a C++ implementation of a **Priority Queue** utilizing a **Singly Linked List**. By using dynamic memory allocation, this implementation completely avoids the capacity constraints (Queue Overflow) inherent in array-based queues.

In this priority queue, **the numerical value of the node determines its priority** (Highest value = Highest priority).
*   **Insertion (Push):** Elements are inserted at the `rear` of the linked list in the order they arrive, maintaining a standard $O(1)$ insertion time.
*   **Deletion (Priority Dequeue):** To remove an element, the entire linked list is traversed to locate the node with the maximum value. The implementation uses two-pointer logic (`prev` and `temp`) to carefully detach the highest-priority node without breaking the linked list chain, gracefully handling edge cases like deleting the `front` or `rear` nodes.

## ⏱️ Time Complexities

*   **Push (Enqueue):** *O(1)* (Constant time insertion utilizing the `rear` pointer)
*   **Deque (Priority Dequeue):** *O(n)* (Linear time required to traverse the linked list to find and extract the maximum element)
*   **Top:** *O(1)* (Direct access to the value stored at the current `front` node)
*   **Display:** *O(n)* (Requires traversing the linked list from the `front` pointer down to `NULL`)

## 💾 Space Complexity

*   *O(n)* auxiliary space, where `n` is the total number of elements currently stored. Memory is dynamically allocated on the heap for each individual `Node` as needed, ensuring highly efficient memory usage.
