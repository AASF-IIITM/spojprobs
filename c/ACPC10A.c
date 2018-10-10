#include <stdio.h>

int main() {
	int a, b, c, m,b2;
	scanf("%d %d %d", &a, &b, &c);
	
	while(1)
	{
		b2=b*b;
		if(a == 0 && b == 0 && c == 0)
			break;
		else
		{
		 if( b == ((a + c) /2.0 ))
		 	printf("AP %d\n", c+(c-b));
		 else if(b2==a*c)
		 	printf("GP %d\n", c*(c/b));

		 scanf("%d %d %d", &a, &b, &c);	 
		}
	}
	return 0;
}
