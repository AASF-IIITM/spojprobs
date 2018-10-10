#include <stdio.h>
#include<math.h>

int main() {
	int a, b, c, m;
	scanf("%d %d %d", &a, &b, &c);
	
	while(1)
	{
		if(a == 0 && b == 0 && c == 0)
			break;
		else
		{
		 if( b == ((a + c) /2.0 ))
		 	printf("AP %d\n", c+(c-b));
		 else if(b==sqrt(a*c))
		 	printf("GP %d\n", c*(c/b));
		 else
			printf("\n Neither AP nor GP");

		 scanf("%d %d %d", &a, &b, &c);	 
		}
	}
	return 0;
}
