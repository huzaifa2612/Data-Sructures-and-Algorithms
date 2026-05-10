# Doubly Linked List (C++)

## 📌 Description
This directory contains a from-scratch C++ implementation of a Doubly Linked List (DLL). Unlike a standard singly linked list, this data structure utilizes bi-directional pointers (`prev` and `next`), allowing for reverse traversal and more efficient deletion operations at the cost of higher memory overhead. 

The implementation features a fully interactive command-line interface to test various memory management and node manipulation techniques.

## ⏱️ Time Complexities
* **Access/Search:** $O(n)$
* **Insert at Head:** $O(1)$
* **Insert at Tail:** $O(1)$ (Optimized using a Tail pointer)
* **Delete at Head/Tail:** $O(1)$
* **Insert/Delete at specific position:** $O(n)$
* **Reverse List:** $O(n)$

## 💾 Space Complexity
* $O(n)$ for dynamic memory allocation of nodes. Each node requires additional memory compared to a Singly Linked List due to the stored `prev` pointer.
