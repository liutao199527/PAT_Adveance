//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n, k, p, maxFacSum = -1;
//
////fac��¼0^p,1^p����,i^p ʹ��i^pΪ������n�������
////ans������ŵ������У�temp��ŵݹ��е���ʱ��������
//
//vector<int> fac, ans, temp;
//
////power��������x^p
//int power(int x) {
//	int ans = 1;
//	for (int i = 0;i < p;i++) {
//		ans *= x;
//	}
//	return ans;
//}
//
////init����Ԥ����fac���飬ע���0Ҳ���ȥ
//void init() {
//	int i = 0, temp = 0;
//	while (temp <= n) { //��i^pû�г���n,���ϰ�i^p����fac
//		fac.push_back(temp);
//		temp = power(++i);
//	}
//}
//
////DFS��������ǰ����fac[index],nowKΪ��ǰѡ�еĸ���
////sumΪ��ǰѡ�е���֮�ͣ�facSumΪ��ǰѡ�еĵ���֮��
//void DFS(int index, int nowK, int sum, int facSum) {
//	if (sum == n && nowK == k) {  //�ҵ�һ�����������
//		if (facSum > maxFacSum) { //����֮�͸���
//			ans = temp;//�������ŵ�������
//			maxFacSum = facSum;
//		}
//
//		return;
//	}
//
//	if (sum > n || nowK > k) return;
//
//	if (index - 1 >= 0) { //fac[0]����Ҫѡ��
//		temp.push_back(index); //�ѵ���index������ʱ����temp
//		DFS(index, nowK + 1, sum + fac[index], facSum + index);//xѡ�ķ�֧����Ϊ����һ�������Ա��ظ�ѡ����index
//		temp.pop_back();
//		DFS(index - 1, nowK, sum, facSum);//��ѡ�ķ�֧
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