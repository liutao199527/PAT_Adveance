//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//map<int, string> intToString; //���->����
//map<string, int> stringToInt; //����->���
//map<string, int> Gang; //head->����
//
//const int maxv = 1010;
//bool vis[maxv] = { false };
//int G[maxv][maxv] = { 0 };
//int weight[maxv] = { 0 };//��Ȩ���������㷸���Ż��ͷĿ
//int n,k,numberPerson =0;//��ʾͨ����¼�ĸ���,ͨ��ʱ�����ֵ
//
//void DFS(int u,int& head,int& numMember,int& totalvalue) {
//	vis[u] = true;
//	numMember++;
//	if (weight[u] > weight[head]) {
//		head = u;
//	}
//
//	for (int i = 0;i < numberPerson;i++) {
//		if (G[u][i] > 0 ){
//			totalvalue += G[u][i];
//			G[u][i] = G[i][u] = 0;
//			if (vis[i] == false) {
//				DFS(i, head, numMember, totalvalue);
//			}
//		}
//	}
//}
//
//void DFSTrave() {
//	for (int i = 0;i < numberPerson;i++) {
//		if (vis[i] == false) {
//			int head = i, numMember = 0, totalValue = 0;
//			DFS(i, head, numMember, totalValue);
//			if (numMember > 2 && totalValue > k) { //��Ա������2���ܱ�Ȩ����K
//				Gang[intToString[head]] = numMember;
//			}
//		}
//	}
//}
//
////change������������str��Ӧ�ı��
//int change(string str) {
//	if (stringToInt.find(str) != stringToInt.end()) {
//		return stringToInt[str];
//	}
//	else {
//		stringToInt[str] = numberPerson;
//		intToString[numberPerson] = str;
//		return numberPerson++; //��������1
//	}
//}
//
//
//int main() {
//	int w;
//	string str1, str2;
//	cin >> n >> k;
//	for (int i = 0;i < n;i++) {
//		cin >> str1 >> str2 >> w;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += w;
//		weight[id2] += w;
//		G[id1][id2] += w;
//		G[id2][id1] += w;
//	}
//
//	DFSTrave();
//	cout << Gang.size() << endl;
//	map<string, int>::iterator it;
//	for (it = Gang.begin();it != Gang.end();it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//
//	return 0;
//}
//