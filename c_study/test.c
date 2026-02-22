#include <stdio.h>

int main() {
    char name[20]; // 이름을 저장할 20칸짜리 공간

    printf("당신의 이름은 무엇입니까? ");
    scanf("%s", name); // 키보드로 이름을 입력받음

    printf("안녕, %s! 드디어 C언어 첫 실습 성공이네.\n", name);

    return 0;
}