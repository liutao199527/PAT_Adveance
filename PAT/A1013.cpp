//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 1111;
//vector<int> G[N]; //�ڽӱ�
//bool vis[N]; //��Ƕ���i�Ƿ��ѱ�����
//
//int currentPoint; //��ǰ��Ҫɾ���Ķ�����
////dfs(v)��������v���ڵ���ͨ��
//
//void dfs(int v) {
//	if (v == currentPoint) return; //��������Ҫɾ���Ľ��ʱ����
//	vis[v] = true; //��Ƕ���v�ѱ�����
//	for (int i = 0;i < G[v].size();i++) {  //����v�������ڽӵ�
//		if (vis[G[v][i]] == false) {  //�������G[v][i]δ������
//			dfs(G[v][i]);
//		}
//	}
//}
//
//int n, m, k;
//int main() {
//	cin >> n >> m >> k;//���붥��������������ѯ��
//	for (int i = 0;i < m;i++) {
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//
//	for (int query = 0;query < k;query++) {
//		cin >> currentPoint;
//		memset(vis, false, sizeof(vis)); //��ʼ��vis����Ϊfalse
//		int block = 0;
//		for (int i = 1;i <= n;i++) { //ö��ÿ������
//			if (i != currentPoint && vis[i] == false) { //���δ��ɾ����δ������
//				dfs(i); //��������i���ڵ���ͨ��
//				block++;
//			}
//		}
//		printf("%d\n", block - 1);
//	}
//
//	return 0;
//}