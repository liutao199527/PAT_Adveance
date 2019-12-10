//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//const int maxv = 210;
//const int INF = 1000000000;
//int G[maxv][maxv];
//set<int> st;
//vector<int> vt;
//int N, M, Q, K;
//
//int main() {
//	fill(G[0], G[0] + maxv * maxv, INF);
//	cin >> N >> M;
//	for (int i = 0;i < M;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = 1;
//		G[v][u] = 1;
//	}
//	cin >> Q;
//	for (int i = 0;i < Q;i++) {
//		st.clear();
//		vt.clear();
//		cin >> K;
//		int start = 0, end = INF,temp,pre = -1;
//		bool flag = true;
//		for (int j = 0;j < K;j++) {
//			cin >> temp;
//			st.insert(temp);
//			vt.push_back(temp);
//			if (j == 0) {
//				start = temp;
//			}
//			else {
//				if (j == K - 1) {
//					end = temp;
//				}
//				if (G[pre][temp] == INF) {
//					flag = false;
//				}
//			}
//
//			pre = temp;
//		}
//		if (flag == false) {
//			printf("NO\n");
//		}
//		else {
//			if (st.size() == N && start == end && (vt.size() - st.size() == 1)) {
//				printf("YES\n");
//			}
//			else {
//				printf("NO\n");
//			}
//		}
//	}
//
//	return 0;
//}