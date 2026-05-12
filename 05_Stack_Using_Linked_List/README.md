# 🔗 Stack Using Linked List (C++)

---

## 📌 Description

This directory contains a C++ implementation of a Stack data structure utilizing a **Singly Linked List**. Unlike array-based stacks that have a fixed, pre-defined capacity, this approach uses dynamic memory allocation. This allows the stack to grow and shrink organically at runtime, effectively eliminating the standard Stack Overflow condition (limited only by available heap memory).

The implementation strictly adheres to the **LIFO (Last In, First Out)** principle. All fundamental operations—insertion (push) and deletion (pop)—are efficiently executed at the `head` (represented by the `top` pointer) of the linked list.

## ⏱️ Time Complexities

* **Push:** *O(1)* (Constant time allocation and pointer update at the `top` node)
* **Pop:** *O(1)* (Constant time removal and deallocation of the `top` node)
* **Top / Peek:** *O(1)* (Direct access to the value stored in the `top` node)
* **Display:** *O(n)* (Requires traversing the linked list from the `top` pointer down to `NULL`)

## 💾 Space Complexity

* *O(n)* auxiliary space, where `n` is the total number of elements currently stored. Memory is dynamically allocated on the heap for each individual `Node`.
