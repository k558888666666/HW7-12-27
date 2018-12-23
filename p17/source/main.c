#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX];
	int bytes,err;
	err = fopen_s(&fptr, "C://Users/FTE/Desktop/107360228_陳曾豪/output.txt", "r");
	while (!feof(fptr) )
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0'; //空字符 不然會繼續讀完80個字
		printf("%s", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}