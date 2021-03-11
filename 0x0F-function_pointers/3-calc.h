#ifndef CALC_H
#define CALC_H

/**
 * struct op - Structure made with a pointer to a char (op) and a ƒ() pointer.
 * @op: pointer to char; operation.
 * @f: ƒ() pointer to first bytes of code associated with instructions to be
 * chosen.
 *
 */

struct op
{
	char *op;
	int (*f)(int a, int b);
};
typedef struct op op_t;

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif
