#include <stdio.h>

int main()
{
	int i;

	for(i = 1; i <= 100;i++)
	{
		printf("%3d", i);
		
		if(i % 3 == 0)
		{
			printf("Fizz");
		}

		if(i % 5 == 0)
		{
			printf("Buzz");
		}

	}	

}