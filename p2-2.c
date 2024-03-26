#include <stdio.h>

void print_one(int *ptr, int rows);    // print_one 함수 선언

// main 함수
int main() {
    printf("[----- [박조현] [2021053017] -----]");    
    int one[] = {0, 1, 2, 3, 4}; // int형 배열 one 선언 및 초기화

    // 배열 one의 주소와 첫 번째 요소의 주소 출력
    printf("one = %p\n", one); // 배열 one의 시작 주소 출력
    printf("&one = %p\n", &one); // 배열 one의 주소 출력 = 배열 one의 시작 주소 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소 출력 = 배열 one의 시작 주소 출력
    printf("\n");
    printf("------------------------------------\n");


    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n");
    print_one(&one[0], 5); // print_one 함수 호출
    printf("------------------------------------\n");

    
    printf(" print_one(one, 5) \n"); // print_one 함수 호출
    printf("------------------------------------\n");
    print_one(one, 5); // print_one 함수 호출 : 배열 이름은 주소!

    return 0;
}

void print_one(int *ptr, int rows) {  // print_one 함수 정의
    int i;
    printf("Address \t Contents\n"); 
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 주소와 해당 요소의 내용 출력
    printf("\n");
}
