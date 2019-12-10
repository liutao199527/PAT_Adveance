//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 110;
//int N;//分数的数目
//
//struct Fraction {
//	long long up; //分子
//	long long down; // 分母
//}fraction[maxv];
//
//long long gcd(long a, long b) {
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//
//}
//
//Fraction reduction(Fraction fraction) {
//	if (fraction.down < 0) {
//		fraction.down = -fraction.down;
//		fraction.up = -fraction.up;
//	}
//	else if (fraction.up == 0) {
//		fraction.down = 1;
//	}
//	else {
//		long long d = gcd(abs(fraction.down), abs(fraction.up));
//		fraction.down /= d;
//		fraction.up /= d;
//	}
//
//	return fraction;
//}
//
//Fraction FractionSum(Fraction a, Fraction b) {
//	Fraction sum;
//	sum.up = a.down * b.up + a.up * b.down;
//	sum.down = a.down * b.down;
//	return sum;
//}
//
//void showResult(Fraction result) {
//	result = reduction(result);
//	if (result.down == 1) printf("%lld", result.up);
//	else if (abs(result.up) > result.down) {
//		printf("%lld %lld/%lld", result.up / result.down, abs(result.up) % result.down, result.down);
//	}
//	else {
//		printf("%lld/%lld", result.up, result.down);
//	}
//}
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		scanf_s("%lld/%lld", &fraction[i].up, &fraction[i].down);
//		fraction[i] = reduction(fraction[i]);
//	}
//	Fraction result;
//	result.down = 1;
//	result.up = 0;
//	for (int i = 0;i < N;i++) {
//		result = FractionSum(result, fraction[i]);
//	}
//	showResult(result);
//
//	return 0;
//}
//
