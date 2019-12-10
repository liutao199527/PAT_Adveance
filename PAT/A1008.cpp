//#include<iostream>
//#include<algorithm>
//#include<cmath>
//
//using namespace std;
//const int up = 6;
//const int down = 4;
//const int stay = 5;
//const int maxv = 1010;
//
//int N;//电梯运行次数
//
//int main() {
//	int floor = 0;
//	int ans[maxv]; //存储电梯运行几次的上楼或下楼层数
//	cin >> N;
//	int nowfloor;
//	for(int i = 0;i < N;i++){
//		cin >> nowfloor;
//		ans[i] = nowfloor - floor;
//		floor = nowfloor;
//	}
//
//	int totaltime = 0;
//	for (int i = 0;i < N;i++) {
//		if (ans[i] < 0) {
//			totaltime += abs(ans[i]) * down + stay;
//		}
//		else if (ans[i] > 0) totaltime += ans[i] * up + stay;
//		else continue;
//	}
//
//	printf("%d", totaltime);
//	return 0;
//}