//#include <iostream>
//#include <algorithm>
//#include <set>
//#include <vector>
//
//using namespace std;
//const int maxv = 100000;
//int hashTable[maxv];
//set<int> st;
//vector<int> v[maxv];
//
//
//int N, M;
//int main() {
//	cin >> N;
//	fill(hashTable, hashTable + maxv, 0);
//	for (int i = 1;i <=N;i++) {
//		int temp1, temp2;
//		cin >> temp1 >> temp2;
//		hashTable[temp1] = i;
//		hashTable[temp2] = i;
//	}
//
//	cin >> M;
//
//	for (int i = 0;i < M;i++) {
//		int temp3;
//		cin >> temp3;
//		if (hashTable[temp3] == 0) {
//			st.insert(temp3);
//		}
//		else {
//			v[hashTable[temp3]].push_back(temp3);
//		}
//	}
//
//	for (int i = 1;i <= N;i++) {
//		if (v[i].size() == 1) {
//			st.insert(v[i][0]);
//		}
//	}
//	printf("%d\n",st.size());
//
//	int num = 0;
//	for (set<int>::iterator it = st.begin();it != st.end();it++) {
//		printf("%05d", *it);
//		num++;
//		if (num < st.size()) {
//			printf(" ");
//		}
//	}
//
//	return 0;
//}