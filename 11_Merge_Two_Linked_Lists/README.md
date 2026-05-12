# 🔗 Merge Two Linked Lists (C++)

---

## 📌 Description

This directory contains a C++ implementation of a common Data Structures and Algorithms problem: **Merging Two Linked Lists**. 

The program includes a custom `linklist` class with basic operations like dynamic insertion (`push`) and traversal (`Display`). The core functionality lies in the `mergelist` function, which takes two independent linked lists as input and systematically compares their nodes. 

This specific implementation performs an **Out-of-Place Merge**. It traverses both input lists using two pointers (`p1` and `p2`), compares their respective values, and dynamically allocates new nodes to construct a third, entirely separate `result` linked list containing the merged data.

## ⏱️ Time Complexities

*   **Insertion (Push):** *O(1)* (Constant time insertion as it optimally utilizes a `Tail` pointer)
*   **Merge Operation:** *O(N + M)* (Linear time, where `N` and `M` are the lengths of the two respective linked lists. The function traverses both lists entirely at most once)
*   **Display:** *O(K)* (Requires traversing the specific linked list of length `K` from `Head` to `NULL`)

## 💾 Space Complexity

*   **Merge Operation:** *O(N + M)* auxiliary space. Since this is an out-of-place merge, it allocates fresh memory on the heap for every single node in the new `result` linked list.
