#include <stdio.h>
void main() {
	int num = 0;
	int i = 0;

	printf("Enter the 32 bit number : ");
	scanf("%d", &num);

	for (i = 31; i>=0; i--) {
		if (num & (1 << i)) {
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
}
