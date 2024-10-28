# 🌵Libft 42SP

### 🗣️What is Libft?
Libft is a solo project at **42** that challenges students to implement a collection of essential _C library functions_ from scratch, along with additional utility functions. This project serves as a foundational exercise, reinforcing key programming concepts and providing a custom-built library of functions that will be valuable for future projects and further C programming endeavors. By completing Libft, students gain _deeper_ insight into how these core functions operate and acquire the **skills** needed to create _efficient, reusable_ code for a wide range of applications.

### 📜Folder structure
```
.
├── build
│   └── objects
│       └── *.o
├── includes
│   └── libft.h
├── lib
│   └── liblibft.a
├── Makefile
├── README.md
├── src
│   ├── bonus
│   │   └── *.c (bonus)
│   └── *.c (standard)
```

### 🛠️Usage
The library is implemented in the C programming language, to compile and run the library, it requires the **GCC** (GNU Compiler Collection), which provides essential tools for compiling C code into executable files.Additionally, it depends on some _standard C libraries_, which supply fundamental functions and definitions used within the library.

#### Instructions
**1. Cloning the repository**
```bash
$ git clone https://github.com/Axedassis/42SP_Libft
```

**2. Compiling the library**

inside the cloned repository folder
```bash
make all
```
⚠️ If you want the library to be compiled including the **bonus functions**, run the following command instead
```bash
make bonus
```
At this point, the **lib, build and objects** folders have been created and the files arranged as properly

**3. How to use**

Within your file in which you intend to use the functions, include the _library header_ to have access to the _prototype_ of the functions and their _definitions_
```c
#include "./includes/libft.h"
```
**4. How to compile**

To correctly compile the code together with the library, it is necessary to pay attention to the **relative paths** to the files
```bash
$ gcc @.c -Wall -Wextra -Werror -lft -L./lib -I. -o main
```
   **Compile `@.c`** with strict warnings:
     - `-Wall`: Enable basic warnings.
     - `-Wextra`: Enable extra warnings.
     - `-Werror`: Treat all warnings as errors.
  
   **Link the `libft.a` library** from the `./lib` directory:
     - `-lft`: Link with `libft.a` (located in `.https://github.com/pasqualerossi/Libft/lib`).
     - `-L./lib`: Specify `./lib` as the library directory.

   **Include the `./includes` directory** for header files:
     - `-I./includes`: Look for header files in the `./includes` directory.

   **Output file named `main`:**
     - `-o main`: Name the compiled output `main`.

### 📎Functions

Below is a table with the _name and respective functionality_ of each function present within the library. To have better knowledge of function prototyping, it is recommended to look at **includes/libft.h**
| Function Name   |                    Functionality                                  |
|-----------------|:-----------------------------------------------------------------:|
| ft_isalpha      | checks for an alphabetic character.                               |
| ft_isdigit      | checks for a digit (0 through 9).                                 |
| ft_isalnum      | checks for an alphanumeric character.                             |
| ft_isascii      | checks whether c fits into the ASCII character set.               |
| ft_isprint      | checks for any printable character.                               |
| ft_toupper      | convert char to uppercase.                                        |
| ft_tolower      | convert char to lowercase.                                        |
| ft_memset       | fill memory with a constant byte.                                 |
| ft_strlen       | calculate the length of a string.                                 |
| ft_bzero        | zero a byte string.                                               |
| ft_memcpy       | copy memory area.                                                 |
| ft_memmove      | copy memory area.                                                 |
| ft_strlcpy      | copy string to an specific size.                                  |
| ft_strlcat      | concatenate string to an specific size.                           |
| ft_strchr       | locate character in string.                                       |
| ft_strrchr      | locate character in string.                                       |
| ft_strncmp      | compare two strings.                                              |
| ft_memchr       | scan memory for a character.                                      |
| ft_memcmp       | compare memory areas.                                             |
| ft_strnstr      | locate a substring in a string.                                   |
| ft_strdup       | creates a dupplicate for the string passed as parameter.          |
| ft_atoi         | convert a string to an integer.                                   |
| ft_calloc       | allocates memory and sets its bytes' values to 0.                 |
| ft_substr       | returns a substring from a string.                                |
| ft_strjoin      | concatenates two strings.                                         |
| ft_strtrim      | trims the beginning and end of string with specific set of chars. |
| ft_split        | splits a string using a char as parameter.                        |
| ft_itoa         | converts a number into a string.                                  |
| ft_strmapi      | applies a function to each character of a string.                 |
| ft_striteri     | applies a function to each character of a string.                 |
| ft_putchar_fd   | output a char to a file descriptor.                               |
| ft_putstr_fd    | output a string to a file descriptor.                             |
| ft_putendl_fd   | output a string to a file descriptor, followed by a new line.     |
| ft_putnbr_fd    | output a number to a file descriptor.                             |
| ft_lstnew       | creates a new list element.                                       |
| ft_lstadd_front | adds an element at the beginning of a list.                       |
| ft_lstsize      | counts the number of elements in a list.                          |
| ft_lstlast      | returns the last element of the list.                             |
| ft_lstadd_back  | adds an element at the end of a list.                             |
| ft_lstclear     | deletes and free list.                                            |
| ft_lstiter      | applies a function to each element of a list.                     |
| ft_lstmap       | applies a function to each element of a list.                     |

### 🚩Points to pay attention

**1. Project structuring** 

It is essential to note that the project's structure—both in terms of folders and compilation process—has been deliberately organized to ensure cohesion and clarity, particularly for sharing and maintaining the repository. While the published version has been enhanced for readability and ease of navigation, the original file structure was kept more straightforward, embodying a minimalist design with a simplified folder layout and a basic Makefile for compilation. This minimalist approach in the original version allows for a faster setup and more accessible development environment, prioritizing functionality and efficiency. However, the enhanced repository structure in the published version aids in collaboration, readability, and scalability, making it better suited for continued development and community use.

**2. Project testing** 

All functions contained within this repository have undergone extensive testing multiple times using the [Francinette](https://github.com/xicodomingues/francinette) test package. This comprehensive testing suite aggregates a variety of additional test repositories, ensuring that each function meets the high standards of accuracy and reliability mandated by the project documentation. By utilizing Francinette, we can confidently verify the correctness of our implementations, as it systematically checks for a wide range of edge cases and functionality criteria.

**3. Design patterns**

The entire project complies with the rigorous standards set by École 42, ensuring that all coding practices align with the prescribed norms. This adherence enhances code quality, maintainability, and consistency across projects within the 42 community. For more information on the importance of these standards, as well as guidance on their application, please refer to the dedicated tool [repository](https://github.com/42School/norminette).Following these guidelines ensures that the code is both functional and elegant, reflecting the high standards expected at École 42.


### ⭐ that's all, thank you very much ⭐
