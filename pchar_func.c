#include "monty.h"
/**
 * _pchar - prints a character at the top of stack
 * @stack: points to linked list stack_t
 * @line_number: line opcode occurs
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
        if (!*stack)
        {
                fprintf(stderr, "L%d: can't pchar, stack empty", line_number);
                error_exit(stack);
        }
        else if (!isprint((*stack)->n))
        {
                fprintf(stderr, "L%d: can't pchar, value out of range", line_number);
                error_exit(stack);
        }
        printf("%c\n", (*stack)->n);
}
