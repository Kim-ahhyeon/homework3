#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];  //크기가 5인 정수형 배열 list[5] 선언
int *plist[5] = {NULL,}; //크기 5인 정수형 포인터 배열 NULL로 초기화
plist[0] = (int *)malloc(sizeof(int));
list[0] = 1; //list[0]에 1 대입
list[1] = 100; //list[1]에 100 대입
*plist[0] = 200; //*plist[0]에 200 대입

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("list[0] = %d\n", list[0]); //list[0]인 1 출력
printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력, 0061FF0C 출력
printf("list = %p\n", list); //배열의 이름은 주소이므로 0061FF0C 출력
printf("&list = %p\n", &list); //배열의 주소 0061FF0C 출력
printf("----------------------------------------\n\n"); //---------------------------------------- 출력
printf("list[1] = %d\n", list[1]); //list[1]인 100 출력
printf("&list[1] = %p\n", &list[1]); //list[1]의 주소값 0061FF10 출력
printf("*(list+1) = %d\n", *(list + 1)); //*(list+1)은 list[1]과 같으므로 100 출력
printf("list+1 = %p\n", list+1); //list+1은 &list[1]과 같으므로 0061FF10 출력

printf("----------------------------------------\n\n"); //---------------------------------------- 출력
printf("*plist[0] = %d\n", *plist[0]); //*plist[0]인 200 출력
printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소값 0061FEF8 출력
printf("&plist = %p\n", &plist); //배열의 주소값 0061FEF8 출력
printf("plist = %p\n", plist); //배열의 이름은 주소이므로 0061FEF8 출력
printf("plist[0] = %p\n", plist[0]); //plist[0] 출력, 주소값 0061FEF8 출력
printf("plist[1] = %p\n", plist[1]); //plist[1] 출력, NULL로 초기화하였으므로 출력되지 않음
printf("plist[2] = %p\n", plist[2]); //plist[1] 출력, NULL로 초기화하였으므로 출력되지 않음
printf("plist[3] = %p\n", plist[3]); //plist[1] 출력, NULL로 초기화하였으므로 출력되지 않음
printf("plist[4] = %p\n", plist[4]); //plist[1] 출력, NULL로 초기화하였으므로 출력되지 않음
free(plist[0]); //동적 할당 메모리 해제
}