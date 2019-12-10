//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 1111;
//vector<int> G[N]; //邻接表
//bool vis[N]; //标记顶点i是否已被访问
//
//int currentPoint; //当前需要删除的顶点编号
////dfs(v)遍历顶点v所在的连通块
//
//void dfs(int v) {
//	if (v == currentPoint) return; //当遍历到要删除的结点时返回
//	vis[v] = true; //标记顶点v已被访问
//	for (int i = 0;i < G[v].size();i++) {  //遍历v的所有邻接点
//		if (vis[G[v][i]] == false) {  //如果顶点G[v][i]未被访问
//			dfs(G[v][i]);
//		}
//	}
//}
//
//int n, m, k;
//int main() {
//	cin >> n >> m >> k;//输入顶点数，边数，查询数
//	for (int i = 0;i < m;i++) {
//		int a, b;
//		cin >> a >> b;
//		G[a].push_back(b);
//		G[b].push_back(a);
//	}
//
//	for (int query = 0;query < k;query++) {
//		cin >> currentPoint;
//		memset(vis, false, sizeof(vis)); //初始化vis数组为false
//		int block = 0;
//		for (int i = 1;i <= n;i++) { //枚举每个顶点
//			if (i != currentPoint && vis[i] == false) { //如果未被删除且未被访问
//				dfs(i); //遍历顶点i所在的连通块
//				block++;
//			}
//		}
//		printf("%d\n", block - 1);
//	}
//
//	return 0;
//}