//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <stack>
//#include <queue>
//
//using namespace std;
//
//const int maxv = 1010;
//int cost[24];
//int N;//¼ÇÂ¼Êý
//
//double ans[maxv] = { 0 };
//
//struct Bill{
//	string name;
//	string phone_time;
//	string state;
//}bill[maxv];
//
//queue<Bill> q;
//
//bool cmp(Bill a,Bill b) {
//	if (a.name != b.name) return a.name < b.name;
//	else return a.phone_time < b.phone_time;
//}
//int getStrToNum(string time) {
//	int mon,dd,hh, mm;
//	sscanf_s(time.c_str(), "%d:%d:%d:%d", &mon,&dd,&hh, &mm);
//	int y = hh*60 + mm;
//	return y;
//}
//
//int calPhoneTime(string time1, string time2) {
//	int y1 = getStrToNum(time1);
//	int y2 = getStrToNum(time2);
//	return y2 - y1;
//}
//
//double calPhoneCharge(string time1,string time2) {
//	int mon, dd, hh, mm;
//	sscanf_s(time1.c_str(), "%d:%d:%d:%d", &mon, &dd, &hh, &mm);
//	double price = cost[hh] * 1.0;
//	int y = calPhoneTime(time1, time2);
//
//	double ans = y / 60;
//	return ans * price;
//}
//
//int main() {
//	for (int i = 0;i < 24;i++) {
//		cin >> cost[i];
//	}
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> bill[i].name >> bill[i].phone_time >> bill[i].state;
//	}
//	sort(bill, bill + N, cmp);
//	stack<Bill> s;
//	for (int i = 0;i < N;i++) {
//		if (bill[i].state == "on-line") {
//			s.push(bill[i]);
//		}
//		else if (bill[i].state == "off-line" && !s.empty() && bill[i].name == s.top().name) {
//			Bill top = s.top();
//			s.pop();
//			q.push(top);
//			q.push(bill[i]);
//		}
//		else {
//			continue;
//		}
//	}
//	int i = 0;
//	string prename = q.front().name;
//	while (!q.empty()) {
//		Bill front1 = q.front();
//		if (front1.name != prename) {
//			printf("Total amount: $%.2f\n", ans[i]);
//			i++;
//			prename = front1.name;
//		}
//		q.pop();
//		Bill front2 = q.front();
//		q.pop();
//		int y = calPhoneTime(front1.phone_time, front2.phone_time);
//		double charge = calPhoneCharge(front1.phone_time, front2.phone_time);
//		cout << front1.name << " " << front1.phone_time.substr(0, 2) << endl;
//		cout << front1.phone_time.substr(3, front1.phone_time.size()) << " " << front2.phone_time.substr(3, front2.phone_time.size()) << " ";
//		printf("%d $%.2f\n", y, charge);
//		ans[i] += charge;
//
//	}
//
//	return 0;
//
//
//
//}