fndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);
void def print_reversed_list_integer(my_list=[]):
void def new_in_list(my_list, idx, element)
void def no_c(my_string):
void def print_matrix_integer(matrix=[[]]):
void def add_tuple(tuple_a=(), tuple_b=()):
void def multiple_returns(sentence):
void def max_integer(my_list=[]):
void def divisible_by_2(my_list=[]):
void def delete_at(my_list=[], idx=0):
int is_palindrome(listint_t **head);
void print_python_list_info(PyObject *p);
#endif /* LISTS_H */
