/* �� ���α׷��� �� ���� Ű����� �Է¹޾� ���� ����� ����ϴ� ���α׷��̴�. */

/* ���Ժ� */

#include <stdio.h>            // printf()�� scanf()�� ����ϱ� ���� ��� ���� ����
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int a, b, c;                  // ������ �����ϴ� ���� ����
int product(int x, int y);    // ����� �Լ� ����



/* main() �Լ� */

void main() {
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);                                           // ù ��° ���� �Է�
	
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);                                           // �� ��° ���� �Է�

	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c);
}                                                              // �Լ� ȣ�⿡ ���� �� ���� ���ϰ� ����� ���


int product(int x, int y) {
	return (x * y);
}                                                              // �� ���� ���� ����Ͽ� �����ִ� ����� �Լ�