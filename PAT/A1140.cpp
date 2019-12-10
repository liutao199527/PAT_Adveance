//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//int D, N;
//
//vector<int> v;
//
//int main() {
//	cin >> D >> N;
//	v.push_back(D);
//	v.push_back(1);
//	N = N - 2;
//	while (N--) {
//		if (!v.empty()) {
//			vector<int> temp;
//			int pre = D;
//			int num = 1;
//			for (int i = 1;i < v.size();i++) {
//				if (v[i] == pre) {
//					num++;
//				}
//				else {
//					temp.push_back(pre);
//					temp.push_back(num);
//					pre = v[i];
//					num = 1;
//				}
//			}
//			temp.push_back(pre);
//			temp.push_back(num);
//			v = temp;
//		}
//	}
//	for (int i = 0;i < v.size();i++) {
//		printf("%d", v[i]);
//
//	}
//	return 0;
//}