#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE *in,*out;
	int cnt;
	char str[100];
	in = fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P18//welcome.txt","r");
	out= fopen("C://Users//���t�f//Dropbox//�ڪ��q�� (LAPTOP-376PL30K)//Desktop//Program//Visual C//HW7//109360245_���t�f//P18//output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}