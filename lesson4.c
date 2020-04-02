// Урок 4
// Худяков Кирилл
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Решить задачу о нахождении длины максимальной последовательности с помощью матрицы.
#define SIZE 30
int i, j, m, n, matrix[SIZE][SIZE];
char x[SIZE], y[SIZE], b[SIZE][SIZE];

void print(int i, int j) {
	if (i == 0 || j == 0)
		return;
	if (b[i][j] == 'c')
	{
		print(i - 1, j - 1);
		printf("%c", x[i - 1]);
	}
	else if (b[i][j] == 'u')
		print(i - 1, j);
	else
		print(i, j - 1);
}

void lcs() {
	m = strlen(x);
	n = strlen(y);
	for (i = 0; i <= m; i++)
		matrix[i][0] = 0;
	for (i = 0; i <= n; i++)
		matrix[0][i] = 0;

	//c, u и l обозначают поперечное, восходящее и нисходящее направления соответственно(cross upper lower)
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			if (x[i - 1] == y[j - 1])
			{
				matrix[i][j] = matrix[i - 1][j - 1] + 1;
				b[i][j] = 'c';
			}
			else if (matrix[i - 1][j] >= matrix[i][j - 1])
			{
				matrix[i][j] = matrix[i - 1][j];
				b[i][j] = 'u';
			}
			else
			{
				matrix[i][j] = matrix[i][j - 1];
				b[i][j] = 'l';
			}
		}
}

int main() {
	printf("Enter 1st sequence:");
	scanf("%s", x);
	printf("Enter 2nd sequence:");
	scanf("%s", y);
	printf("\nThe Longest Common Subsequence is ");
	lcs();
	print(m, n);
	
	return 0;
}
