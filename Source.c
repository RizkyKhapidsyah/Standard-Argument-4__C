#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d", &i);
	evaluate(i);

	_getch();
	return(0);
}

int evaluate(int x)
{
	printf("%i", x);
	return 0;
}