//#include<iostream>
//#include <vector>
//
//using namespace std;
//const int maxv = 510;
//const int INF = 1000000000;
//int G[maxv][maxv];
//int Time[maxv][maxv];
//bool vis[maxv];
//int d[maxv];
//int c[maxv];
//int N, M;
//int pre[maxv];
//vector<int> pre_time[maxv];
//vector<int> path, tempPath,dis_path;
//int optValue = maxv;
//int st,ent;
//
//void Dijkstra_dis(int s) {
//	fill(d, d + maxv, INF);
//	fill(c, c + maxv, INF);
//	d[s] = 0;
//	c[s] = 0;
//	for (int i = 0;i < N;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j < N;j++) {
//			if (vis[j] == false && d[j] < min) {
//				min = d[j];
//				u = j;
//			}
//		}
//
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < N;v++) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (d[u] + G[u][v] < d[v]) {
//					d[v] = d[u] + G[u][v];
//					c[v] = c[u] + Time[u][v];
//					pre[v] = u;
//				}
//				else if (d[u] + G[u][v] == d[v] && c[u] + Time[u][v] <c[v]) {
//					c[v] = c[u] + Time[u][v];
//					pre[v] = u;
//				}
//			}
//		}
//	}
//}
//
//void Dijkstra_time(int s) {
//	fill(c, c + maxv, INF);
//	c[s] = 0;
//	for (int i = 0;i < N;i++) {
//		int u = -1, min = INF;
//		for (int j = 0;j < N;j++) {
//			if (vis[j] == false && c[j] < min) {
//				min = c[j];
//				u = j;
//			}
//		}
//
//		if (u == -1) return;
//		vis[u] = true;
//		for (int v = 0;v < N;v++) {
//			if (vis[v] == false && G[u][v] != INF) {
//				if (c[u] + Time[u][v] < c[v]) {
//					c[v] = c[u] + Time[u][v];
//					pre_time[v].clear();
//					pre_time[v].push_back(u);
//				}
//				else if (c[u] + Time[u][v] == c[v]) {
//					pre_time[v].push_back(u);
//				}
//			}
//		}
//	}
//}
//
//void DFS_time(int v) {
//	if (v == st) {
//		tempPath.push_back(v);
//		int value = tempPath.size();
//		if (value < optValue) {
//			path = tempPath;
//			optValue = value;
//		}
//		tempPath.pop_back();
//		return;
//	}
//	tempPath.push_back(v);
//	for (int i = 0;i < pre_time[v].size();i++) {
//		DFS_time(pre_time[v][i]);
//	}
//	tempPath.pop_back();
//}
//
//void DFS_dis(int v) {
//	if (v == st) {
//		dis_path.push_back(v);
//		return;
//	}
//	dis_path.push_back(v);
//	DFS_dis(pre[v]);
//}
//
//bool isEqual() {
//	if (dis_path.size() != path.size()) {
//		return false;
//	}
//	else {
//		for (int i = 0;i < path.size();i++) {
//			if (dis_path[i] != path[i]) {
//				return false;
//			}
//		}
//	}
//
//	return true;
//}
//
//void showResult(vector<int> vt) {
//	for (int i = vt.size()-1;i >= 0;i--) {
//		printf("%d", vt[i]);
//		if (i != 0) {
//			printf(" -> ");
//		}
//		else {
//			printf("\n");
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	fill(G[0], G[0] + maxv * maxv, INF);
//	fill(Time[0], Time[0] + maxv * maxv, INF);
//	fill(vis, vis + maxv, false);
//	for (int i = 0;i < M;i++) {
//		int u, v, isVis, dis, time;
//		cin >> u >> v >> isVis >> dis >> time;
//		if (isVis == 1) {
//			G[u][v] = dis;
//			Time[u][v]=Time[v][u] = time;
//		}
//		else {
//			G[u][v] = G[v][u] = dis;
//			Time[u][v] = Time[v][u] = time;
//		}
//	}
//	cin >> st >> ent;
//	Dijkstra_dis(st);
//	fill(vis, vis + maxv, false);
//	Dijkstra_time(st);
//	DFS_time(ent);
//	DFS_dis(ent);
//	bool flag = isEqual();
//	if (flag) {
//		printf("Distance = %d; Time = %d: ", d[ent], c[ent]);
//		showResult(path);
//	}
//	else {
//		printf("Distance = %d: ", d[ent]);
//		showResult(dis_path);
//		printf("Time = %d: ", c[ent]);
//		showResult(path);
//	}
//
//	return 0;
//}