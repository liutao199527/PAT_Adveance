//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//const int maxv = 510;
//const int INF = 1000000000;
//
//int G[maxv][maxv];
//int degree[maxv];
//bool vis[maxv];
//int N, M;
//vector<int> path;
//set<int> s;
//
//void DFS(int st) {
//	vis[st] = true;
//	s.insert(st);
//	for (int v = 0;v <= N;v++) {
//		if (vis[v] == false && G[st][v] != INF) {
//			DFS(v);
//		}
//	}
//}
//
//
//int main() {
//	cin >> N >> M;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	fill(degree, degree + maxv, 0);
//	fill(vis, vis + maxv, false);
//	for (int i = 0;i < M;i++) {
//		int u, v;
//		cin >> u >> v;
//		G[u][v] = G[v][u] = 1;
//		degree[u]++;
//		degree[v]++;
//	}
//
//	DFS(1);
//	int num = 0;
//	for (int i = 1;i <= N;i++) {
//		if (degree[i] % 2 != 0) {
//			num++;
//		}
//		printf("%d", degree[i]);
//		if (i != N) {
//			printf(" ");
//		}
//		else {
//			printf("\n");
//		}
//	}
//
//	if (s.size() == N && num == 0) {
//		printf("Eulerian");
//	}
//	else if (s.size() == N && num == 2) {
//		printf("Semi-Eulerian");
//
//	}
//	else {
//		printf("Non-Eulerian");
//	}
//
//	return 0;
//}