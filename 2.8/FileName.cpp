
#include<stdio.h>
void math(int n, int count)
{
	while (n)
	{
		if (n / 10 == 0)
		{   
			printf("%d\n", n);
			count++;
			printf("%d", count);
			break;
		}
		else
		{
			printf("%d\n", n % 10);
			count++;
			n = n / 10;
			//printf("%d", count);
		}
	}
}
int main()
{
	int count = 0;
	int n = 0;
	scanf_s("%d", &n);
	math(n,count);
	return 0;
}