/* �� ���� �Է¹޾� ���� �� ��� */
#include <stdio.h> /* ����ó����(��������)*/
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޽��� ���ù��

void main() {
	long long int x, y, sum; /*���� ����*/
	
		
	/* ���� x, y�� �Է¹��� */
	printf("Enter a number over 0  : ");
	scanf("%lld", &x);

	printf("Enter a number over 0  : ");
	scanf("%lld", &y);


	// �� ���� ���� ���� sum�� ����
	sum = x + y;


	// ����� ȭ�鿡 ���
	printf("sum = %llu", sum);

}
