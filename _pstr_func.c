#include "monty.h"
/**
 * _pstr - prints a string stored in stack
 * @stack: poins to linked list stack_t
 * @line_number: line opcode occurs
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
        int num;

        (void)line_number;

        if (!*stack)
                putchar('\n');

        while (*stack)
        {
                num = (*stack)->n;
                if (num == 0 || !isprint(num))
                        break;
                putchar(num);
                *stack = (*stack)->next;
        }
        putchar('\n');
}
