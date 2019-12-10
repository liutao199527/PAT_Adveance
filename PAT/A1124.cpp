//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//string str;
//map<string, bool> m;
//
//int M, N, S;
//int now_winner;
//int main() {
//	cin >> M >> N >> S;
//	if (S > M) {
//		printf("Keep going...\n");
//	}
//	now_winner = S;
//	for (int i = 1;i <= M;i++) {
//		cin >> str;
//		if (i == now_winner && now_winner <= M) {
//			if (m.find(str) == m.end()) {
//				m[str] = true;
//				printf("%s\n", str.c_str());
//				now_winner += N;
//			}
//			else {
//				now_winner += 1;
//			}
//		}
//	}
//
//	return 0;
//}