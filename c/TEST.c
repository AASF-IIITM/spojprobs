#include <stdio.h>

int main(void) {
	int t;
	// your code here
	while(1)
	{
		scanf(" %d ", &t);
		if(t == 42)
			break;
		printf("%d\n", t);
	}
	return 0;
}
