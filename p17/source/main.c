#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX];
	int bytes,err;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_������/output.txt", "r");
	while (!feof(fptr) )
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0'; //�Ŧr�� ���M�|�~��Ū��80�Ӧr
		printf("%s", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}