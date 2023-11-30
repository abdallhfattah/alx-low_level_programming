# C - Function Pointers

## Tasks

### 0. What's my name

Write a function that prints a name.

**Prototype:** `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done

Write a function that executes a function given as a parameter on each element of an array.

**Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`

- `size`: The size of the array
- `action`: Pointer to the function to be used

### 2. To hell with circumstances; I create opportunities

Write a function that searches for an integer.

**Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

- `size`: The number of elements in the array `array`
- `cmp`: Pointer to the function used to compare values

Returns the index of the first element for which the `cmp` function does not return 0. If no element matches, return -1. If `size <= 0`, return -1.

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

**Usage:** `calc num1 operator num2`

- `num1` and `num2` are integers, use `atoi` to convert them from string input to int.
- `operator` is one of the following:
  - `+`: addition
  - `-`: subtraction
  - `*`: multiplication
  - `/`: division
  - `%`: modulo

The program prints the result of the operation, followed by a new line.

#### Error Handling:

- If the number of arguments is wrong, print "Error", followed by a new line, and exit with the status 98.
- If the operator is none of the above, print "Error", followed by a new line, and exit with the status 99.
- If the user tries to divide (`/` or `%`) by 0, print "Error", followed by a new line, and exit with the status 100.

---

## Files

### 3-calc.h

This file should contain all the function prototypes and data structures used by the program. Use the following structure:

```c
#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */
