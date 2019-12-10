//#include<iostream>
//
//using namespace std;
//
//const int maxv = 510;
//const int INF = 1000000000;
//int G[maxv][maxv];
//int vis[maxv] = { false };
//int n,m,c1,c2;//������,����,��ʼ���㣬��ֹ����
//int weight[maxv];
//int d[maxv]; //������ʾ��㵽������ľ���
//int num[maxv]; //������ʾ��㵽���������·������Ŀ
//int w[maxv]; //������ʾ��㵽�������ܹ��ۼ���������
//
//
//void DFS(int s) {
//	//��ʼ��
//	fill(d, d + maxv, INF);
//	fill(w, w + maxv, 0);
//	fill(num, num + maxv, 0);
//	d[s] = 0;
//	w[s] = weight[s];
//	num[s] = 1;
//
//	for (int i = 0;i < n;i++) {
//		int u = -1, min = INF;
//		//�ҵ���ǰ���������Ķ���
//		for (int j = 0;j < n;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//			
//		}
//
//		if (u == -1) return; //��ʾʣ�µĽ����s����ͨ
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
//					//���·������Ŀ���Ȩ�޹ر���д������
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