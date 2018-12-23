#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX],ch;
	int i = 0,err;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_³¯´¿»¨/output.txt", "a");
	printf("Hit Enter to end\n");
	while ((ch = getchar()) && ch != '\n' && i < MAX)
		{
			str[i++] = ch;
			
		}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\nadding success\n");


	system("pause");
	return 0;
}