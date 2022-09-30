#include <stdio.h>

void beat(void) __attribute__ ((constructor));

/**
 * beat - executes before the main function
 */
void beat(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
