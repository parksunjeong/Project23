#include <stdio.h>

int main(void)
{
	float a, b;
	int c;
	printf("두 실수 입력: ");
	scanf_s("%f%f", &a, &b);
	printf("연산종류 번호선택 1<+>, 2<->, 3<*>, 4</>: ");
	scanf_s("%d", &c);
	if (c == 1)
	{
		printf("%.2f + %.2f = %.2f", a, b, a + b);
	}
	else if (c == 2)
	{
		printf("%.2f - %.2f = %.2f", a, b, a - b);
	}
	else if (c == 3)
	{
		printf("%.2f * %.2f = %.2f", a, b, a * b);
	}
	else if (c == 4)
	{
		printf("%.2f / %.2f = %.2f", a, b, a / b);
	}
	return 0;
}
