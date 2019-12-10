//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 1010;
//
//struct node {
//	string id;
//	string sign_in;
//	string sign_out;
//}student[maxv];
//
//bool cmp_start(node a, node b) {
//	return a.sign_in < b.sign_in;
//}
//
//bool cmp_end(node a, node b) {
//	return a.sign_out > b.sign_out;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0;i < n;i++) {
//		cin >> student[i].id >> student[i].sign_in >> student[i].sign_out;
//	}
//	sort(student, student + n, cmp_start);
//	cout << student[0].id;
//	printf(" ");
//	sort(student, student + n, cmp_end);
//	cout << student[0].id;
//
//	return 0;
//}