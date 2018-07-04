#include"Sequence.h"
#include<iostream>
#include<string>
#include<sstream>
#include<string.h>
#include<stdio.h>
int pstrcmp(const void *p1, const void *p2) {
	return strcmp(*(char* const *)p1, *(char *const*)p2);
}
Sequence::Sequence(const char * filename) {
	freopen(filename, "r", stdin);
	string line;
	getline(cin, line);
	all = line;
	while (getline(cin, line)) {
		line.erase(0, 0);
		all += line;
	}
}
int Sequence::length() {
	return all.size();
}
int Sequence::numberOf(char base) {
	int number;
	return number = count(all.begin(), all.end(), base);
}
string Sequence::longestConsecutive(){
	char base;

	int maxnumber=0;

	int thisnumber = 1;

	for (int i = 0; i < all.size(); ++i) {

		if (all[i] == all[i + 1]) {

			++thisnumber;

		}

		else {

			if (thisnumber > maxnumber) {

				base = all[i];

				maxnumber = thisnumber;

				

			}

			thisnumber = 1;

		}

		

	}

	string abc;

	for (int i = 0; i < maxnumber; ++i) {

		cout<<base;

	}

	return abc;
}
string Sequence::longestRepeated() {
	const int number = all.size() - 1;
	int maxlen=0,maxi=0;
	char *c = new char[number];
	char **a = new char *[number];
	for (int i = 0; i <= number; ++i) {
		
		c[i] = all[i];
		a[i] = &c[i];

	}
	qsort(a, number, sizeof(char*),pstrcmp);
	for (int i = 0; i < number; ++i) {
		int temp = comlen(a[i], a[i + 1]);

		if (temp > maxlen) {
			maxlen = temp;
			maxi = i;
		}
	}
	string repeated =a[maxi];
	return repeated.substr(0,maxlen);
}
int Sequence::comlen(char *p, char *q) {
	int i = 0;
	while (*p && (*p++ == *q++))
		++i;
	return i;
}
