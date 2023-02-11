#include<bits/stdc++.h>
using namespace std;

string chuan(string name){
	stringstream ss(name);
	string res = "";
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++) res += tolower(token[i]);
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}
struct SinhVien{
	string ma,ten,lop,ns;
	double gpa;
};
int cnt=0;
void nhap(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cnt++;
		string tmp=to_string(cnt);
		tmp=string(3-tmp.size(),'0')+tmp;
		a[i].ma="B20DCCN"+tmp;
		cin.ignore();
		getline(cin,a[i].ten);
		//chuan(a[i].ten);
		cin >> a[i].lop >> a[i].ns >> a[i].gpa;
		if(a[i].ns[2] != '/' ) a[i].ns= "0"+a[i].ns;
		if(a[i].ns[5] != '/') a[i].ns= a[i].ns.insert(3,"0");
	}
}

void in(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].ma <<" "<<chuan(a[i].ten)<<" "<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

//1
//nguyen   vaN   BiNH
//D20CQCN01-B
//2/12/2002
//3.1

