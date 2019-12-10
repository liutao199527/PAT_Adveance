//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int maxv = 1000;
//
//int G[maxv][maxv];
//bool vis[maxv];
//
//int N, L, M;
//
//vector<int> v;
//
//void isMaxClip(vector<int> v) {
//	int num;
//	for (int i = 1;i <= N;i++) {
//		num = 0;
//		if (vis[i] == false) {
//			for (int j = 0;j < v.size();j++) {
//				if (G[i][v[j]] == 1) {
//					num++;
//				}
//			}
//			if (num == v.size()){
//				printf("Not Maximal\n");
//				return;
//			}
//		}
//	}
//	printf("Yes\n");
//}
//void isClip(vector<int> v) {
//	for (int i = 0;i < v.size() - 1;i++) {
//		for (int j = i + 1;j < v.size();j++) {
//			if (G[v[i]][v[j]] == -1) {
//				printf("Not a Clique");
//				return;
//			}
//		}
//	}
//	isMaxClip(v);
//}
//int main() {
//	cin >> N >> L;
//	fill(G[0], G[0] + maxv * maxv, -1);
//	for (int i = 0;i < L;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = G[v][u] = 1;
//	}
//	cin >> M;
//	for (int i = 0;i < M;i++) {
//		int K;
//		cin >> K;
//		fill(vis, vis + maxv, false);
//		v.clear();
//		for (int j = 0;j < K;j++) {
//			int temp;
//			cin >> temp;
//			vis[temp] = true;
//			v.push_back(temp);
//		}
//		isClip(v);
//	}
//
//	return 0;
//}