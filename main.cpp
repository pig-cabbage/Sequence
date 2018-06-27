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
	cout<<"The longest consecutive sequence is: "<<endl<<sequence.longestConsecutive()<<endl;
	cout<<fixed<<setprecision(6);
	start=clock();
	cout<<"Time: "<<setprecision(5)<<(clock()-start)/1000<<"s"<<endl;
	start=clock();
        cout<<"The longest repeated sequence is: "<<endl<<sequence.longestRepeated()<<endl;
	cout<<"Time: "<<setprecision(5)<<(clock()-start)/1000<<"s"<<endl;
	return 0;
}

