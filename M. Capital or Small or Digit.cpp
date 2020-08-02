#include<bits/stdc++.h>
using namespace std;
int main(){
	char X;
	cin>>X;
	int check = int(X);
	if(check>=48 && check<=57){
		cout<<"IS DIGIT";
	}
	else if(check>=65 && check<=90){
		cout<<"ALPHA"<<endl;
		cout<<"IS CAPITAL";
	}
	else if(check>=97 && check<=122){
		cout<<"ALPHA"<<endl;
		cout<<"IS SMALL";
	}
}
