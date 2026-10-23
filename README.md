*This project has been created as part of the 42 curriculum by herrabba.*

# Libft

## Description

Libft is the first project of the 42 curriculum. The goal is to write a personal C library, `libft.a`, containing general-purpose functions that will be reused in all later projects.

The project helps to understand how the standard C library works by reimplementing it, and it covers pointers, string and memory manipulation, dynamic allocation (`malloc` / `free`), linked lists, and building a static library with a Makefile and `ar`.

## Library overview

All functions are prefixed with `ft_`, are compiled with `-Wall -Wextra -Werror`, follow the 42 Norm, use no global variables, and rely only on the external functions allowed by the subject (`malloc`, `free`, `write`).

### Part 1: libc functions

Reimplementations with the same prototypes and behaviour as the originals described in their man pages.

| Category | Functions |
|---|---|
| Character classification | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` (return 1 if the character matches, 0 otherwise) |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String functions | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat` |
| Memory functions | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Conversion | `ft_atoi` |
| Allocation (`malloc`) | `ft_calloc`, `ft_strdup` |

`ft_calloc` follows the subject's rule: if `nmemb` or `size` is 0, it returns a unique pointer that can be passed to `free()`.

### Part 2: additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a newly allocated substring starting at index `start`, of at most `len` characters. |
| `ft_strjoin` | Returns a new string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Returns a copy of `s1` without the characters of `set` at its beginning and end. |
| `ft_split` | Splits a string using a delimiter character into a `NULL`-terminated array of allocated strings. |
| `ft_itoa` | Converts an integer (including negatives) to an allocated string. |
| `ft_strmapi` | Applies `f(index, char)` to each character and returns the resulting new string. |
| `ft_striteri` | Applies `f(index, &char)` to each character of a string in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3: linked lists

The library provides the following list node structure, declared in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and returns a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Returns the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees a node's content with `del`, then frees the node (not the following ones). |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content, cleaning up with `del` if an allocation fails. |

## Instructions

### Requirements

- `cc` (gcc or clang)
- `make`
- `ar`
- A Unix-like system (Linux or macOS)

### Compilation

```sh
make          # build libft.a at the root of the repository
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # fclean, then rebuild everything
```

The Makefile compiles every source file with `cc -Wall -Wextra -Werror`, creates the archive with `ar`, and does not relink if nothing has changed.

### Usage in your own program

1. Build the library from the root of the repository:

```sh
make
```

2. Include the header in your source file. `libft.h` is located at the root of the repository, next to `libft.a`:

```c
#include "libft.h"
```

3. Compile your program and link it with the library:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```


### Example

```c
#include "libft.h"

int main(void)
{
    char    **words;
    int     i;

    words = ft_split("hello 42 world", ' ');
    if (!words)
        return (1);
    i = 0;
    while (words[i])
    {
        ft_putendl_fd(words[i], 1);
        free(words[i]);
        i++;
    }
    free(words);
    return (0);
}
```

### Testing notes

On glibc systems, `strlcpy`, `strlcat` and `bzero` may require `<bsd/string.h>` and `-lbsd` when comparing your versions against the system ones in your own test programs.

## Resources

### References

- Linux man pages: behaviour of every reimplemented function (`man 3 strlcpy`, `man 3 memmove`, etc.)
- [cppreference: C standard library](https://en.cppreference.com/w/c)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- *The C Programming Language* by Kernighan and Ritchie
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Norminette](https://github.com/42School/norminette): the 42 Norm checker

### Use of AI

In line with the project's AI instructions, AI was not used to write the library functions. It was used only for:

- **README.md:** drafting and structuring this file.
- **Searching for resources:** quickly finding relevant documentation, references and tutorials.
- **Understanding function behaviour:** a fast way to look up how some functions behave and why they return what they do (return values, edge cases).

All the library code, the Makefile,header file were written, understood, and tested by me and discussed with peers.