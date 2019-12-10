//#include <iostream>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//const int maxv = 100010;
//set<int> s;
//vector<int> vec[maxv];
//int N, M;
//
//int father[maxv];
//
//void check() {
//	set<int> ans;
//	bool flag = false;
//	for (set<int>::iterator it = s.begin();it != s.end();it++) {
//		ans = s;
//		for (int i = 0;i < vec[*it].size();i++) {
//			ans.insert(vec[*it][i]);
//		}
//		if (ans.size() < s.size() + vec[*it].size()) {
//			flag = true;
//			break;
//		}
//	}
//	if (flag) {
//		printf("No\n");
//
//	}
//	else {
//		printf("Yes\n");
//	}
//}
//int main() {
//	cin >> N >> M;
//	for (int i = 0;i < N;i++) {
//		int u, v;
//		cin >> u >> v;
//		vec[u].push_back(v);
//		vec[v].push_back(u);
//	}
//	for (int i = 0;i < M;i++) {
//		s.clear();
//		int n,num;
//		cin >> n;
//		for (int j = 0;j < n;j++) {
//			cin >> num;
//			s.insert(num);
//		}
//		check();
//	}
//
//	return 0;
//}