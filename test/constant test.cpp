#include <stdio.h>

int main()
{
    //���

    float num1 = 3.14E-3F;               // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
                                     // float�� ���� �ڿ� f�� ����

    double num2 = 3867.215820;       // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
                                     // double�� ���� �ڿ� �ƹ��͵� ������ ����

    long double num3 = 3.14e-3l;     // �����е� �ε��Ҽ��� ������ �����ϰ� ���� �Ҵ�
                                     // long double�� ���� �ڿ� l�� ����

    //����

    int a, b;                        // ������ ���� a,b �� ����

    a = 100;
    b = 200;
    printf("\n\na = %d, b = %d \n", a, b);


    // float�� double�� %f�� ���, long double�� %Lf�� ���
    printf("%f %f %Lf\n", num1, num2, num3);    // ����� ����

    // A�� �ƽ�Ű �� ���� �Ǵ� ���ڷ� ǥ��, 100�� �ƽ�Ű���� ���ڷ� ǥ��
     char ch;
     int in;
     ch = in = 'A';
     printf("\n\nch = %d\n", ch);
     printf("in = %d\n", in);
     ch = in = 100;
     printf("\nch = %c\n", ch);
     printf("in = %c\n", in);



    return 0;
}