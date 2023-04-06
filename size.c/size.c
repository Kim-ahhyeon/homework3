#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;  //정수형 이중포인터 **x 선언

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력, 사용자 운영체제에 따라 다르며 4가 출력됨
printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 크기 출력, 사용자 운영체제에 따라 다르며 4가 출력됨 
printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 크기 출력, 사용자 운영체제에 따라 다르며 4가 출력됨
}
