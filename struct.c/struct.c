#include <stdio.h>
struct student1 { //struct 구조체 선언
       char lastName; //chat형 변수 lastName 선언
       int studentId; //int형 변수 studentId 선언
       char grade; //char형 변수 grade 선언
};
typedef struct { //type을 정의한 typedef 구조체 선언
char lastName; //chat형 변수 lastName 선언
int studentId; //int형 변수 studentId 선언
char grade; //char형 변수 grade 선언
} student2; //구조체 이름 정의
int main() {
struct student1 st1 = {'A', 100, 'A'}; //구조체 변수 st1에 'A', 100, 'A' 대입

printf("----- [Kim ah hyeon]  [2022041010] -----\n");
printf("st1.lastName = %c\n", st1.lastName); //st1.lastName 출력
printf("st1.studentId = %d\n", st1.studentId); //t1.studentId 출력
printf("st1.grade = %c\n", st1.grade); //st1.grade 출력
student2 st2 = {'B', 200, 'B'};  //구조체 변수 st2에 'B', 200, 'B' 대입
printf("\nst2.lastName = %c\n", st2.lastName); //st2.lastName 출력
printf("st2.studentId = %d\n", st2.studentId); // st2.studentId 출력
printf("st2.grade = %c\n", st2.grade); //st2.grade 출력
student2 st3; //구조체 변수 st3 선언
st3 = st2; // 구조를 치환
printf("\nst3.lastName = %c\n", st3.lastName); //st3.lastName 출력
printf("st3.studentId = %d\n", st3.studentId); //st3.studentId 출력
printf("st3.grade = %c\n", st3.grade); //st3.grade 출력

/* equality test */
if((st3.lastName == st2.lastName) && (st3.studentId == st2.studentId) && (st3.grade == st2.grade)) /* not working */
     printf("equal\n"); //equal 출력
else
     printf("not equal\n"); //not equal 출력
return 0; //0으로 반환
}
