#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int add(int a, int b) {
	int sum;

	sum = a + b;
	return sum;
}

int subtract(int a, int b) {
	int sum;
	int bosu = ~b + 1;

	sum = a + bosu;
	return sum;
}

int multiply(int a, int b) {
	int sum = 0;

	for (int i = 0; i < b; i++) {
		sum = sum + a;
	}
	return sum;
}

int divide(int a, int b) {
	int sum = 0;
	int result = 0;

	for (int i = b; sum < a; i--) {
		sum = sum + b;
		result = result + 1;
	}

	return (result - 1);
}

int remainder(int a, int b) {
	int sum = 0;
	int result = 0;

	for (int i = b; sum < a; i--) {
		sum = sum + b;
		result = result + 1;
	}

	return (a - b * (result - 1));
}



int main(void)
{
	int x;
	int y;
	char op;
	int sum = 0;

	printf("계산할 식을 입력하세요 >> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		printf("%d %c %d = %d", x, op, y, add(x, y));
		printf(" [HEX: %#x, OCT: %#o]", add(x, y), add(x, y)); //바이너리로 변환하는 건 아직 구현을 못했어요...ㅠ 
		break;
	case '-':
		printf("%d %c %d = %d", x, op, y, subtract(x, y));
		printf(" [HEX: %#x, OCT: %#o]", subtract(x, y), subtract(x, y));
		break;
	case '*':
		printf("%d %c %d = %d", x, op, y, multiply(x, y));
		printf(" [HEX: %#x, OCT: %#o]", multiply(x, y), multiply(x, y));
		break;
	case '/':
		printf("%d %c %d = %d", x, op, y, divide(x, y));
		printf(" [HEX: %#x, OCT: %#o]", divide(x, y), divide(x, y));
		break;

	case '%':
		printf("%d %c %d = %d", x, op, y, remainder(x, y));
		printf(" [HEX: %#x, OCT: %#o]", remainder(x, y), remainder(x, y));
		break;


		return 0;
	}
}


