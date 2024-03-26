#include <stdio.h>
#include <stdlib.h>

int main() { 
    printf("[----- [박조현] [2021053017] -----]\n");

    int list[5]; // int형 배열 list 선언.
    int *plist[5] = {NULL,}; // 포인터 배열 plist 선언 후 NULL로 초기화.

    plist[0] = (int *)malloc(sizeof(int)); // 동적 메모리 할당으로  plist[0]에 int 크기의 메모리를 할당.
    list[0] = 1; // list[0]에 값 1 저장
    list[1] = 100; // list[1]에 값 100 저장
    *plist[0] = 200; // plist[0]이 가리키는 곳에 값 200을 저장

    // list[0]의 정보 출력 코드
    printf("list[0] = %d\n", list[0]); // list[0]의 값인 1 출력
    printf("&list[0] = %p\n", &list[0]); // list[0]의 주소 출력
    printf("list = %p\n", list); // list 배열의 시작 주소 = list[0]의 주소 출력 
    printf("&list = %p\n", &list); // list 배열의 주소 = list[0]의 주소 출력

    printf("----------------------------------------\n\n");

    // list[1]의 정보 출력 코드
    printf("list[1] = %d\n", list[1]); // list[1]의 값인 100 출력
    printf("&list[1] = %p\n", &list[1]); // list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); // *(list+1)이 가리키는 값 = list[1]의 값 출력 
    printf("list+1 = %p\n", list+1); // list+1의 값 = list[1]의 주소 출력

    printf("----------------------------------------\n\n");

    // plist[0]에 대한 정보 출력
    printf("*plist[0] = %d\n", *plist[0]); // plist[0]이 가리키는 값인 200 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); // plist 배열의 주소 = plist[0]의 주소 출력
    printf("plist = %p\n", plist); // plist 배열의 이름은 주소이기 때문에 plist의 시작 주소 = plist[0]의 주소 출력
    printf("plist[0] = %p\n", plist[0]); // plist[0]의 값 출력 
    printf("plist[1] = %p\n", plist[1]); // plist[1]의 값 출력 = NULL
    printf("plist[2] = %p\n", plist[2]); // plist[2]의 값 출력 = NULL
    printf("plist[3] = %p\n", plist[3]); // plist[3]의 값 출력 = NULL
    printf("plist[4] = %p\n", plist[4]); // plist[4]의 값 출력 = NULL

    free(plist[0]); // 동적 할당 메모리 해제

    return 0; 
} 
