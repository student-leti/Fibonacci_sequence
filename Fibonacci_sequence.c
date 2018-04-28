#include<stdio.h>

int main()
{
	int limit,
		index = 0;
	unsigned long long int cash = 0,
							number0 = 0,
							number1 = 1;
		
	puts("Hi! I'll print Fibo sequence till the number you'll type in");
	puts("*The sequence starts from zero element and it is 0, the first is 1");
	puts("Insert a number:");
	scanf("%d", &limit);
	
	
	if(limit < 0) limit*=(-1);
	
	if(limit == 0)
	{
		printf("The sequence starts from zero element and it is 0");
	}
	else if (limit == 1)
	{
		printf("The first element of the sequence is 1");
	}
	else
	{
		while(index < limit - 1)
		{
			cash =  number0 + number1;
			number0 = number1;
			number1 = cash;
			index++;
		}
			puts("\n");
			
			printf("The element #%d in Fibo sequence is: %llu", limit, cash);
	}
	
	return 0;
}

