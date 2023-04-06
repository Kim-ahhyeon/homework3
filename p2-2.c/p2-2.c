#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
int one[] = {0, 1, 2, 3, 4};   //정수형 배열 one을 선언하고 0, 1, 2, 3, 4로 초기화

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("one = %p\n", one);  //배열의 이름은 주소값이므로 one의 주소값 0061FF0C 출력
printf("&one = %p\n", &one);//배열의 주소값 0061FF0C 출력
printf("&one[0] = %p\n", &one[0]); //one[0]의 주소값 0061FF0C 동일하게 출력
printf("\n"); //줄바꿈 문자
printf("------------------------------------\n");  //------------------------------------ 출력
printf(" print_one(&one[0], 5) \n");  // print_one(&one[0], 5) 출력
printf("------------------------------------\n"); //------------------------------------ 출력
print_one(&one[0], 5);  //print_one 함수 호출, 주소값 4씩 증가
printf("------------------------------------\n"); //------------------------------------ 출력
printf(" print_one(one, 5) \n");  // print_one(one, 5) 출력
printf("------------------------------------\n");  //------------------------------------ 출력
print_one(one, 5); //print_one 함수 호출, 주소값 4씩 증가
return 0;  //0으로 반환
}
void print_one(int *ptr, int rows)    //함수의 매개변수 정수형 포인터 *ptr, rows
{/* print out a one-dimensional array using a pointer */   //포인터를 사용해 일차원 배열 출력
int i;      //정수형 변수 i 선언
printf ("Address \t Contents\n");  //Address Contents 출력
for (i = 0; i < rows; i++)  //i=0으로 초기화, i<rows일때까지 for 문 실행, 한 번 실행할 때마다 i 값 1씩 증가
printf("%p \t %5d\n", ptr + i, *(ptr + i));  //ptr+i, *(ptr+i) 값 출력
printf("\n");  //줄바꿈 문자
}
