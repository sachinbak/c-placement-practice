#include<bits/stdc++.h>
using namespace std;
int main(){
	long long A, B, check, checka;
	cin>>A>>B;
	check=B%A;
	checka=A%B;
	if(check==0 || checka==0){
		cout<<"Multiples";
	}
	else
	{
		cout<<"No Multiples";
	}

	
}
