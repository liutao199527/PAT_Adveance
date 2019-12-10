//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//const int maxn = 100010;
//vector<int> child[maxn];
//
//double p, r;
//int n, maxDepth = 0, num = 0;//maxDepth为最大深度，num为最大深度的叶子结点个数
//
//void DFS(int index, int depth) {
//	if (child[index].size() == 0) { //到达叶子结点
//		if (depth > maxDepth) {     //深度比最大深度大
//			maxDepth = depth;       //更新最大深度
//			num = 1;                //重置最大深度的叶节点个数
//		}
//		else if (depth == maxDepth) {
//			num++;
//		}
//
//		return;
//	}
//
//	for (int i = 0;i < child[index].size();i++) {
//		DFS(child[index][i], depth + 1); //递归访问结点index的子节点
//	}
//}
//
//int main() {
//	int father, root; //farther是用来临时记录每个结点的父亲结点，root用来存放根节点的数组下标（地址）
//	cin >> n >> p >> r;
//	r /= 100;
//	for (int i = 0;i < n;i++) {
//		cin >> father;
//		if (father != -1) {
//			child[father].push_back(i); //i是fatherd的子结点
//		}
//		else {
//			root = i;
//		}
//	}
//	DFS(root, 0);//DFS入口
//	printf("%.2f %d\n", p * pow(1+r,maxDepth),num);
//	return 0;
//}