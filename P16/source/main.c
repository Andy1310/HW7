#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main()
{
	FILE *fptr;
	char str[MAX],ch;
	int i = 0;
	fptr = fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P16//output.txt", "a");
	printf("�п�J�r��A��ENTER�䵲����J:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}