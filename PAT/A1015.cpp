//#include <iostream>
//
//using namespace std;
//const int maxv = 100010;
//
//int N, radix;//数，进制
//
//int numToRadixRev(int N,int radix) {
//	int a[maxv], num = 0;
//	do {
//		a[num++] = N % radix;
//		N = N / radix;
//	} while (N != 0);
//	int y = 0, product = 1;
//	for (int i = num - 1;i >= 0;i--) {
//		y = y + a[i] * product;
//		product = product * radix;
//	}
//
//	return y;
//}
//
//bool isPrime(int num) {
//	if (num <= 1) return false; //特判
//	for (int i = 2;i * i <= num;i++) {
//		if (num % i == 0) return false;
//	}
//
//	return true;
//}
//
//int main() {
//	while (true) {
//		cin >> N >> radix;
//		if (N < 0) {
//			break;
//		}
//		int num = numToRadixRev(N, radix);
//		if (isPrime(N) && isPrime(num)){
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//
//	return 0;
//}