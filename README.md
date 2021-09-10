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

# 🔖 Index

* [What is Libft?](#sparkles_What-is-Libft?)
* [List of Functions](#clipboard_List-of-Functions)
* [The Project](#bookmark_tabs-The_Project)
* [Technologies](#computer_Technologies)

---

# :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

# :clipboard: List of Functions

## Part 1 - Libc functions

<b>Some of the standard C functions.</b>

`• isalpha` `• isdigit` `• isalnum` `• isascii` `• isprint` `• strlen` `• memset` `• bzero` `• memcpy` `• memmove` `• strlcpy` `• strlcat` `• toupper` `• tolower` `• strchr` `• strrchr` `• strncmp` `• memchr` `• memcmp` `• strnstr` `• atoi` `• calloc` `• strdup`

## Part 2 - Additional functions
<b>Functions 42 deems will be useful for later projects.</b>

`• substr` `• strjoin` `• strtrim` `• split` `• itoa` `• strmapi` `• striteri` `• putchar_fd` `• putstr_fd` `• putendl_fd` `• putnbr_fd`

## Bonus
<b>Functions 42 deems will be useful for linked list manipulation.</b>

`• lstnew` `• lstadd_front` `• lstsize` `• lstlast` `• lstadd_back` `• lstdelone` `• lstclear` `• lstiter` `• lstmap`

---

# :bookmark_tabs: The Project

## Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks for an alphabetic character.
- [`ft_isdigit`](ft_isdigit.c)	- check for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to a specific size.
- [`ft_strlcat`](ft_strlcat.c)	- concatenate a string to a specific size.
- [`ft_strchr`](ft_strchr.c)	- locate character in a string.
- [`ft_strrchr`](ft_strrchr.c)	- locate character in a string.
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [clang](https://clang.llvm.org/)
