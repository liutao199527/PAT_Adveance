//#include <iostream>
//#include <string>
//
//using namespace std;
//const int maxv = 1010;
//
//int L, K;//数的位数，寻找一个几位的素数
//string str;
//string tempstr;
//int num[maxv];
//
//long long strTonum(string s) {
//	long long y = 0, product = 1;
//	for (int i = s.size() - 1;i >= 0;i--) {
//		y = y + (s[i] - '0') * product;
//		product = product * 10;
//	}
//	return y;
//}
//
//bool isPrime(long long a) {
//	if (a <= 1) return false;
//	for (int i = 2;i * i < a;i++) {
//		if (a % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	cin >> L >> K;
//	cin >> str;
//	if (L < K) {
//		printf("404");
//		return 0;
//	}
//	for (int i = 0;i < L;i++) {
//		if (i + K >= L) {
//			printf("404");
//			break;
//		}
//		tempstr.clear();
//		tempstr = str.substr(i, K);
//		long long a = strTonum(tempstr);
//		if (isPrime(a)) {
//			printf("%s", tempstr.c_str());
//			break;
//		}
//	}
//
//	return 0;
//}
