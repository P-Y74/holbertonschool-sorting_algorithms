<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - Sorting Algorithms & Big O

Welcome to my project on sorting algorithms and time complexity, created as part of my training at Holberton School. This repository demonstrates my understanding of multiple sorting techniques, how to assess their efficiency using Big O notation, and how to choose the most suitable algorithm depending on the use case.

---

## 📁 Project Structure

This repository contains the implementation of at least four different sorting algorithms, written in C. Each algorithm has its own source file(s), and a common `sort.h` header.

---

## 🚀 Concepts Covered

- ✅ What is a sorting algorithm
- ✅ Implementation of multiple sorting techniques
- ✅ Understanding Big O notation
- ✅ Time complexity evaluation
- ✅ Stable vs unstable algorithms
- ✅ Choosing the best algorithm for a specific input

---

## 🧠 Implemented Algorithms

Each of the following algorithms is implemented following strict constraints (Betty style, no standard library, etc.):

- **Bubble Sort**
- **Insertion Sort**
- **Selection Sort**
- **Quick Sort**

Additional or bonus implementations may include:
- Merge Sort
- Shell Sort
- Cocktail Sort

---

## 🛠 Requirements

- All files compiled on **Ubuntu 20.04 LTS** using:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- Betty coding style
- No use of global variables
- No standard library functions unless specified
- Maximum of 5 functions per file
- A `README.md` file at the root
- All header files must be guarded with `#ifndef`, `#define`, `#endif`

---

## 🧾 Header and Data Structures

Common header: `sort.h` includes:

```c
/* Doubly linked list node */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
```

These are used for sorting both arrays and doubly linked lists.

---

## 📊 Time Complexity (Big O)

Throughout the project, you’ll find detailed considerations for:

- O(1)
- O(n)
- O(n^2)
- O(n log(n))
- O(log(n))
- O(n + k)

Each algorithm is analyzed to understand its behavior in worst, average, and best-case scenarios.

---

## 🧪 Testing

Sample test files (`main.c`) are available to test each function, though not pushed to the repository. During correction, Holberton will use its own main files.

---

## 🔗 GitHub Repository

You can view the full project on my GitHub:
👉 [https://github.com/P-Y74/holbertonschool-sorting_algorithms](https://github.com/P-Y74/holbertonschool-sorting_algorithms)

---

## 👨‍💻 Authors

[**f-qrm**](https://github.com/f-qrm)  
[**P-Y74** ](https://github.com/P-Y74)  

---

## 🏫 Holberton School

This project was created as part of the curriculum at [Holberton School](https://www.holbertonschool.com/), focusing on C programming, algorithm optimization, and complexity analysis.

---

Thanks for checking out this project! ⭐ Feel free to explore, clone, or fork!

