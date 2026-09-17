This activity has been created as part of the 42 curriculum by sabahmad

# Libft

## Description

Libft is a project from the 42 Common Core curriculum.

The goal of this project is to create a personal C library containing reimplementations of standard C library functions, additional utility functions, and linked-list manipulation functions.

The project focuses on understanding how these functions work, especially when dealing with strings, memory, pointers, dynamic allocation, and data structures.

The library is compiled into a static library called libft.a, which can be reused in other C projects.


## Library Contents

The library is divided into three parts.

### Part 1 — Libc Functions

#### Character functions

- `ft_isalpha`

- `ft_isdigit`

- `ft_isalnum`

- `ft_isascii`

- `ft_isprint`

#### String functions

- `ft_strlen`

- `ft_strchr`

- `ft_strrchr`

- `ft_strncmp`

- `ft_strnstr`

- `ft_strdup`

- `ft_strlcpy`

- `ft_strlcat`

#### Memory functions

- `ft_memset`

- `ft_bzero`

- `ft_memcpy`

- `ft_memmove`

- `ft_memchr`

- `ft_memcmp`

#### Conversion functions

- `ft_toupper`

- `ft_tolower`

- `ft_atoi`

#### Allocation

- `ft_calloc`

### Part 2 — Additional Functions

- `ft_substr`

- `ft_strjoin`

- `ft_strtrim`

- `ft_split`

- `ft_itoa`

- `ft_strmapi`

- `ft_striteri`

- `ft_putchar_fd`

- `ft_putstr_fd`

- `ft_putendl_fd`

- `ft_putnbr_fd`

### Bonus — Linked Lists

The bonus functions of libft deal with list manipulation. This part is worth an extra 25% to the final grade.

- `ft_lstnew`

- `ft_lstadd_front`

- `ft_lstsize`

- `ft_lstlast`

- `ft_lstadd_back`

- `ft_lstdelone`

- `ft_lstclear`

- `ft_lstiter`

- `ft_lstmap`

## Skills

Through this project, I practiced:

- `Automated compilation`

- `Dynamic memory allocation`

- `Library creation`

- `Library linking`

- `Memory management and pointers`

- `String manipulation`

- `Linked lists`

- `Function pointers`

- `Makefiles`

- `C programming and debugging`

## Instructions

### Compilation

The project uses a Makefile to compile the source files and create libft.a.

**To compile the mandatory part:**
make 

**To compile the bonus part:**
make bonus

**To remove object files:**
make clean 

**To remove object files and the library:**
make fclean 

**To recompile the project:**
make re 

**The source files are compiled with:**
-Wall -Wextra -Werror 

### Using the Library

**Include the library header in your C program:**
#include "libft.h" 

**Then compile your program with the library:**
cc main.c -L. -lft -o program 

**Run the program:**
./program 

## Resources

- `Man Pages`

- `The Unix/Linux manual pages were used as the main reference for understanding the behavior, parameters, return values, and expected behavior of standard functions.`

- `W3Schools`

## AI Usage

AI was used as a learning aid during the project.

I provided man pages and relevant W3Schools pages and used AI to explain their content, clarify concepts, and provide additional information and examples when something was unclear.

AI was also used to clarify some C concepts and compiler or debugging issues during the project.

The implementations were written and tested as part of my own work.

## Author

**Seba Al-Sayed**
**42 Irbid — Common Core**
**Project: Libft**
