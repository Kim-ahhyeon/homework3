#include <stdio.h>
struct student {                   //student 구조체 선언
char lastName[13]; /* 13 bytes */  //크기가 14인 문자형 배열 lastName 선언
int studentId; /* 4 bytes */       //정수형 변수 studentId 선언
short grade; /* 2 bytes */         //short형 변수 grade 선언
};
int main()
{
struct student pst; //구조체 변수 pst 선언

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("size of student = %ld\n", sizeof(struct student));  //sizeof(struct student) 출력, 채워넣기가 되서 24가 출력
printf("size of int = %ld\n", sizeof(int)); //sizeof(int) 출력, 4가 출력됨
printf("size of short = %ld\n", sizeof(short)); //sizeof(short) 출력, 2가 출력됨
return 0; //0으로 반환
}