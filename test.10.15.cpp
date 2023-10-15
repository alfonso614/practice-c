#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//test 5-7
#define num 100

int main(void) {

	int put;
	printf("数据个数：");
	scanf("%d", &put);

	int X[num];

	int i;
	for (i = 1; i <= put; i++) {
		printf("%d号：", i);
		scanf("%d", &X[i]);


	}
	int j;
	printf("{");
	for (j = 1; j <= put; j++) {
		printf("%d ,", X[j]);

	}
	printf("}");
		

	return 0;
}