#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	 /* Get the character to be written */
	 char alphabet = 'a';

	 /* Write the Character to stdout */
	 for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	 {
		 putchar(alphabet);
	 }
	 putchar('\n');

	 return (0);
}
