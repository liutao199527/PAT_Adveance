//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int digit = 20;
//int a[digit], b[digit]; //用来存储输入的数
//
//int strTonum(int a[],int n,int radix) {
//	int y = 0, product = 1;
//	for (int i = n-1;i>=0;i--) {
//		y += a[i] * product;
//		product = product * radix;
//	}
//
//	return y;
//}
//
//int main() {
//	int tag, radix;
//	string str1, str2;
//	cin >> str1 >> str2 >> tag >> radix;
//	for (int i = 0;i < str1.size();i++) {
//		if (str1[i] >= '0' && str1[i] <= '9') {
//			a[i] = str1[i] - '0';
//		}
//		else {
//			a[i] = str1[i] - 'a' + 10;
//		}
//	}
//	for (int i = 0;i < str2.size();i++) {
//		if (str2[i] >= '0' && str2[i] <= '9') {
//			b[i] = str2[i] - '0';
//		}
//		else {
//			b[i] = str2[i] - 'a' + 10;
//		}
//	}
//
//	int a_num = strTonum(a, str1.size(), radix);
//	int b_num = strTonum(b, str2.size(), radix);
//
//	if (a_num > b_num && tag == 1) {
//		while (a_num != b_num) {
//			radix++;
//			b_num = strTonum(b, str2.size(), radix);
//		}
//		printf("%d", radix);
//	}
//	else if (a_num > b_num&& tag == 2) {
//		while (a_num != b_num) {
//			radix--;
//			if (radix < 2) {
//				printf("Impossible");
//				break;
//			}
//			a_num = strTonum(a, str1.size(), radix);
//		}
//		if (a_num == b_num) {
//			printf("%d", radix);
//		}
//	}
//	else if (a_num < b_num && tag == 1) {
//		while (a_num != b_num) {
//			radix--;
//			if (radix < 2) {
//				printf("Impossible");
//				break;
//			}
//			b_num = strTonum(b, str2.size(), radix);
//		}
//		if (a_num == b_num) {
//			printf("%d", radix);
//		}
//	}
//	else if (a_num < b_num && tag == 2) {
//		while (a_num != b_num) {
//			radix++;
//			a_num = strTonum(a, str1.size(), radix);
//		}
//		printf("%d", radix);
//	}
//
//	return 0;
//}
