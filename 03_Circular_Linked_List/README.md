# Circular Linked List (C++)

## 📌 Description
This directory contains a C++ implementation of a Circular Linked List. Unlike standard linked lists that terminate with a `NULL` pointer, a circular linked list connects the last node back to the first node (`tail->next = head`), creating a continuous loop. 

This implementation includes an interactive command-line menu to demonstrate memory management and precise pointer updating without falling into infinite traversal loops.

## ⏱️ Time Complexities
* **Access/Search:** $O(n)$
* **Insert at Head:** $O(1)$ (Optimized by utilizing the `tail` pointer)
* **Insert at Tail:** $O(1)$ 
* **Delete at Head:** $O(1)$ 
* **Delete at Tail:** $O(n)$ (Requires traversal to locate the second-to-last node)
* **Reverse List:** $O(n)$

## 💾 Space Complexity
* $O(n)$ for dynamic memory allocation of the nodes.
