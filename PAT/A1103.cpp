//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, k, p, maxFacSum = -1;
//
////fac记录0^p,1^p……,i^p 使得i^p为不超过n的最大数
////ans存放最优底数序列，temp存放递归中的临时底数序列
//
//vector<int> fac, ans, temp;
//
////power函数计算x^p
//int power(int x) {
//	int ans = 1;
//	for (int i = 0;i < p;i++) {
//		ans *= x;
//	}
//	return ans;
//}
//
////init函数预处理fac数组，注意把0也存进去
//void init() {
//	int i = 0, temp = 0;
//	while (temp <= n) { //当i^p没有超过n,不断把i^p加入fac
//		fac.push_back(temp);
//		temp = power(++i);
//	}
//}
//
////DFS函数，当前访问fac[index],nowK为当前选中的个数
////sum为当前选中的数之和，facSum为当前选中的底数之和
//void DFS(int index, int nowK, int sum, int facSum) {
//	if (sum == n && nowK == k) {  //找到一个满足的序列
//		if (facSum > maxFacSum) { //底数之和更优
//			ans = temp;//更新最优底数序列
//			maxFacSum = facSum;
//		}
//
//		return;
//	}
//
//	if (sum > n || nowK > k) return;
//
//	if (index - 1 >= 0) { //fac[0]不需要选择
//		temp.push_back(index); //把底数index加入临时序列temp
//		DFS(index, nowK + 1, sum + fac[index], facSum + index);//x选的分支，因为这里一个数可以被重复选择，则index
//		temp.pop_back();
//		DFS(index - 1, nowK, sum, facSum);//不选的分支
//	}
//}
//
//int main() {
//	cin >> n >> k >> p;
//	init();
//	DFS(fac.size() - 1, 0, 0, 0);
//	if (maxFacSum == -1) printf("Impossible\n");
//	else {
//		printf("%d = %d^%d", n, ans[0], p);
//		for (int i = 1;i < ans.size();i++) {
//			printf(" + %d^%d", ans[i], p);
//		}
//	}
//
//	return 0;
//}