#include <stdio.h>
#define MAX_SIZE 100 //MAX_SIZE를 100이라고 정의
float sum1(float list[], int); //반환값이 float형인 함수 sum1을 정의
float sum2(float *list, int); //반환값이 float형인 함수 sum2을 정의
float sum3(int n, float *list); //반환값이 float형인 함수 sum3을 정의
float input[MAX_SIZE], answer; //크기가 MAX_SIZE인 실수형 배열 input, 변수 answer 선언
int i; //정수형 변수 i 선언
void main(void)
{
for(i=0; i < MAX_SIZE; i++) //i=0으로 초기화, i<MAX_SIZE 까지 반복문 실행시키고 i 1씩 증가
input[i] = i;  //imput[i]에 i 대입
/* for checking call by reference */

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf(" sum1(input, MAX_SIZE) \n"); //함수 sum1 호출
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf("input \t= %p\n", input); //input 값을 출력, 주소값 004070A0 출력
answer = sum1(input, MAX_SIZE); //함수 sum1을 호출한 반환 값을 answer에 대입
printf("The sum is: %f\n\n", answer); //answer 출력, 4950.0000000 출력
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf(" sum2(input, MAX_SIZE) \n"); //함수 sum2 호출
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf("input \t= %p\n", input); //input 출력, 배열의 이름은 주소이므로 주소 출력
answer = sum2(input, MAX_SIZE); //함수 sum2를 호출한 반환값 answer에 대입
printf("The sum is: %f\n\n", answer); //answer 출력, 4950.0000000 출력
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf(" sum3(MAX_SIZE, input) \n"); //함수 sum3 호출
printf("--------------------------------------\n"); //-------------------------------------- 출력
printf("input \t= %p\n", input); //input 출력, 주소값 출력
answer = sum3(MAX_SIZE, input); //함수 sum3를 호출한 반환값 answer에 대입
printf("The sum is: %f\n\n", answer); //answer 출력, 4950.0000000 출력
}

float sum1(float list[], int n) { //반환값이 float형인 함수 sum1
printf("list \t= %p\n", list); //list 출력, 
printf("&list \t= %p\n\n", &list); //&list 출력, 
int i; //정수형 변수 i 선언
float tempsum = 0; //실수형 변수 tempsum, 0으로 초기화
for(i = 0; i < n; i++) //i=0으로 초기화, i<n까지 i++ 실행하며 반복문 실행
tempsum += list[i]; //tempsum=tempsum+list[i]
return tempsum; //tempsum 값으로 반환
}

float sum2(float *list, int n) { //반환값이 float형인 함수 sum2
printf("list \t= %p\n", list); //list 출력, 
printf("&list \t= %p\n\n", &list); //&list 출력, 
int i; //정수형 변수 i 선언
float tempsum = 0; //실수형 변수 tempsum, 0으로 초기화
for(i = 0; i < n; i++) //i=0으로 초기화, i<n까지 i++ 실행하며 반복문 실행
tempsum += *(list + i); //tempsum=tempsum+*(list+i)
return tempsum; //tempsum 값으로 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) { //반환값이 float형인 함수 sum3
printf("list \t= %p\n", list);
printf("&list \t= %p\n\n", &list);
int i; //정수형 변수 i 선언
float tempsum = 0; //실수형 변수 tempsum, 0으로 초기화
for(i = 0; i < n; i++) //i=0으로 초기화, i<n까지 i++ 실행하며 반복문 실행
tempsum += *(list + i); //tempsum=tempsum+*(list+i)
return tempsum; //tempsum 값으로 반환
}

