#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];  //크기가 5인 배열 선언
int *plist[5]; // //크기가 5인 배열 plist
list[0] = 10; //list의 0번째 인덱스 값에 10 대입
list[1] = 11; //list의 1번째 인덱스 값에 11 대입
plist[0] = (int*)malloc(sizeof(int)); //plist 0번째 인덱스 값에 동적할당으로 값 부여

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("list[0] \t= %d\n", list[0]); //list[0] 출력, 10이 출력됨
printf("list \t\t= %p\n", list); //list 출력, 배열의 이름은 주소이므로 0061FF0C가 출력됨
printf("&list[0] \t= %p\n", &list[0]); //&list[0] 출력, 동일하게 0061FF0C 출력됨
printf("list + 0 \t= %p\n", list+0); //list+0 출력, list의 값과 동일하게 0061FF0C 출력됨
printf("list + 1 \t= %p\n", list+1); //list+1 출력, int 크기는 4이므로 4만큼 증가한 주소값 출력
printf("list + 2 \t= %p\n", list+2); //list+2 출력, 8만큼 증가한 주소값 출력
printf("list + 3 \t= %p\n", list+3); //list+3 출력, 12만큼 증가한 주소값 출력
printf("list + 4 \t= %p\n", list+4); //list+4 출력, 16만큼 증가한 주소값 출력
printf("&list[4] \t= %p\n", &list[4]); //&list[4] 출력, list+4의 값과 동일하므로 0061FF1C 출력
free(plist[0]); //동적 할당한 메모리 해제
}