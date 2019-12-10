//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//struct Node {
//	int station;
//	int line;
//	bool trafer;
//}node[maxv];
//
//const int maxv = 10000;
//const int INF = 1000000000;
//int G[maxv][maxv];
//bool vis[maxv];
//int d[maxv];
//int w[maxv];
//int weight[maxv];
//
//int N, M, K;
//int st, ed;
//set<int> vt;
//void Dijstra(int st) {
//	fill(d, d + maxv, INF);
//	fill(vis, vis + maxv, false);
//	fill(w, w + maxv, INF);
//	d[st] = 0;
//	w[st] = 0;
//	for (set<int>::iterator it = vt.begin();it != vt.end();it++) {
//		int u = -1, min = INF;
//		for (set<int>::iterator jt = vt.begin();jt != vt.end();jt++) {
//			if (vis[*jt] == false && d[*jt] < min) {
//				u = *jt;
//				min = d[*jt];
//			}
//		}
//
//		if (u == -1) return;
//		vis[u] = true;
//		for (set<int>::iterator v = vt.begin();v != vt.end();v++) {
//			if (vis[*v] == false && G[u][*v] != INF) {
//				if (d[u] + G[u][*v] < d[*v]) {
//					d[*v] = d[u] + G[u][*v];
//					if (weight[*v] > 1) {
//						w[*v] = 1 + w[u];
//					}
//					else {
//						w[*v] = w[u] + 0;
//					}
//				}
//				else if (d[u] + G[u][*v] == d[*v] && w[u] + weight[*v] < w[*v]) {
//
//				}
//			}
//		}
//	}
//
//
//}
//int main() {
//	cin >> N;
//	fill(weight, weight + maxv, 0);
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 1;i <= N;i++) {
//		cin >> K;
//		int pre,temp;
//		for (int j = 0;j < K;j++) {
//			if (j == 0) {
//				cin >> pre;
//				weight[pre]++;
//				vt.insert(pre);
//			}
//			else {
//				cin >> temp;
//				weight[temp];
//				vt.insert(temp);
//				G[pre][temp] = G[temp][pre] = 1;
//				pre = temp;
//			}
//		}
//	}
//	Dijstra(st);
//}
