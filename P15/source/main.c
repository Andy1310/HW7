#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	
	fptr1 = fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P15//welcome.txt", "r");
	fptr2 = fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P15//output.txt", "w");
	if ((fptr1 != NULL)&&(fptr2!=NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("\n�ɮ׫�������\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}