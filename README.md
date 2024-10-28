# Libft 42SP🌵

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
⚠️ If you want the library to be compiled including the bonus functions, run the following command instead
```bash
make bonus
```
At this point, the **lib, build and objects** folders have been created and the files arranged as properly

**3. How to use**

Within your file in which you intend to use the functions, include the library header to have access to the prototype of the functions and their definitions
```c
#include "./includes/libft.h"
```
**4. How to compile**

To correctly compile the code together with the library, it is necessary to pay attention to the relative paths to the files
```bash
$ gcc @.c -Wall -Wextra -Werror -lft -L./lib -I. -o main
```
  1. **Compile `@.c`** with strict warnings:
     - `-Wall`: Enable basic warnings.
     - `-Wextra`: Enable extra warnings.
     - `-Werror`: Treat all warnings as errors.
  
  2. **Link the `libft.a` library** from the `./lib` directory:
     - `-lft`: Link with `libft.a` (located in `./lib`).
     - `-L./lib`: Specify `./lib` as the library directory.

  3. **Include the `./includes` directory** for header files:
     - `-I./includes`: Look for header files in the `./includes` directory.

  4. **Output file named `main`:**
     - `-o main`: Name the compiled output `main`.