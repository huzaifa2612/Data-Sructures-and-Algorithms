# 🔗 Queue Using Linked List (C++)

---

## 📌 Description

This directory contains a C++ implementation of a **Queue** data structure utilizing a **Singly Linked List**. Unlike an array-based queue, this dynamic implementation does not suffer from strict capacity limitations, meaning it is not bound by standard Queue Overflow constraints (limited only by available heap memory).

The queue strictly operates on the **FIFO (First In, First Out)** principle. To ensure optimal performance, the implementation maintains two separate pointers:
*   **front:** Points to the first node to efficiently handle deletions (`Deque`).
*   **rear:** Points to the last node to efficiently handle insertions (`push`).

## ⏱️ Time Complexities

*   **Push (Enqueue):** *O(1)* (Constant time insertion utilizing the `rear` pointer)
*   **Deque (Dequeue):** *O(1)* (Constant time removal utilizing the `front` pointer)
*   **Top (Front):** *O(1)* (Direct access to the value stored at the `front` node)
*   **Display:** *O(n)* (Requires traversing the linked list from the `front` pointer down to `NULL`)

## 💾 Space Complexity

*   *O(n)* auxiliary space, where `n` is the total number of elements currently in the queue. Memory is dynamically allocated on the heap for each individual `Node` during execution.
