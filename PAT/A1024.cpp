//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct bign {
//	int d[20];
//	int len;
//	bign() {
//		fill(d, d + 20, 0);
//		len = 0;
//	}
//};
//
//bign add(bign a) {
//	bign c;
//	int carry =0;
//	for (int i = 0;i < a.len;i++) {
//		int temp = a.d[i] + a.d[a.len - 1 - i] + carry;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	if (carry != 0) {
//		c.d[c.len++] = carry;
//	}
//
//	return c;
//}
//
//bool isPalindromic(bign a) {
//	for (int i = 0;i < a.len / 2;i++) {
//		if (a.d[i] != a.d[a.len - i - 1]) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int K;
//int main() {
//	string str;
//	cin >> str >> K;
//	bign a;
//	a.len = str.size();
//	for (int i = 0;i < str.size();i++) {
//		a.d[i] = str[str.size() - 1 - i] -'0';
//	}
//	int iter = 0;
//	while (iter < K) {
//		if (isPalindromic(a)) {
//			break;
//		}
//		a = add(a);
//		iter++;
//	}
//
//	for (int i = 0;i < a.len;i++) {
//		printf("%d", a.d[a.len - 1 - i]);
//	}
//	printf("\n");
//	printf("%d", iter);
//
//	return 0;
//}
