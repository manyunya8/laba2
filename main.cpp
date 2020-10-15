#include <stdio.h>
#include "laba2.h"

int main()
{
	char str[256];
	printf("Enter the string: ");
	fgets(str, 255, stdin);
	char* a = str;
	char* word = ShortestWord(a);
	while (*word != 0)
	{
		putchar(*word);
		word++;
	}
	return 0;
}


