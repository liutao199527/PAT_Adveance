//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//struct bign {
//	int d[20];
//	int len;
//	bign() {
//		fill(d, d + 10, 0);
//		len = 0;
//	}
//};
//
//string str;
//
//bign multi(bign num,int n) {
//	bign c;
//	int carry = 0;
//	for (int i = 0;i < num.len;i++) {
//		int temp = num.d[i] * n + carry;
//		c.d[c.len++] = temp % 10;
//		carry = temp / 10;
//	}
//	while (carry != 0) {
//		c.d[c.len++] = carry % 10;
//		carry /= 10;
//	}
//
//	return c;
//}
//
//bool isFunNum(bign a, bign b) {
//	if (a.len == b.len) {
//		sort(a.d, a.d + a.len);
//		sort(b.d, b.d + b.len);
//		for (int i = 0;i < a.len;i++) {
//			if (a.d[i] != b.d[i]) {
//				return false;
//			}
//		}
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//	bign num;
//	cin >> str;
//	num.len = str.size();
//	for (int i = 0;i < str.size();i++) {
//		num.d[i] = str[str.size() - 1 - i] - '0';
//	}
//	bign c;
//	c = multi(num, 2);
//	bool flag = isFunNum(c, num);
//	if (flag) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	for (int i = c.len - 1;i >= 0;i--) {
//		printf("%d", c.d[i]);
//	}
//
//	return 0;
//}