//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<string> v;
//bool cmp(string str1, string str2) {
//	return str1 + str2 < str2 + str1;
//}
//int N;
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		string str;
//		cin >> str;
//		v.push_back(str);
//	}
//
//	sort(v.begin(),v.end(),cmp);
//
//	string s;
//	for (int i = 0;i < v.size();i++) {
//		s += v[i];
//	}
//
//	while (s.size() != 0 && s[0] == '0') {
//		s.erase(s.begin());
//	}
//
//	if (s.length() == 0) cout << 0;
//	cout << s;
//	return 0;
//}