/* 두 수를 입력받아 덧셈 후 출력 */
#include <stdio.h> /* 선행처리기(파일포함)*/
#pragma warning(disable:4996) // 권장하지 않는 함수 사용에 대한 경고 메시지 무시방법

void main() {
	long long int x, y, sum; /*변수 선언문*/
	
		
	/* 변수 x, y를 입력받음 */
	printf("Enter a number over 0  : ");
	scanf("%lld", &x);

	printf("Enter a number over 0  : ");
	scanf("%lld", &y);


	// 두 수를 더해 변수 sum에 저장
	sum = x + y;


	// 결과를 화면에 출력
	printf("sum = %llu", sum);

}
