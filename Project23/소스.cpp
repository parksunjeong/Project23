#include <stdio.h>

int main()
{
	char input1;
	float input2, C, F;
	printf("���� �ϳ���(F,f,C,c)�� �ϳ��� �Ǽ��� �Է��ϼ���: ");
	scanf_s("%c %f", &input1, &input2);

	if (input1 == 'F' || input1 == 'f')
	{
		C = (5.0 / 9.0) * (input2 - 32);
		printf("�Է��Ͻ�ȭ���� %.1f���̸� �����δ� %.1f���Դϴ�.\n", input2, C);
	}
	else if (input1 == 'C' || input1 == 'c')
	{
		F = (9.0 / 5.0) * input2 + 32;
		printf("�Է��Ͻż����� %.1f���̸� ȭ���δ� %.1f���Դϴ�.\n", input2, F);
	}
	else
		printf("�߸��Է��ϼ̽��ϴ�.\n");

	return 0;
}