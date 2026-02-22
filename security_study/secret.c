#include <stdio.h>

int main() {
    char password[20]; // 비밀번호를 담을 공간
    
    printf("비밀번호를 입력하세요: ");
    scanf("%s", password);

    printf("\n--- 보안 분석 결과 ---\n");
    printf("입력하신 비밀번호: %s\n", password);
    
    // & 기호를 붙이면 실제 메모리 주소(번지수)를 보여줍니다.
    printf("비밀번호가 저장된 메모리 주소: %p\n", (void*)password);
    printf("----------------------\n");
    printf("이 주소는 16GB 램 속의 아주 작은 한 칸입니다.\n");

    return 0;
}