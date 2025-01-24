# C02 Module Exercises

## Description

This repository contains solutions for the **C02 module**. Each exercise is implemented in its own directory and focuses on string manipulation and character checks in C programming. The exercises explore key concepts such as copying strings, comparing strings, checking string properties, and transforming text.

---

## Repository Structure

The project is organized as follows:

- `ex00/`
  - **`ft_strcmp.c`**: Compares two strings lexicographically.
  - **`a.exe`**: Compiled binary for `ft_strcmp.c`.
- `ex01/`
  - **`ft_strncpy.c`**: Copies a string up to a specified number of characters.
- `ex02/`
  - **`ft_str_is_alpha.c`**: Checks if a string contains only alphabetical characters.
- `ex03/`
  - **`ft_str_is_numeric.c`**: Checks if a string contains only numeric characters.
  - **`a.exe`**: Compiled binary for `ft_str_is_numeric.c`.
- `ex04/`
  - **`ft_str_is_lowercase.c`**: Checks if a string contains only lowercase letters.
- `ex05/`
  - **`ft_str_is_uppercase.c`**: Checks if a string contains only uppercase letters.
- `ex06/`
  - **`ft_str_is_printable.c`**: Checks if a string contains only printable characters.
  - **`a.exe`**: Compiled binary for `ft_str_is_printable.c`.
- `ex07/`
  - **`ft_strupcase.c`**: Converts all lowercase characters in a string to uppercase.
  - **`a.exe`**: Compiled binary for `ft_strupcase.c`.
- `ex08/`
  - **`ft_strlowcase.c`**: Converts all uppercase characters in a string to lowercase.
  - **`a.exe`**: Compiled binary for `ft_strlowcase.c`.
- `ex09/`
  - **`ft_strcapitalize.c`**: Capitalizes the first letter of each word in a string.
- `ex10/`
  - **`ft_strlcpy.c`**: Copies a string with a size limit, returning the length of the source string.
- `ex11/`
  - **`ft_putstr_non_printable.c`**: Prints a string while replacing non-printable characters with a hexadecimal representation.
  - **`a.exe`**: Compiled binary for `ft_putstr_non_printable.c`.

---

## Detailed Explanation of Functions

### `ft_strcmp.c` (ex00)
- **Functionality**: Compares two strings lexicographically.
- **Prototype**:
  ```c
  int ft_strcmp(char *s1, char *s2);
### `ft_strncpy.c` (ex01)
- **Functionality**: Copies a string up to a specified number of characters.
- **Prototype**:
  ```c
  char *ft_strncpy(char *dest, char *src, unsigned int n);
### `ft_str_is_alpha.c` (ex02)
- **Functionality**: Checks if a string contains only alphabetical characters.
- **Prototype**:
  ```c
   int ft_str_is_alpha(char *str);
### `ft_str_is_numeric.c` (ex03)
- **Functionality**: Checks if a string contains only numeric characters.
- **Prototype**:
  ```c
  int ft_str_is_numeric(char *str);
### `ft_str_is_lowercase.c` (ex04)
- **Functionality**: Checks if a string contains only lowercase letters.
- **Prototype**:
  ```c
  int ft_str_is_lowercase(char *str);
### `ft_str_is_uppercase.c` (ex05)
- **Functionality**: Checks if a string contains only uppercase letters.
- **Prototype**:
  ```c
  int ft_str_is_uppercase(char *str);
### `ft_str_is_printable.c` (ex06)
- **Functionality**: Checks if a string contains only printable characters.
- **Prototype**:
  ```c
   int ft_str_is_printable(char *str);
### `ft_strupcase.c` (ex07)
- **Functionality**: Converts all lowercase characters in a string to uppercase.
- **Prototype**:
  ```c
   char *ft_strupcase(char *str);
### `ft_strlowcase.c` (ex08)
- **Functionality**: Converts all uppercase characters in a string to lowercase.
- **Prototype**:
  ```c
   char *ft_strlowcase(char *str);
### `ft_strcapitalize.c` (ex09)
- **Functionality**: Capitalizes the first letter of each word in a string.
- **Prototype**:
  ```c
   char *ft_strcapitalize(char *str);
### `ft_strlcpy.c` (ex10)
- **Functionality**: Copies a string with a size limit, returning the length of the source string.
- **Prototype**:
  ```c
   unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
### `ft_putstr_non_printable.c` (ex11)
- **Functionality**: Prints a string while replacing non-printable characters with a hexadecimal representation.
- **Prototype**:
  ```c
   void ft_putstr_non_printable(char *str);
## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/saadfahmi/C02-.git
   cd C02)


  
  
  
