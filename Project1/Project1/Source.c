#define _USE_MATH_DEFINES
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#include <time.h> 
#include <stdlib.h> 

void main(void)
{//#1
#define n 5
#define m 5
int a[n][m], i, j, p = 1,t,f;
setlocale(LC_ALL, "rus");
srand(time(NULL));
for (i = 0; i < n; i++)
{
	for (j = 0; j < m; j++)
	{
		a[i][j] = rand() % 26;
		printf("%5i", a[i][j]);
	}
	printf("\n");
}
printf("Введите T:");
scanf_s("%i", &t);

for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
		if (a[i][j] < t)
		{	p = p * a[i][j];
			f = 1;
		}
if (f > 0)
{
	printf("Произведение равно:");
	printf("%i \t", p);
}
else
printf("Таких нет");
_getch();
}