//#include <iostream>
//#include <vector>
//#include <map>
//#include <set>
//
//using namespace std;
//set<int> s;
//int N;
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		int ans = 0;
//		int temp;
//		cin >> temp;
//		while (temp != 0) {
//			ans += temp % 10;
//			temp = temp / 10;
//		}
//		s.insert(ans);
//	}
//	printf("%d\n", s.size());
//	int num = 0;
//	for (set<int>::iterator it = s.begin();it != s.end();it++) {
//		printf("%d", *it);
//		num++;
//		if (num < s.size()) {
//			printf(" ");
//		}
//
//	}
//	return 0;
//}