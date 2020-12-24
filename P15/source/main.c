#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	
	fptr1 = fopen("C://Users//江懿宸//Dropbox//我的電腦 (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_江懿宸//P15//welcome.txt", "r");
	fptr2 = fopen("C://Users//江懿宸//Dropbox//我的電腦 (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_江懿宸//P15//output.txt", "w");
	if ((fptr1 != NULL)&&(fptr2!=NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("\n檔案拷貝完成\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}