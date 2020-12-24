#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://Users//江懿宸//Dropbox//我的電腦 (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_江懿宸//P14//welcome.txt", "r");
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
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}