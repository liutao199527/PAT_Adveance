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
//int n, maxDepth = 0, num = 0;//maxDepthΪ�����ȣ�numΪ�����ȵ�Ҷ�ӽ�����
//
//void DFS(int index, int depth) {
//	if (child[index].size() == 0) { //����Ҷ�ӽ��
//		if (depth > maxDepth) {     //��ȱ������ȴ�
//			maxDepth = depth;       //����������
//			num = 1;                //���������ȵ�Ҷ�ڵ����
//		}
//		else if (depth == maxDepth) {
//			num++;
//		}
//
//		return;
//	}
//
//	for (int i = 0;i < child[index].size();i++) {
//		DFS(child[index][i], depth + 1); //�ݹ���ʽ��index���ӽڵ�
//	}
//}
//
//int main() {
//	int father, root; //farther��������ʱ��¼ÿ�����ĸ��׽�㣬root������Ÿ��ڵ�������±꣨��ַ��
//	cin >> n >> p >> r;
//	r /= 100;
//	for (int i = 0;i < n;i++) {
//		cin >> father;
//		if (father != -1) {
//			child[father].push_back(i); //i��fatherd���ӽ��
//		}
//		else {
//			root = i;
//		}
//	}
//	DFS(root, 0);//DFS���
//	printf("%.2f %d\n", p * pow(1+r,maxDepth),num);
//	return 0;
//}