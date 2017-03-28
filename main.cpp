#include<iostream>
#include<fstream>
#include<cstdlib>
#include"elo.h"
using namespace std;
int main()
{
    ifstream infile("file.in",ios::in);
    if(!infile){
        cerr<<"failed opening"<<endl;
        exit(1);
    }
	ofstream outfile("file.out",ios::out);
	if(!outfile){
		cerr<<"failed opening"<<endl;
		exit(1);
	}
    int k,R_a,R_b;
    float S_a;
    infile>>k>>R_a>>R_b;
	Elo elo(k,R_a,R_b);
	outfile<<R_a<<"  "<<R_b<<endl;
	float mR_a,mR_b;
    while(infile>>S_a){
		elo.set_sa(S_a);
		elo.Ea();
		elo.Eb();
		elo.Ra();
		elo.Rb();
		outfile<<elo.getRa()<<"  "<<elo.getRb()<<endl;
    }
	return 0;
}
