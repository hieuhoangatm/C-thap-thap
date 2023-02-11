#include<bits/stdc++.h>
using namespace std;
int n,c[100][100],x[100],chuaxet[100],kq[100];
int MIN=0;
int a=1;

void Init(){
	cout<<"\n Nhap n="; cin>>n;
	cout<<"\n Nhap chi phi \n";
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++){
	    if(i!=j){
	     cout<<"c["<<i<<"]["<<j<<"]="; cin>>c[i][j];
	     }
	     else c[i][j]=0;
      }
	 x[1]=1;
	 for(int i=2;i<=n;i++)  chuaxet[i]=1;
}

void Result(){
    cout<<"\n T1->";
    for(int i=2;i<=n;i++) cout<<"T"<<kq[i]<<"->";
    cout<<"T1";
    cout<<"\n Tong chi phi la: "<<MIN;
}

void Work(){
    int S=0;
    for(int i=1;i<=n-1;i++){
        S=S+c[x[i]][x[i+1]];
    }
    S=S+c[x[n]][1];
     if(S<MIN||a==1){ 
	 	a=0;
        MIN=S;
        for(int i=1;i<=n;i++) kq[i]=x[i];
    }
}

void Try(int i){
    for(int j=2;j<=n;j++){
        if(chuaxet[j]){
            x[i]=j; chuaxet[j]=0;
            if(i==n) Work();
            else Try(i+1);
            chuaxet[j]=1;
        }
    }
}
main(){
   Init();
   Try(2);
   Result();
   //getch();
}
