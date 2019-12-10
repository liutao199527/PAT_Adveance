//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int main() {
//	int exp;
//	double cof;
//	double cofs[1001] = { 0.0 };
//	int n;
//	int max_exp = 0;
//	for (int i = 0;i < 2;i++) {
//		scanf_s("%d", &n);
//		for (int j = 0;j < n;j++) {
//			cin >> exp >> cof;
//			if (exp > max_exp) {
//				max_exp = exp;
//			}
//			cofs[exp] += cof;
//		}
//	}
//	int count = 0;
//	for (int i = 0;i <= max_exp;i++) {
//		if (cofs[i] != 0) {
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	for (int i = max_exp;i >= 0;i--) {
//		if (cofs[i] != 0) printf(" %d %.1f", i, cofs[i]);
//	}
//
//	return 0;
//}