#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 & num2;
	printf("AND 연산의 결과: %d \n", num3);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 | num2;
	printf("OR 연산의 결과: %d \n", num3);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 ^ num2;
	printf("XOR 연산의 결과: %d \n", num3);
	return 0;
}
