#include <stdio.h>
int add(int x, int y);
int main()
{
	printf("�Լ���ȣ�� \n");
	int a, b, sum;
	a = 401, b = 600;
	sum = add(a, b);
	printf("%d+%d=%d", a, b, sum);
}
int add(int x, int y) {
	int tot;
	tot = x + y;
	return tot;
}