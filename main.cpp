#include"Sequence.h"
#include<iostream>
#include<string>

using namespace std;

int main(){
	Sequence sequence("/data/dna.txt");
	sequence.length();
	sequence.numberOf('A');
	sequence.numberOf('C');
	sequence.numberOf('T');
	sequence.numberOf('G');
	sequence.longestConsecutive();
	sequence.longestRepeated();
	return 0;
}
