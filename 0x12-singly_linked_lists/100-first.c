#include <stdio.h>

/**
 * printf - function executed before main
*/

void printf(void) __attribute__ ((constructor));

void printf(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
