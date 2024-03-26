#include <stdio.h>
#define MAX_SIZE 100

// 함수 sum1, sum2 , sum3 선언
float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer;       // 전역변수 생성
int i;

void main(void) {
    printf("[----- [박조현] [2021053017] -----]\n");
    for(i = 0; i < MAX_SIZE; i++)   // 배열의 값을 각각 input[i] = i로 초기화
        input[i] = i;

    //sum1 관련 출력    
    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");                     
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 시작 주소 출력
    answer = sum1(input, MAX_SIZE); // sum1 함수 호출
    printf("The sum is: %f\n\n", answer); // sum1의 결과 출력

    //sum2 관련 출력   
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");                   
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input의 시작 주소 출력
    answer = sum2(input, MAX_SIZE); // sum2 함수 호출
    printf("The sum is: %f\n\n", answer); // sum2의 결과 출력

    //sum3 관련 출력   
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input); // input 배열의 시작 주소 출력
    answer = sum3(MAX_SIZE, input); // sum3 함수 호출
    printf("The sum is: %f\n\n", answer); // sum3의 결과 출력
}

// sum1 : 배열을 받아서 합을 계산하는 함수
float sum1(float list[], int n) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소 = 매개변수인 input의 시작 주소 출력  
    printf("&list \t= %p\n", &list); // sum1 함수에 전달된 포인터 변수의 주소 출력 : list 배열의 시작 주소와 다름.
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)          //합 계산
        tempsum += list[i];
    return tempsum;
}

// sum2 : 포인터를 받아서 합을 계산하는 함수
float sum2(float *list, int n) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소 = 매개변수인 input의 시작 주소 출력
    printf("&list \t= %p\n", &list); // sum2 함수에 전달된 포인터 변수의 주소 출력 : list 배열의 시작 주소와 다름.
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)        //합 계산
        tempsum += *(list + i);  
    return tempsum;
}

// sum3 함수 정의: 배열 크기와 포인터를 받아서 합을 계산하는 함수
float sum3(int n, float *list) {
    printf("list \t= %p\n", list); // list 배열의 시작 주소 = 매개변수인 input의 시작 주소 출력
    printf("&list \t= %p\n", &list); // sum3 함수에 전달된 포인터 변수의 주소 출력 : list 배열의 시작 주소와 다름.
    float tempsum = 0;
    for(i = 0; i < n; i++)         //합 계산
        tempsum += *(list + i);
    return tempsum;                //tempsum을 리턴
}
