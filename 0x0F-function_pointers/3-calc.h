#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct for an operator and its associated function.
 * @op: The operator as a string.
 * @f: The pointer to the associated function that performs the operation.
 */
typedef struct op
{
	char *op;    /* The operator as a string. */
	int (*f)(int a, int b);    /* The associated function. */
} op_t;

/* Function prototypes for basic arithmetic operations */
int op_add(int a, int b);    /* Function to add two integers. */
int op_sub(int a, int b);    /* Function to subtract 'b' from 'a'. */
int op_mul(int a, int b);    /* Function to multiply two integers. */
int op_div(int a, int b);    /* Function to divide 'a' by 'b'. */
int op_mod(int a, int b);    /* Function to find the remainder of 'a' divided by 'b'. */

/**
 * get_op_func - Function to get the pointer to the associated arithmetic function.
 * @s: The operator as a string.
 *
 * Return: A pointer to the corresponding arithmetic function.
 */
int (*get_op_func(char *s))(int, int);

#endif
