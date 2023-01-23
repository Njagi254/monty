#include "monty.h"

/**
 * _pall - prints values on the stack from the top
 * @stack: points to linked list stack_t
 * @line_number: number of line opcode occurs on
 * Return: void
 */
void _pall(stack_t **stack, unsigned int line_number)
{
        stack_t *temp = *stack;

        (void)line_number;

        while (temp != NULL)
        {
                printf("%d\n", temp->n);
                temp = temp->next;
        }
}
