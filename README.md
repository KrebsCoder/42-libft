<p align="center">
  <a href="https://www.linkedin.com/in/prafaelramalho/">
    <img alt="Paulo Rafael Ramalho" src="https://img.shields.io/badge/-Paulo Rafael-682998?style=flat&logo=Linkedin&logoColor=white" />
  </a>

  <a aria-label="Completed" href="https://www.42sp.org.br/">
    <img src="https://img.shields.io/badge/42.sp-Libft-682998?logo="></img>
  </a>

  <a href="https://github.com/Yaten/N/stargazers">
    <img alt="Stargazers" src="https://img.shields.io/github/stars/Yaten/Libft?color=682998&logo=github">
  </a>

  <a href="https://github.com/Yaten/libft/commits/main">
    <img src="https://img.shields.io/github/last-commit/Yaten/libft?color=682998">
  </a>
</p>

---

# 🔖 Index

* [What is Libft?](#sparkles-what-is-libft)
* [List of Functions](#clipboard-list-of-functions)
* [The Project](#bookmark_tabs-the-project)
* [Technologies](#computer-technologies)

---

# :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

# :clipboard: List of Functions

### Part 1 - Libc functions

<b>Some of the standard C functions.</b>

> `isalpha.c` • `isdigit.c` • `isalnum.c` • `isascii.c` • `isprint.c` • `strlen.c` • `memset.c` • `bzero.c` • `memcpy.c` • `memmove.c` • `strlcpy.c` • `strlcat.c` • `toupper.c` • `tolower.c` • `strchr.c` • `strrchr.c` • `strncmp.c` • `memchr.c` • `memcmp.c` • `strnstr.c` • `atoi.c` • `calloc.c` • `strdup.c`

### Part 2 - Additional functions
<b>Functions 42 deems will be useful for later projects.</b>

> `substr.c` • `strjoin.c` • `strtrim.c` • `split.c` • `itoa.c` • `strmapi.c` • `striteri.c` • `putchar_fd.c` • `putstr_fd.c` • `putendl_fd.c` • `putnbr_fd.c`

### Bonus
<b>Functions 42 deems will be useful for linked list manipulation.</b>

> `lstnew.c` • `lstadd_front.c` • `lstsize.c` • `lstlast.c` • `lstadd_back.c` • `lstdelone.c` • `lstclear.c` • `lstiter.c` • `lstmap.c`

---

# :bookmark_tabs: The Project

## Functions from `<ctype.h>`

- [x] [`ft_isalpha`](ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [x] [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [x] [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [x] [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [x] [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [clang](https://clang.llvm.org/)
