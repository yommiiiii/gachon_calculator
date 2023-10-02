#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bosu (int n) {
    return (~n) + 1;
}

int main() {
    int num1, num2;
    char op;

    printf("계산할 식을 입력하세요 (예: 13 - 5): ");
    if (scanf("%d %c %d", &num1, &op, &num2) !=3 ){
        printf("올바른 식을 입력하세요.\n");
            return 1;
    }
    int result;
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 + bosu(num2);
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("0으로 나눌 수 없습니다.\n");
            return 1;
        }
        break;
    default:
        printf("올바른 연산자를 입력하세요.\n");
        return 1;
    }
    // 2진수 변환은 못했습니다
    printf("%d %c %d = %d [HEX: %X, OCT: %o, BIN: ]입니다.\n", num1, op, num2, result, result, result, result );

    return 0;
}
    