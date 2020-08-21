#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (int i = 1;i <= x;i++) {
		for (int y = 1;y <= x;y++) {
			printf(" * ");
		}
		printf("\n");
	}
	return 0 ;
}