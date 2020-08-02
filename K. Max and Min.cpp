#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int A, B ,C;
	cin>>A>>B>>C;
	{
	if(A<=B && A<=C){
		cout<<A;
	}
	else if(B<=A && B<=C){
		cout<<B;
	}
	else {

		cout<<C;
	}
	}
	cout<<" ";
	{
	if(A>=B && A>=C){
		cout<<A;
	}
	else if(B>=A && B>=C){
		cout<<B;
	}
	else {

		cout<<C;
	}
	}

}
