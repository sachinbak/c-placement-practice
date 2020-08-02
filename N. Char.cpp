#include<bits/stdc++.h>
using namespace std;
int main(){
	char X, A, a;
	cin>> X;
	int ascii;
	ascii = int(X);
	if(ascii>=65 && ascii<=90){
		char A=char(ascii+32);
  		cout<<A;
	}
	else if(ascii>=97 && ascii<=122){
		char a=char(ascii-32);
  		cout<<a;
	}

}
