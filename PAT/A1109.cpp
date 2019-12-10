//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cstring>
//
//using namespace std;
//const int maxv = 20;
//const int maxn = 100010;
//int N, M;
//
//
//struct Student {
//	char name[10];
//	int height;
//}student[maxn];
//
//vector<Student> st[maxv];
//
//bool cmp(Student a, Student b) {
//	if (a.height != b.height) return a.height > b.height;
//	else return strcmp(a.name,b.name) < 0;
//}
//
//void showResult() {
//	vector<string> temp;
//	for (int i = 0;i < M;i++) {
//		temp.clear();
//		temp.resize(st[i].size());
//		int now_1 = st[i].size() / 2;
//		int now_2 = now_1 - 1;
//		for (int j = 0;j < st[i].size();j++) {
//			if (j % 2 == 0) {
//				temp[now_1] = st[i][j].name;
//				now_1++;
//			}
//			else {
//				temp[now_2] = st[i][j].name;
//				now_2--;
//			}
//		}
//		for (int k = 0;k < temp.size();k++) {
//			cout << temp[k];
//			if (k != temp.size() - 1) {
//				printf(" ");
//			}
//			else {
//				printf("\n");
//			}
//		}
//		
//	}
//}
//
//
//int main() {
//	int i;
//	cin >> N >> M;
//	for (int i = 0;i < N;i++) {
//		cin >> student[i].name >> student[i].height;
//	}
//	int rear = N / M + N % M;
//	int m = N / M;
//	sort(student, student + N, cmp);
//	for (i = 0;i < rear;i++) {
//		st[0].push_back(student[i]);
//	}
//	for (int j = 1;j < M;j++) {
//		for(int k = 0;k < m;k++) {
//			st[j].push_back(student[i]);
//			i++;
//		}
//	}
//	showResult();
//
//	return 0;
//}
