*This activity has been created as part of the 42 curriculum by <login1>.*

---

## Description
This project consists of the creation of a custom C library, gathering essential functions that will be reused in future programming projects. The primary goal is to reimplement standard functions from the `libc` as well as additional utility functions to gain a deep understanding of memory management, string manipulation, and data structures.

---

## Instructions
### Compilation
To compile the library, navigate to the root of the repository and use the provided `Makefile`:

* `make`: Compiles the source files and creates the `libft.a` library.
* `make clean`: Deletes the object files (`.o`).
* `make fclean`: Deletes the object files and the compiled library file (`.a`).
* `make re`: Performs a full recompilation (`fclean` + `make`).

### Execution
To use the library in your own C project, include the header file and link the library during compilation:

1. Include the header in your code: `#include "libft.h"`
2. Link the library: `gcc main.c -L. -lft`

---

## Library Details
The library is a collection of functions that serve as a foundation for C programming at 42. It is divided into three main categories:

1. **Libc Functions:** Re-implementations of standard C library functions (e.g., `ft_isalpha`, `ft_strlen`, `ft_memset`, `ft_calloc`).
2. **Additional Functions:** Useful utility functions for string manipulation and memory allocation not found in the standard library (e.g., `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`).
3. **Linked Lists:** A set of functions designed to manipulate linked list structures (e.g., `ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`).

---

## Resources
* [C Reference](https://en.cppreference.com/w/c) - General documentation for standard C.
* [Unix Man Pages](https://man7.org/linux/man-pages/) - Detailed specifications for original libc functions.

### AI Usage
AI (Gemini) was utilized for the following tasks:
* **Documentation:** Structuring and drafting this README file.
* **Logic Verification:** Explaining edge cases for complex functions like `ft_strlcat` and `ft_split`.
* **Code Optimization:** Suggestions for improving the efficiency of memory allocation checks.