////ֻ��Dijkstra�㷨
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
////nΪ��������mΪ������st��ed�ֱ�Ϊ�����յ�
////GΪ�������costΪ���Ѿ���
////d[]��¼��̾��룬c[]��¼��С����
//int n, m, st, ed, G[maxv][maxv], cost[maxv][maxv];
//int d[maxv], c[maxv], pre[maxv];
//bool vis[maxv] = { false };
//
//void Dijkstra(int s) {
//	fill(d, d + maxv, INF);
//	fill(c, c + maxv, INF);
//	for (int i = 0;i < n;i++) pre[i] = i;// ע�������벢�鼯������i=1
//	d[s] = 0;
//	c[s] = 0;
//	for (int i = 0;i < n;i++) {//ѭ��n�Σ���Ϊ��n���ڵ㣬����ÿ��ȡ������������Ľڵ㣬ÿ��ȡ���󣬾ͽ�����Ϊ�ѷ���
//		int u = -1, min = INF;
//		for (int j = 0;j < n;j++) { //�ҵ�δ���ʽڵ��У����������С�Ľڵ�
//			if (vis[j] == false && d[j] < min) {
//				u = j;
//				min = d[j];
//			}
//		}
//		//����Ҳ���С��INF��d[u],˵��ʣ�µĽڵ�����궼����ͨ
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < n;v++) {//�ҵ�u�ܹ��ﵽ�һ�û���ʵĽڵ�,����d[]
//			if (vis[v] == false && G[u][v] != INF) { //�����е�ͼ����������ͼ����������δ���ʣ��п����γ���ѭ��
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];//�Ż�d[v]
//					c[v] = c[u] + cost[u][v];//�Ż�c[v]
//					pre[v] = u;
//				}else if (d[u] + G[u][v] == d[v]) {
//					if (c[u] + cost[u][v] < c[v]) {
//						c[v] = c[u] + cost[u][v];//�Ż�c[v]
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