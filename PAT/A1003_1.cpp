//#include<iostream>
//
//using namespace std;
//
//const int maxv = 510;
//const int INF = 1000000000;
//int G[maxv][maxv];
//int vis[maxv] = { false };
//int n,m,c1,c2;//顶点数,边数,起始顶点，终止顶点
//int weight[maxv];
//int d[maxv]; //用来表示起点到各顶点的距离
//int num[maxv]; //用来表示起点到各顶点最短路径的数目
//int w[maxv]; //用来表示起点到各顶点能够聚集到的人手
//
//
//void DFS(int s) {
//	//初始化
//	fill(d, d + maxv, INF);
//	fill(w, w + maxv, 0);
//	fill(num, num + maxv, 0);
//	d[s] = 0;
//	w[s] = weight[s];
//	num[s] = 1;
//
//	for (int i = 0;i < n;i++) {
//		int u = -1, min = INF;
//		//找到当前与起点最近的顶点
//		for (int j = 0;j < n;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//			
//		}
//
//		if (u == -1) return; //表示剩下的结点与s不连通
//		vis[u] = true;
//		for (int v = 0;v < n;v++) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					w[v] = w[u] + weight[v];
//					num[v] = num[u];
//				}
//				else if (d[u] + G[u][v] == d[v]) {
//					if (w[u] + weight[v] > w[v]) {
//						w[v] = w[u] + weight[v];
//					}
//					//最短路径的数目与点权无关必须写在外面
//					num[v] += num[u];
//				}
//			}
//		}
//	}
//	return;
//}
//int main() {
//	cin >> n >> m >> c1 >> c2;
//	for (int i = 0;i < n;i++) {
//		cin >> weight[i];
//	}
//	fill(G[0], G[0] + maxv * maxv, INF);
//	for (int j = 0;j < m;j++) {
//		int s1, s2, dis;
//		cin >> s1 >> s2 >> dis;
//		G[s1][s2] = dis;
//		G[s2][s1] = dis;
//	}
//	DFS(c1);
//	printf("%d %d", num[c2], w[c2]);
//
//	return 0;
//}
//
