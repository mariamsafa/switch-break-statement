#include<stdio.h>
int main()
{
	int mark,x;
	printf_s("Enter the mark: ");
	scanf_s("%d", &mark);
	x = mark / 10;
	switch (x)
	{
	case 10:
	case 9:
	case 8:
		printf_s("\nExcellent\n");
		break;
	case 7:
	case 6:
		printf_s("\nvery good\n");
		break;
	case 5:
	case 4:
		printf_s("\nGood\n");
		break;
	case 3:
	case 2:
		printf_s("\nBad\n");
		break;
	default: printf_s("Enter the correct mark:");
	}
	return 0;
}