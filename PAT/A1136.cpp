//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct bign {
//	int d[1000];
//	int len;
//	bign() {
//		fill(d, d + 1000, 0);
//		len = 0;
//	}
//};
//
//bign change(string str) {
//	bign a;
//	a.len = str.size();
//	for (int i = 0;i < a.len;i++) {
//		a.d[i] = str[str.size() - i - 1] - '0';
//	}
//	return a;
//}
//
//bign add(bign a) {
//	bign c;
//	int carry = 0;
//	for (int i = 0;i < a.len;i++) {
//		int temp = a.d[i] + a.d[a.len - i - 1] + carry;
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
//bool isPalindrome(bign a) {
//	for (int i = 0;i < a.len / 2;i++) {
//		if (a.d[i] != a.d[a.len - i - 1]) {
//			return false;
//		}
//	}
//
//	return true;
//}
//int main() {
//	string str;
//	cin >> str;
//	bign temp1;
//	temp1 = change(str);
//	int iter = 0;
//	while (!isPalindrome(temp1)) {
//		for (int i = 0;i < temp1.len;i++) {
//			printf("%d", temp1.d[temp1.len - i - 1]);
//		}
//		printf(" + ");
//		for (int i = 0;i < temp1.len;i++) {
//			printf("%d", temp1.d[i]);
//		}
//		printf(" = ");
//		temp1 = add(temp1);
//		for (int i = 0;i < temp1.len;i++) {
//			printf("%d", temp1.d[temp1.len - i - 1]);
//		}
//		printf("\n");
//		iter++;
//		if (iter >= 10) {
//			printf("Not found in 10 iterations.");
//			return 0;
//		}
//	}
//	for (int i = 0;i < temp1.len;i++) {
//		printf("%d", temp1.d[temp1.len - i - 1]);
//	}
//	printf(" is a palindromic number.");
//	return 0;
//}