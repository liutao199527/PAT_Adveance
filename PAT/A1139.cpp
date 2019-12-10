//#include<iostream>
//#include<vector>
//#include <algorithm>
//#include <set>
//#include <map>
//#include <string>
//
//using namespace std;
//const int maxv = 10010;;
//
//int N, M;
//set<int> v1[maxv];//记录每个人的同性朋友
//set<int> v2[maxv];//记录每个人的异性朋友
//
//struct node {
//	int v1;
//	int v2;
//};
//
//void findFriend(string temp1, string temp2) {
//	node Node[maxv];
//	int num = 0;
//	int q1, q2;
//	q1 = abs(stoi(temp1));q2 = abs(stoi(temp2));
//	if (temp1.size() == temp2.size()) {
//		for (set<int>::iterator it = v1[q1].begin();it != v1[q1].end();it++) {
//			for (set<int>::iterator jt = v1[q2].begin();jt != v1[q2].end();jt++) {
//				if (v1[*it].find(*jt) != v1[*it].end() && *it != q2) {
//					Node[num].v1 = *it;
//					Node[num].v2 = *jt;
//					num++;
//				}
//			}
//		}
//	}
//	else {
//		for (set<int>::iterator it = v1[q1].begin();it != v1[q1].end();it++) {
//			for (set<int>::iterator jt = v1[q2].begin();jt != v1[q2].end();jt++) {
//				if (v2[*it].find(*jt) != v2[*it].end()) {
//					Node[num].v1 = *it;
//					Node[num].v2 = *jt;
//					num++;
//				}
//			}
//		}
//	}
//
//	printf("%d\n", num);
//	for (int i = 0;i < num;i++) {
//		printf("%04d %04d\n", Node[i].v1, Node[i].v2);
//	}
//}
//int main() {
//	cin >> N >> M;
//	for (int i = 0;i < M;i++) {
//		string a, b;
//		int u, v;
//		cin >> a >> b;
//		u = abs(stoi(a));v = abs(stoi(b));
//		if (a.size() == b.size()) {
//			v1[u].insert(v);
//			v1[v].insert(u);
//		}
//		else {
//			v2[u].insert(v);
//			v2[v].insert(u);
//		}
//	}
//
//	int K;
//	cin >> K;
//	for (int i = 0;i < K;i++) {
//		string temp1, temp2;
//		cin >> temp1 >> temp2;
//		findFriend(temp1, temp2);
//	}
//
//	return 0;
//}