//#include <iostream>
//#include <map>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//const int maxv = 10010;
//
//map<string, int> stringToInt;
//
//struct Student {
//	char name[20];
//	int Gp;
//	int Gmid;
//	int Gfin;
//	int G;
//	Student() {
//		Gp = -1;Gmid = -1;Gfin = -1;
//	}
//}student[maxv];
//
//int P, M, N;
//string str;
//int grade;
//int numPreson = 0;
//
//bool cmp1(Student a, Student b) {
//	return a.Gp > b.Gp;
//}
//bool cmp2(Student a, Student b) {
//	if (a.G != b.G)
//		return a.G > b.G;
//	else return strcmp(a.name, b.name) < 0;
//}
//int main() {
//	cin >> P >> M >> N;
//	int index;
//	for (int i = 0;i < P;i++) {
//		cin >> str >> grade;
//		if (stringToInt.find(str) != stringToInt.end()) {
//			index = stringToInt[str];
//		}
//		else {
//			stringToInt[str] = numPreson;
//			index = numPreson++;
//			strcpy_s(student[index].name, str.c_str());
//		}
//		student[index].Gp = grade;
//	}
//	for (int i = 0;i < M;i++) {
//		cin >> str >> grade;
//		if (stringToInt.find(str) != stringToInt.end()) {
//			index = stringToInt[str];
//		}
//		else {
//			stringToInt[str] = numPreson;
//			index = numPreson++;
//			strcpy_s(student[index].name, str.c_str());
//		}
//		student[index].Gmid = grade;
//	}
//	for (int i = 0;i < N;i++) {
//		cin >> str >> grade;
//		if (stringToInt.find(str) != stringToInt.end()) {
//			index = stringToInt[str];
//		}
//		else {
//			stringToInt[str] = numPreson;
//			index = numPreson++;
//			strcpy_s(student[index].name, str.c_str());
//		}
//		student[index].Gfin = grade;
//	}
//
//	sort(student, student + numPreson, cmp1);
//	int num = 0;
//	for (int i = 0;i < numPreson;i++) {
//		if (student[i].Gp >= 200) {
//			if (student[i].Gmid > student[i].Gfin) {
//				if (student[i].Gfin != -1) {
//					student[i].G = (int)round(student[i].Gmid * 0.4 + student[i].Gfin * 0.6);
//				}
//				else {
//					student[i].G = (int)round(student[i].Gmid * 0.4);
//				}
//			}
//			else {
//				student[i].G = student[i].Gfin;
//			}
//			num++;
//		}
//		else {
//			break;
//		}
//	}
//	sort(student, student + num, cmp2);
//	for (int i = 0;i < num;i++) {
//		if (student[i].G >= 60) {
//			printf("%s %d %d %d %d\n", student[i].name, student[i].Gp, student[i].Gmid, student[i].Gfin, student[i].G);
//		}
//	}
//	
//	return 0;
//}