#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
struct course{
	string namecouse;
	double* score[11];
	char* rank={NULL}; 
	course * next,*prev,*data;  
};
struct student{
	int NO;
	int ID;
	string Fname;
	string Lname;
	date birth;
	string gender;
	string clas;
	course c;
};
int row(student &s,string clas);
void addStudent(string schoolYear,student&st);
