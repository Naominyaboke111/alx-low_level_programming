#include <stdio.h>
/**
 * Main - C program that prints the size of various types on the computer it is compiled and run on
 *
 * Return : 0 (code successful)
 */
int main(void)
{
        char c;
        int i;
        long int b;
        long long int d;
        float f;

printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
