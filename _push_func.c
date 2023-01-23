#include "monty.h"
/**
 * _push - pushes an element to the stack
 * @stack: points to linked list stack_t
 * @line_number: number of line opcode occurs on
 * Return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
        stack_t *new;
        char *arg;
        int push_arg;

        push_arg = 0;
        new = malloc(sizeof(stack_t));
        if (!new)
        {
                fprintf(stderr, "Error: malloc failed\n");
                error_exit(stack);
        }

        arg = strtok(NULL, "\n ");
        if (isnumber(arg) == 1 && arg != NULL)
        {
                push_arg = atoi(arg);
        }
        else
        {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                error_exit(stack);
        }

        if (deflt == 1)
        {
                add_dnodeint_end(stack, push_arg);
        }

        if (deflt == 0)
        {
                add_dnodeint(stack, push_arg);
        }
        free(new);
}
