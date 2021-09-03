
<div>
<p align="center">
   <img src="./.github/42.png" alt="Github-Explorer" width="500"/>
</p>
</div>
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

# :pushpin: Index

* [What's this Repo?](#sparkles_What's-Libft-of-42?)
* [List of Functions](#clipboard_List-of-Fucntions)
* [Technologies](#computer_Technologies)
* [Find a Bug? Or somenthing need to change?](#bug_Issues?)

# :sparkles: What's Libft of 42?

This is a Library of function that's we will use in the others projects of the 42 school.


## :clipboard: List of Functions
<h3 align=center>
Part 1
</h3>

> <i>In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.</i>

<p align=center>
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
</p>

<h3 align=center>
Part 2
</h3>

> <i>In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.</i>

<p align=center>
• substr
• strjoin
• strtrim
• split
• itoa
• strmapi
• striteri
• putchar_fd
• putstr_fd
• putendl_fd
• putnbr_fd
</p>

<h3 align=center>
Bonus
</h3>

> <i>The following functions will allow you to easily use your lists.</i>
<p align=center>
• lstnew
• lstadd_front
• lstsize
• lstlast
• lstadd_back
• lstdelone
• lstclear
• lstiter
• lstmap
</p>

---

<h2>
The project
</h2>

### Functions from `<ctype.h>`

- [`ft_isalpha`](part1/ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](part1/ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](part1/ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](part1/ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](part1/ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](part1/ft_toupper.c)	- convert char to uppercase
- [`ft_tolower`](part1/ft_tolower.c)	- convert char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](part1/ft_memset.c)	- fill memory with a constant byte
- [`ft_strlen`](part1/ft_strlen.c)	- calculate the length of a string
- [`ft_bzero`](part1/ft_bzero.c)	- zero a byte string
- [`ft_memcpy`](part1/ft_memcpy.c)	- copy memory area
- [`ft_memmove`](part1/ft_memmove.c)	- copy memory area
- [`ft_strlcpy`](part1/ft_strlcpy.c)	- copy string to an specific size
- [`ft_strlcat`](part1/ft_strlcat.c)	- concatenate string to an specific size
- [`ft_strchr`](part1/ft_strchr.c)	- locate character in string
- [`ft_strrchr`](part1/ft_strrchr.c)	- locate character in string
- [`ft_strncmp`](part1/ft_strncmp.c)	- compare two strings
- [`ft_memchr`](part1/ft_memchr.c)	- scan memory for a character
- [`ft_memcmp`](part1/ft_memcmp.c)	- compare memory areas
- [`ft_strnstr`](part1/ft_strnstr.c)	- locate a substring in a string
- [`ft_strdup`](part1/ft_strdup.c)	- creates a dupplicate for the string passed as parameter

### Functions from `<stdlib.h>`
- [`ft_atoi`](Part1/ft_atoi.c)	- convert a string to an integer
- [`ft_calloc`](Part1/ft_calloc.c)	- allocates memory and sets its bytes' values to 0

### Non-standard functions
- [`ft_substr`](Part2/ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](Part2/ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](Part2/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](Part2/ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](Part2/ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](Part2/ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](Part2/ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](Part2/ft_putchar_fd.c)	- output a char to a file descriptor
- [`ft_putstr_fd`](Part2/ft_putstr_fd.c)	- output a string to a file descriptor
- [`ft_putendl_fd`](Part2/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](Part2/ft_putnbr_fd.c)	- output a number to a file descriptor

### Linked list functions

- [`ft_lstnew`](Bonus/ft_lstnew.c)	- creates a new list element
- [`ft_lstadd_front`](Bonus/ft_lstadd_front.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](Bonus/ft_lstsize.c)	- counts the number of elements in a list
- [`ft_lstlast`](Bonus/ft_lstlast.c)	- returns the last element of the list
- [`ft_lstadd_back`](Bonus/ft_lstadd_back.c)	- adds an element at the end of a list
- [`ft_lstclear`](Bonus/ft_lstclear.c)	- deletes and free list
- [`ft_lstiter`](Bonus/ft_lstiter.c)	- applies a function to each element of a list
- [`ft_lstmap`](Bonus/ft_lstmap.c)	- applies a function to each element of a list

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# :bug: Issues?

Please feel free **to create a new issue** with its title and description on the issues page of the [Libft](https://github.com/Yaten/Libft/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!


Give ⭐️ if you like this project, this will help me!