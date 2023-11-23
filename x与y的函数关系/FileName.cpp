#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x;
	printf("«Î ‰»Îxµƒ÷µ:");
	scanf("%d", &x);
	if (x < 0) {
		printf("y=1");
	}
	else if (x == 0) {
		printf("y=0");
	}
	else if (x > 0) { printf("y = -1"); }
	return 0;
}