#include <stdio.h>

int main()
{
    float num1 = 3.14E-3F;               // 단정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // float는 숫자 뒤에 f를 붙임

    double num2 = 3867.215820;       // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // double은 숫자 뒤에 아무것도 붙이지 않음

    long double num3 = 3.14e-3l;    // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3);    // 결과값 나열

    return 0;
}