#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *in, *out;
	char str[100];
	int err, err2,cnt;
	err = fopen_s(&in, "C://Users/FTE/Desktop/107360228_������/welcome.txt", "r");
	err2 = fopen_s(&out, "C://Users/FTE/Desktop/107360228_������/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in,"%s",str,20);
		if (cnt>0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}