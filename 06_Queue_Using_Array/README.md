# 🔗 Queue Using Array (C++)

---

## 📌 Description

This directory contains a C++ implementation of a standard **Linear Queue** data structure utilizing a static, fixed-size array. A queue strictly operates on the **FIFO (First In, First Out)** principle, where elements are inserted at the rear and removed from the front.

This implementation features an interactive command-line interface to perform basic queue operations. It manages data flow using two index variables, `front` and `rear`. The code includes necessary boundary condition checks to prevent **Queue Overflow** (when the array reaches its maximum capacity) and **Queue Underflow** (when attempting to delete from an empty queue).

*Note: As a standard linear queue implementation using an array, it does not reuse empty spaces left at the front after dequeuing elements once the rear reaches the end of the array.*

## ⏱️ Time Complexities

*   **Enqueue:** *O(1)* (Constant time insertion at the `rear` index)
*   **Dequeue:** *O(1)* (Constant time removal from the `front` index)
*   **Front:** *O(1)* (Direct array access to the element at the `front` index)
*   **Display:** *O(n)* (Requires iterating through the queue from the `front` index to the `rear` index)

## 💾 Space Complexity

*   *O(n)* auxiliary space for allocating a fixed-size array, where `n` is the predefined maximum capacity of the queue (`#define N 5`).
