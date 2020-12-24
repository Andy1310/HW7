#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr = fopen("C://Users//江懿宸//Dropbox//我的電腦 (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_江懿宸//P17//output.txt", "r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}