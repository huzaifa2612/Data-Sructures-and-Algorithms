# 🔗 Stack Using Array (C++)

---

## 📌 Description

This directory contains a C++ implementation of a Stack data structure utilizing a static, fixed-size array. A stack strictly follows the **LIFO (Last In, First Out)** principle, where elements are added and removed from the exact same end, dynamically tracked by a `top` index variable.

This implementation includes an interactive command-line menu to perform fundamental stack operations. It explicitly handles memory boundary conditions, preventing invalid memory access by accurately detecting **Stack Overflow** (when capacity is reached) and **Stack Underflow** (when the stack is empty) states.

## ⏱️ Time Complexities

* **Push:** *O(1)* (Constant time insertion at the `top` index)
* **Pop:** *O(1)* (Constant time removal from the `top` index)
* **Top / Peek:** *O(1)* (Direct array access using the `top` index)
* **Display:** *O(n)* (Requires iterating through the stack from the `top` down to the `0`th index)

## 💾 Space Complexity

* *O(n)* auxiliary space for allocating a fixed-size array, where `n` is the predefined maximum capacity of the stack.
