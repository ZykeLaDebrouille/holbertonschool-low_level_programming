#include <stdio.h>

/**
 * main - Desc de la fonction
 * Return: Desc de la fonction
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter == 'q' || letter == 'e')
		continue;
	putchar(letter);
}

putchar('\n');
	return (0);
}
