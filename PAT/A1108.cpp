//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int N;
//vector<string> v;
//int num = 0; //记录有效数字的数目
//double ans = 0.0;
//
//double strToNum(string str) {
//	bool flag = false;
//	if (str[0] == '-') {
//		str = str.substr(1, str.size() - 1);
//		flag = true;
//	}
//	int pos = str.find(".");
//	double y = 0, product = 1,product2 = 0.1;
//	if (pos < 0) {
//		for (int i = str.size()-1;i >= 0;i--) {
//			y = y + (str[i] - '0') * product;
//			product = product * 10;
//		}
//	}
//	else {
//		for (int i = pos - 1;i >= 0;i--) {
//			y = y + (str[i] - '0') * product;
//			product = product * 10;
//		}
//
//		for (int i = pos + 1;i < str.size();i++) {
//			y = y + product2 * (str[i] - '0');
//			product2 = product2 * 0.1;
//		}
//	}
//	if (flag) {
//		return -y;
//	}
//	else {
//		return y;
//	}
//}
//
//bool isLegal(string str) {
//	int dot_num = 0;
//	for (int i = 0;i < str.size();i++) {
//		if (str[i] >= '0' && str[i] <= '9') {
//			continue;
//		}
//		else if (str[i] == '.' && dot_num == 0 && (str.size() - i) <= 3) {
//			dot_num++;
//			continue;
//		}
//		else if ((str[i] == '-' || str[i] == '+') && i == 0) {
//			continue;
//		}
//		else {
//			return false;
//		}
//	}
//	double a = strToNum(str);
//	if (a < -1000 || a > 1000) {
//		return false;
//	}
//	else {
//		ans += a;
//		num++;
//	}
//	return true;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		string str;
//		cin >> str;
//		if (!isLegal(str)) {
//			printf("ERROR: %s is not a legal number\n", str.c_str());
//		}
//	}
//	if (num > 0) {
//		printf("The average of %d numbers is %.2f\n", num, ans / num);
//	}
//	else {
//		printf("The average of 0 numbers is Undefined");
//	}
//	return 0;
//}