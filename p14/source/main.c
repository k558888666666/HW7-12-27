#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *fptr;
	char ch;
	int count = 0,err;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_������/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�}�ɥ���\n");

	}

	system("pause");
	return 0;
}