//#include<iostream>
//#include<string>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//const int maxv = 10010;
//map<string, int> m;
//
//int N, M;//人数，查询数目
//string str;
//
//struct Card {
//	string all;
//	string lever;
//	string site;
//	string date;
//	string id;
//	int score;
//}card[maxv];
//
//bool cmp1(Card a, Card b) {
//	if (a.lever != b.lever) return a.lever < b.lever;
//	else {
//		return a.score > b.score;
//	}
//}
//
//bool cmp2(Card a, Card b) {
//	return a.site < b.site;
//}
//
//bool cmp3(Card a, Card b) {
//	return a.date < b.date;
//}
//
//void showResult1(string term) {
//	sort(card, card + N, cmp1);
//	int num = 0;
//	for (int i = 0;i < N;i++) {
//		if (card[i].lever == term) {
//			cout << card[i].all << " " << card[i].score << endl;
//			num++;
//		}
//	}
//	if (num == 0) {
//		printf("NA\n");
//	}
//}
//
//void showResult2(string term) {
//	sort(card, card + N, cmp2);
//	int num = 0, score_all = 0;
//	for (int i = 0;i < N;i++) {
//		if (card[i].site == term) {
//			num++;
//			score_all += card[i].score;
//		}
//	}
//	if (num == 0) {
//		printf("NA\n");
//	}
//	else {
//		printf("%d %d\n", num, score_all);
//	}
//}
//
//void showResult3(string term) {
//	sort(card, card + N, cmp3);
//	for (int i = 0;i < N;i++) {
//		if (card[i].date == term) {
//			if (m.find(card[i].site) == m.end()) {
//				m[card[i].site] = 1;
//			}
//			else {
//				m[card[i].site] += 1;
//			}
//		}
//	}
//	if (!m.empty()) {
//		for (map<string, int>::iterator it = m.end();it != m.begin();it--) {
//			printf("%s %d\n", it->first.c_str(), it->second);
//		}
//	}
//	else {
//		printf("NA\n");
//	}
//}
//int main() {
//	cin >> N >> M;
//	for (int i = 0;i < N;i++) {
//		cin >> str >> card[i].score;
//		card[i].all = str;
//		card[i].lever = str[0];
//		card[i].site = str.substr(1, 3);
//		card[i].date = str.substr(4, 6);
//		card[i].id = str.substr(10, 3);
//	}
//	for (int i = 0;i < M;i++) {
//		int type;
//		string term;
//		cin >> type >> term;
//		if (type == 1) {
//			printf("Case %d: %d %s\n", i, type, term.c_str());
//			showResult1(term);
//		}
//		else if (type == 2) {
//			printf("Case %d: %d %s\n", i, type, term.c_str());
//			showResult2(term);
//		}
//		else {
//			if (!m.empty()) {
//				m.clear();
//			}
//			printf("Case %d: %d %s\n", i, type, term.c_str());
//			showResult3(term);
//		}
//	}
//
//	return 0;
//}