#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
main(){
	int t; cin >> t;
	while(t--){
		double xa, ya , xb , yb , xc, yc;
		cin >> xa >> ya >> xb >> yb >> xc >> yc;
		
		double ab = sqrt( pow((xb-xa),2) + pow((yb-ya),2) ) ;
		double bc = sqrt( pow((xc-xb),2) + pow((yc-yb),2) ) ;
		double ca = sqrt( pow((xa-xc),2) + pow((ya-yc),2) ) ;
		double A=ab;
		double B=bc;
		double C=ca;
		//cout << A << B << C << endl;
		if(A+B > C && B+C >A && A+C > B){
			//cout << A << " "<< B << " "<<C << endl;
			double s= 0.25 * sqrt( (A+B+C) * (A+B-C) * (B+C-A) * (C+A-B) );
			double r= (A*B*C)/(4*s);
			double tich= PI * r * r;
			cout <<  fixed << setprecision(3) << tich << endl;
	    }
	    else cout <<"INVALID\n";
    }
}

