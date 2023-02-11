#include<bits/stdc++.h>
using namespace std;

main(){
	ifstream Filein;
	Filein.open("PTIT.in", ios_base :: in);
	ofstream Fileout;
	Fileout.open("PTIT.out", ios_base :: out);
	string x;
	while(Filein >> x ){
		Fileout << x;
		Fileout << endl;
	}
	Fileout.close();
	Filein.close();
}

