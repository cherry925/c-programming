#include <stdio.h>
int main(void)
{
	int i, j, num = 5;
	for (i = num; i > 0; i--){
		for (j = 0; j <= num; j++){
			if (i > j)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
		num++;
	}
}
