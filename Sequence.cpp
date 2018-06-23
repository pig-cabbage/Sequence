#include"Sequence.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

Sequence::Sequence(string filename){
	freopen(filename,"r",stdin);
	string line;
	getline(cin,line);
	all=line;
	while(getline(cin,line)){
	line.erase(0,0);
	all+=line;
	}
}
int Sequence::length(){
	return all.size();
}
int Sequence::numberOf(char base){
	long long number=count(all.begin(),all.end(),base);
	return number;
}
string Sequence::longestConsecutive(){
	string consecutive;
	long a_number=0,c_number=0,g_number=0,t_number=0;
	long a_pos=0;c_pos=0,g_pos=0,t_pos=0;
	for(int i=0;i<all.size();++i){
		if(all[i]=='A'){
			long pos=i;
			a_number?=1;
			while(all[++i]=='A')
				++a_number?;
			if(a_number?>=a_number){
				a_number=a_number?;
				a_pos=pos;
				}
			--i;
			}
		 if(all[i]=='C'){
                        c_number?=1;
			long pos=i;
                        while(all[++i]=='C')
                                ++c_number?;
			if(c_number?>=c_number){
				c_number=c_number?;
				c_pos=pos;
				}	
                        --i;
                        }

		 if(all[i]=='T'){
                        t_number?=1;
			long pos=i;
                        while(all[++i]=='T')
                                ++t_number?;
			if(t_number?>=t_number){
				t_number=t_number?;
				t_pos=pos;
				}
                        --i;
                        }
		 if(all[i]=='G'){
                        g_number?=1;
			long pos=i;
                        while(all[++i]=='G')
                                ++g_number?;
			if(g_number?>=g_number){
				g_number=g_number?;
				g_pos=pos;
				}
                        --i;
                        }

		
		}
	
		if(a_number>=c_number&&a_number>=t_number&&a>=g_number)
			return consecutive='A'*a_number;
		if(c_number>=a_number&&c_number>=t_number&&c_number>=g_number)
			return consecutive='C'*c_number;
		if(t_number>=a_number&&t_number>=c_number&&t_number>=g_number)
			return consecutive='T'*t_number;
		if(g_number>=a_number&&g_number>=c_number&&g_number>=t_number)
			return consecutive='G'*g_number;
	}
string Sqquence::longestRepeated(){
		string repeated;
		int maxlen=0;
		int finalpos;
		for(int i=0;i<all.size();++i){
			int pos=i;
			for(int j=i+1;j<all.size();++j){
				int thislen=0;
				while(all[i]==all[j]&&i<j){
					++thislen;
					++i;
					}
				if(thislen>=maxlen){
					maxlen=thislen;
					finalpos=pos;
					}
				}
			}

	
		
		return repeated=all.substr(final,maxlen);
		}
