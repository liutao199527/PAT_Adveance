//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//const int maxv = 1010;
//
//int N, M, K, Q; //窗口数量，线内人数，总人数，查询人数
//int cost_time[maxv]; //每个人的消耗时间
//int min_time;
//int window_time[25] = { 0 }; //表示每个窗口当前的时间
//int ans[maxv]; //记录每个人完成业务的时间
//bool incal[maxv] = { false };
//int query[maxv];
//vector<queue<int> > q;
//queue<int> line_out;
//int temp;
//
//void calfintime() {
//	int k = 0; //记录最先完成业务的窗口
//	min_time = 100000000;
//	for (int i = 0;i < N;i++) {
//		int front = q[i].front();
//		if (incal[front] == false) {
//			ans[front] = window_time[i] + cost_time[front];
//			window_time[i] = window_time[i] + cost_time[front];
//			incal[front] = true;
//		}
//		if (window_time[i] < min_time) {
//			min_time = window_time[i];
//			k = i;
//		}
//	}
//	q[k].pop();
//	int front = line_out.front();
//	q[k].push(front);
//	line_out.pop();
//}
//
//void calfintimeAll() {
//	while (!line_out.empty()) {
//		calfintime();
//	}
//}
//
//void calfintimeLineIn() {
//	for (int i = 0;i < N;i++) {
//		while(!q[i].empty()) {
//			int front = q[i].front();
//			if (incal[front] == false) {
//				incal[front] = true;
//				ans[front] = window_time[i] + cost_time[front];
//				window_time[i] = window_time[i] + cost_time[front];
//			}
//			q[i].pop();
//		}
//	}
//}
//
//
//int main() {
//	cin >> N >> M >> K >> Q;
//	int j = 0;
//	q.resize(25);
//	for (int i = 0;i <K;i++) {
//		cin >> cost_time[i];
//		if (j < N * M) {
//			temp = j % N;
//			q[temp].push(i);
//			j++;
//		}
//		else {
//			line_out.push(i);
//		}
//	}
//	for (int i = 0;i < Q;i++) {
//		cin >> query[i];
//	}
//	calfintimeAll();
//	calfintimeLineIn();
//
//	for (int i = 0;i < Q;i++) {
//		int temp_query = query[i] -1;
//		int hh = ans[temp_query] / 60 + 8;
//		int mm = ans[temp_query] % 60;
//		int start_hh = (ans[temp_query] - cost_time[temp_query]) / 60 + 8;
//		int start_mm = (ans[temp_query] - cost_time[temp_query]) % 60;
//		if (start_hh >= 17) {
//			printf("Sorry\n");
//		}
//		else {
//			printf("%02d:%02d\n", hh, mm);
//		}
//	}
//
//	return 0;
//}