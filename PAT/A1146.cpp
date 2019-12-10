//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//const int maxv = 10010;
//vector<int> adj[maxv];
//vector<int> degree;
//
//int N, M;
//set<int> ans;
//int main() {
//	cin >> N >> M;
//	degree.resize(N + 1);
//	for (int i = 0;i < M;i++) {
//		int u, v;
//		cin >> u >> v;
//		adj[u].push_back(v);
//		degree[v]++;
//	}
//	int K;
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		int temp;
//		vector<int> v;
//		v = degree;
//		for (int j = 0;j < N;j++) {
//			cin >> temp;
//			if (v[temp] != 0) {
//				ans.insert(i);
//			}
//			else {
//				for (int k = 0;k<adj[temp].size();k++) {
//					v[adj[temp][k]]--;
//				}
//			}
//		}
//	}
//	int num = 0;
//	for (set<int>::iterator i = ans.begin();i != ans.end();i++,num++) {
//		printf("%d", *i);
//		if (num != ans.size() - 1) {
//			printf(" ");
//		}
//	}
//	return 0;
//}