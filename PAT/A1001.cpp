//#include<cstdio>
//
//int main() {
//	int a, b;
//	int sum;
//	int c[10];
//	scanf_s("%d %d", &a, &b);
//	sum = a + b;
//	int i = 0;
//	if (sum == 0) {
//		printf("%d", sum);
//	}
//	int flag = 0;
//	if (sum < 0) {
//		sum = -sum;
//		printf("-");
//	}
//	while (sum != 0) {
//		c[i] = sum % 10;
//		sum = sum / 10;
//		i++;
//	}
//
//	for (int j = i - 1;j >= 0;j--) {
//		printf("%d", c[j]);
//		if (j % 3 == 0 && j>0) {
//			printf(",");
//		}
//	}
//
//	return 0;
//
//}