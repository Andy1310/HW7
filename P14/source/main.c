#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P14//welcome.txt", "r");
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
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}