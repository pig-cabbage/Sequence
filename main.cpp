#include"Sequence.h"
#include<iostream>
#include"Sequence.h"
#include<iostream>
#include<string>
#include<ctime>
#include<iomanip>
using namespace std;

int main() {
	clock_t start,finish;
	Sequence sequence("/data/dna.txt");
	cout<<"The length of sequence is "<<sequence.length()<<endl;
	cout<<"A: "<<sequence.numberOf('A')<<endl;
	cout<<"C: "<<sequence.numberOf('C')<<endl;
	cout<<"T: "<<sequence.numberOf('T')<<endl;
	cout<<"G: "<<sequence.numberOf('G')<<endl;
	start=clock();
	cout<<"The longest consecutive sequence is: "<<endl;
	cout<<sequence.longestConsecutive()<<endl;
	double zhi=1000000;
	double time =(clock()-start)/zhi;
	cout<<"Time: "<<fixed<<setprecision(5)<<time<<"s"<<endl;
	start=clock();
        cout<<"The longest repeated sequence is: "<<endl<<sequence.longestRepeated()<<endl;
	time =(clock()-start)/zhi;
	cout<<"Time: "<<time<<"s"<<endl;
	return 0;
}

