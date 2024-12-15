#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // 난수 생성을 위한 시드 설정
    int target = rand() % 100 + 1; // 1~100 사이의 랜덤 숫자
    int guess;
    int attempts = 0;

    printf("==== 숫자 맞추기 게임 ====\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요!\n");

    while (1) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > target) {
            printf("너무 높아요!\n");
        } else if (guess < target) {
            printf("너무 낮아요!\n");
        } else {
            printf("정답입니다! 시도 횟수: %d회\n", attempts);
            break;
        }
    }

    printf("게임 종료!\n");
    return 0;
}
