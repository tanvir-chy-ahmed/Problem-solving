#include <stdio.h>


/*
Problem 3: Even or Odd

Description: Given a number n, print Even if it is even, otherwise Odd.

Input: One integer n.

Output: "Even" or "Odd".
*/


int logic(int x)
{
	if(x%2 == 0)
	{
		printf("Even\n");	
	}else
	{
		printf("Odd\n");
	}
}
int main()
{
	int x;
	while (1)
	{
		printf("Enter an Integer Number:) ");
		scanf("%d",&x);
		logic(x);
	}	
	
	getchar();
	getchar();
	return 0;
}
