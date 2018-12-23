#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fptr, *fptr2;
	char ch;
	int err,err2;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_陳曾豪/welcome.txt", "r");
	err2 = fopen_s(&fptr2, "C://Users/FTE/Desktop/107360228_陳曾豪/output.txt", "w");
	if ((fptr != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr)) != EOF)
		{
			putc(ch, fptr2);
			
		}
		fclose(fptr);
		fclose(fptr2);
		printf("copy success!\n");
	}
	else
	{
		printf("開檔失敗\n");

	}

	system("pause");
	return 0;
}