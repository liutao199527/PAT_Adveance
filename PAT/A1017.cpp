//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 110;
//const int maxn = 1010;
//int N, K;//人数，窗口数
//int processTime[maxn];
//int wait[maxn] = { 0 };
//
//struct Custorm {
//	int hh;
//	int mm;
//	int ss;
//}cust[maxn];
//
//int window[maxn];
//
//
//bool cmp(Custorm a, Custorm b) {
//	if (a.hh != b.hh) return a.hh < b.hh;
//	else if (a.mm != b.mm) return a.mm < b.mm;
//	else return a.ss < b.ss;
//}
//
//void init(int k) {
//	for (int i = 0;i < k;i++) {
//		window[i] = 8 * 3600;
//	}
//}
//
//int getTonum(int hh, int mm, int ss) {
//	return hh * 3600 + mm * 60 + ss;
//}
//
//int main() {
//	cin >> N >> K;
//	init(K);
//	for (int i = 0;i < N;i++) {
//		scanf_s("%d:%d:%d",&cust[i].hh,&cust[i].mm,&cust[i].ss);
//		cin >> processTime[i];
//	}
//	sort(cust, cust + N, cmp);
//	int min_index = 0;
//	for (int i = 0;i < N;i++){
//		int min_start_time = 17 * 3600;
//		int num = getTonum(cust[i].hh, cust[i].mm, cust[i].ss);
//		sort(window, window + K);
//
//		if (num < min_start_time) {
//			wait[i] = min_start_time - num;
//			window[min_index] = min_start_time + processTime[i];
//		}
//		else {
//			window[min_index] = num + processTime[i]; //跟新服务时间
//		}
//	}
//
//	double ans = 0.0;
//	for (int i = 0;i < N;i++) {
//		ans += wait[i];
//	}
//
//	printf("%.1f", ans / N);
//
//}