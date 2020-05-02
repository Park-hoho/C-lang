#include <stdio.h>

int main(void)
{
	int x, i, o;
	printf("구구단을 외우자! 몇단? : ");
	scanf("%d", &x);
	for(i = 1; i <= 9; i++)
	{
	printf("%d\n", x*i);
	}
	return 0;	
} 
