# 0x12. C - Singly Linked Lists

![Linked Lists](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

## Concepts

In this project, we will focus on the following concept:

- Data Structures

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Compilation will be performed on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Your code should use the Betty style, which will be checked using betty-style.pl and betty-doc.pl
- Use of global variables is not allowed
- Each file should contain no more than 5 functions
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed. Usage of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- The `_putchar.c` file should not be pushed; it will be provided for compilation. If you push it, it won't be taken into account
- The prototypes of all your functions and the `_putchar` function should be included in your header file named `lists.h`
- Don’t forget to push your header file
- All your header files should be include guarded

### More Info

The data structure to be used for this project is defined as follows:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Resources

To successfully complete this project, you can read or watch resources on Linked Lists from various sources, including:

- Linked Lists
- Google
- Youtube

Feel free to use these resources to enhance your understanding of the subject matter.

