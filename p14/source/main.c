#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fptr;
	char ch;
	int count = 0,err;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_陳曾豪/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
	{
		printf("開檔失敗\n");

	}

	system("pause");
	return 0;
}