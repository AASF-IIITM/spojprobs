//This program is to add two numbers by first reversing them and then printing the reverse of the addition



#include <stdio.h>

//Function that takes a number as an argument, and returns an integer which is reverse of the inputted number by digit extracton
long numrev(long int x) 
{
		int rem, rev=0;
		while(x > 0)
		{
			rem = x % 10;
			rev = rev * 10 + rem;
			x /= 10;
		}
		return rev;
}

int main()
{
	int N;
	long int a, b, i;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%ld %ld", &a, &b);
		a = numrev(a);
		b = numrev(b);
		a += b;
		printf("%ld\n", numrev(a)); //Prints the required result
	}

	return 0;
}
