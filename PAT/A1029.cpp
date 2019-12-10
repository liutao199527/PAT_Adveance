//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<int> v1;
//vector<int> v2;
//vector<int> v3;
//
//int N;
//
//void merge(vector<int> v1, vector<int> v2) {
//	int i = 0;int j = 0;
//	while (i < v1.size() && j < v2.size()) {
//		if (v1[i] > v2[j]) {
//			v3.push_back(v2[j]);
//			j++;
//		}
//		else {
//			v3.push_back(v1[i]);
//			i++;
//		}
//	}
//	while (i < v1.size())v3.push_back(v1[i++]);
//	while (j < v2.size())v3.push_back(v2[j++]);
//
//	if (v3.size() % 2 == 0) {
//		printf("%d",v3[v3.size() / 2 - 1]);
//	}
//	else {
//		printf("%d", v3[v3.size() / 2]);
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		int temp;
//		cin >> temp;
//		v1.push_back(temp);
//	}
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		int temp;
//		cin >> temp;
//		v2.push_back(temp);
//	}
//
//	merge(v1, v2);
//
//	return 0;
//}