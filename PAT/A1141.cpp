//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//const int maxv = 100010;
//
//struct Student {
//	char id[10];
//	int score;
//	char school_name[10];
//	char level;
//}student[maxv];
//
//struct School {
//	int stu_num;
//	int rank;
//	int score;
//	char school_name[10];
//}school[maxv];
//
//int N;
//int index = 0;
//
//bool cmp1(Student a, Student b) {
//	return strcmp(a.school_name,b.school_name) < 0;
//}
//
//bool cmp2(School a, School b) {
//	if (a.score != b.score) return a.score > b.score;
//	else {
//		if (a.stu_num != b.stu_num) {
//			return a.stu_num > b.stu_num;
//		}
//		else {
//			return strcmp(a.school_name, b.school_name) < 0;
//		}
//	}
//}
//void calScore() {
//	char temp[10];
//	strcpy_s(temp,student[0].school_name);
//	int score_A =0,score_B=0,score_T = 0;
//	int num = 1;
//	for (int i = 1;i < N;i++) {
//		if (strcmp(student[i].school_name, temp) == 0) {
//			if (student[i].level == 'A') {
//				score_A += student[i].score;
//			}
//			else if (student[i].level == 'B') {
//				score_B += student[i].score;
//			}
//			else {
//				score_T += student[i].score;
//			}
//			num++;
//		}
//		else {
//			school[index].score = score_B * 2 / 3 + score_A + score_T * 3 / 2;
//			school[index].stu_num = num;
//			strcpy_s(school[index].school_name, temp);
//			score_A = 0;score_B = 0;score_T = 0;num = 1;
//			strcpy_s(temp, student[i].school_name);
//			index++;
//		}
//	}
//	school[index].score = score_B * 2 / 3 + score_A + score_T * 3 / 2;
//	school[index].stu_num = num;
//	strcpy_s(school[index].school_name, temp);
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		cin >> student[i].id >> student[i].score >> student[i].school_name;
//		student[i].level = student[i].id[0];
//	}
//	sort(student, student + N, cmp1);
//	calScore();
//	sort(school, school + index, cmp2);
//
//	printf("%d\n", index);
//	int rank = 1;
//	int pre_score = school[0].score;
//	printf("%d %s %d %d\n", rank, school[0].school_name, school[0].score, school[0].stu_num);
//	for (int i = 1;i < index;i++) {
//		if (school[i].score != pre_score) {
//			rank++;
//			printf("%d %s %d %d\n", rank, school[i].school_name, school[i].score, school[i].stu_num);
//		}
//		else {
//			printf("%d %s %d %d\n", rank, school[i].school_name, school[i].score, school[i].stu_num);
//		}
//	}
//	return 0;
//
//}