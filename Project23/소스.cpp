#include <stdio.h>

int main()
{
	char input1;
	float input2, C, F;
	printf("문자 하나와(F,f,C,c)중 하나와 실수를 입력하세요: ");
	scanf_s("%c %f", &input1, &input2);

	if (input1 == 'F' || input1 == 'f')
	{
		C = (5.0 / 9.0) * (input2 - 32);
		printf("입력하신화씨는 %.1f도이며 섭씨로는 %.1f도입니다.\n", input2, C);
	}
	else if (input1 == 'C' || input1 == 'c')
	{
		F = (9.0 / 5.0) * input2 + 32;
		printf("입력하신섭씨는 %.1f도이며 화씨로는 %.1f도입니다.\n", input2, F);
	}
	else
		printf("잘못입력하셨습니다.\n");

	return 0;
}