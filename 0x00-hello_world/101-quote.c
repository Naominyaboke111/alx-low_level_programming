#include <stdio.h>
#include <unistd.h>
/**
 *  Main - A C program that prints a string followed by a new line to the standard error
 *
 *  Return : 1 (code successful)
 */
int main(void)
{
        write(2,
        "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
}
