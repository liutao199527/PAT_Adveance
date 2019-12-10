//#include <iostream>
//#include <string>
//#include <set>
//#include <queue>
//
//using namespace std;
//
//string str;
//int N;
//set<char> st;
//queue<char> q;
//bool hashTable[256];
//
//void Findstuck() {
//	int num = 1;
//	char pre = str[0];
//	for (int i = 1;i < str.size();i++) {
//		if (str[i] == pre) {
//			num++;
//			if (num == N) {
//				st.insert(str[i]);
//				num = 0;
//				pre = '+';
//			}
//		}
//		else {
//			hashTable[pre] = false;
//			num = 1;
//			pre = str[i];
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	cin >> str;
//	fill(hashTable, hashTable + 256, true);
//	Findstuck();
//	for (set<char>::iterator it = st.begin();it != st.end();it++) {
//		if (hashTable[*it] == true) {
//			q.push(*it);
//		}
//	}
//
//	while (!q.empty()) {
//		printf("%c", q.front());
//		q.pop();
//	}
//	printf("\n");
//	for (int i = 0;i < str.size();) {
//		if (hashTable[str[i]] == false) {
//			printf("%c", str[i]);
//			i++;
//		}
//		else {
//			printf("%c", str[i]);
//			i = i + N;
//		}
//	}
//	return 0;
//}