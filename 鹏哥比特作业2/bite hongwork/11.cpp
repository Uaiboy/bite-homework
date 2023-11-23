#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b,max;
	printf("请输入两个整数:");
	scanf("%d %d", &a, &b);
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	printf("最大值是%d", max);
	return 0;
}