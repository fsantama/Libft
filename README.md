# Libft - Your First Library in C

## Table of Contents

- [Introduction](#introduction)
- [Project Description](#project-description)
- [Getting Started](#getting-started)
- [List of Functions](#list-of-functions)
- [Bonus Functions](#bonus-functions)

## Introduction

Libft is your first C library project. It involves implementing various standard C library functions, as well as additional functions, to create a utility library that can be used throughout your programming journey.

## Project Description

The Libft project consists of two main parts: the mandatory part and the bonus part. In the mandatory part, you'll re-implement several standard C library functions. In the bonus part, you'll work with linked lists and implement functions to manipulate them.

## Getting Started

To use the Libft library, you'll first need to compile it into a static library file. You can do this by running the provided Makefile. Here are some useful commands:

- `make` or `make all`: Compiles the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Re-compiles the library.

## List of Functions

### Part 1 - Functions from libc

- `ft_isalpha` - Check if a character is an alphabetic character.
- `ft_isdigit` - Check if a character is a digit.
- `ft_isalnum` - Check if a character is an alphanumeric character.
- `ft_isascii` - Check if a character is a valid ASCII character.
- `ft_isprint` - Check if a character is printable.
- `ft_strlen` - Calculate the length of a string.
- `ft_memset` - Fill memory with a constant byte.
- `ft_bzero` - Set the first n bytes of memory to zero.
- `ft_memcpy` - Copy memory area.
- `ft_memmove` - Copy memory area with overlapping.
- `ft_strlcpy` - Copy string to specified size.
- `ft_strlcat` - Concatenate strings with size checking.
- `ft_toupper` - Convert a character to uppercase.
- `ft_tolower` - Convert a character to lowercase.
- `ft_strchr` - Locate a character in a string.
- `ft_strrchr` - Locate a character in a string, searching in reverse.
- `ft_strncmp` - Compare strings with a limited length.
- `ft_memchr` - Locate character in a memory block.
- `ft_memcmp` - Compare memory areas.
- `ft_strnstr` - Locate a substring in a string with a length limit.
- `ft_atoi` - Convert a string to an integer.
- `ft_calloc` - Allocate and zero-initialize memory.
- `ft_strdup` - Duplicate a string.

### Part 2 - Additional Functions

- `ft_substr` - Create a substring from a string.
- `ft_strjoin` - Concatenate two strings.
- `ft_strtrim` - Trim specified characters from the beginning and end of a string.
- `ft_split` - Split a string into an array of substrings using a delimiter.
- `ft_itoa` - Convert an integer to a string.
- `ft_strmapi` - Apply a function to each character of a string and create a new string.
- `ft_striteri` - Apply a function to each character of a string with its index.
- `ft_putchar_fd` - Write a character to a file descriptor.
- `ft_putstr_fd` - Write a string to a file descriptor.
- `ft_putendl_fd` - Write a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Write an integer to a file descriptor.

## Bonus Functions

In addition to the mandatory functions, the bonus part involves working with linked lists. Here are the bonus functions:

- `ft_lstnew` - Create a new list node.
- `ft_lstadd_front` - Add a node to the beginning of a list.
- `ft_lstsize` - Count the number of nodes in a list.
- `ft_lstlast` - Get the last node in a list.
- `ft_lstadd_back` - Add a node to the end of a list.
- `ft_lstdelone` - Delete a node and its content from a list.
- `ft_lstclear` - Delete all nodes from a list and free their content.
- `ft_lstiter` - Apply a function to the content of each node in a list.
- `ft_lstmap` - Create a new list resulting from the application of a function to the content of each node in another list.