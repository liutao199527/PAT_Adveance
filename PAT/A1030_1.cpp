////只用Dijkstra算法
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//const int maxv = 510;
//const int INF = 1000000000;
//
////n为顶点数，m为边数，st和ed分别为起点和终点
////G为距离矩阵，cost为花费矩阵
////d[]记录最短距离，c[]记录最小花费
//int n, m, st, ed, G[maxv][maxv], cost[maxv][maxv];
//int d[maxv], c[maxv], pre[maxv];
//bool vis[maxv] = { false };
//
//void Dijkstra(int s) {
//	fill(d, d + maxv, INF);
//	fill(c, c + maxv, INF);
//	for (int i = 0;i < n;i++) pre[i] = i;// 注意这里与并查集的区别，i=1
//	d[s] = 0;
//	c[s] = 0;
//	for (int i = 0;i < n;i++) {//循环n次，因为有n个节点，但是每次取与起点距离最近的节点，每次取出后，就将其标记为已访问
//		int u = -1, min = INF;
//		for (int j = 0;j < n;j++) { //找到未访问节点中，距离起点最小的节点
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//		//如果找不到小于INF的d[u],说明剩下的节点和起点店都不连通
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < n;v++) {//找到u能够达到且还没访问的节点,更新d[]
//			if (vis[v] == false && G[u][v] != INF) { //这里有的图可能是无向图，如果不标记未访问，有可能形成死循环
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];//优化d[v]
//					c[v] = c[u] + cost[u][v];//优化c[v]
//					pre[v] = u;
//				}else if (d[u] + G[u][v] == d[v]) {
//					if (c[u] + cost[u][v] < c[v]) {
//						c[v] = c[u] + cost[u][v];//优化c[v]
//						pre[v] = u;
//					}
//				}
//			}
//		}
//	}
//}
//
//void DFS(int v) {
//	if (v == st) {
//		printf("%d ", v);
//		return;
//	}
//
//	DFS(pre[v]);
//	printf("%d ", v);
//}
//
//int main() {
//	cin >> n >> m >> st >> ed;
//	int u, v;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int i = 0;i < m;i++) {
//		cin >> u >> v;
//		cin >> G[u][v] >> cost[u][v];
//		G[v][u] = G[u][v];
//		cost[v][u] = cost[u][v];
//	}
//	Dijkstra(st);
//	DFS(ed);
//	printf("%d %d\n", d[ed], c[ed]);
//
//	return 0;
//}
//
//
//
//
