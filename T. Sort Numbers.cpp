#include<bits/stdc++.h>
using namespace std;
int main(){
	float A, B, C;
	cin>>A>>B>>C;

	if(A>B && A>C){
		cout<<A<<endl;
		if(B>C){
			cout<<B<<endl;
			cout<<C<<endl;
		}
		else{
			cout<<C<<endl;
			cout<<B<<endl;
		}
	}
	if(B>A && B>C){
		cout<<B<<endl;
		if(A>C){
			cout<<A<<endl;
			cout<<C<<endl;
		}
		else{
			cout<<C<<endl;
			cout<<A<<endl;
		}
	}
	if(C>A && C>B){
		cout<<C<<endl;
		if(B>A){
			cout<<B<<endl;
			cout<<A<<endl;
		}
		else{
			cout<<A<<endl;
			cout<<B<<endl;
		}
	}
	cout<<" \n";
	if(A<B && A<C){
		cout<<A<<endl;
		if(B<C){
			cout<<B<<endl;
			cout<<C<<endl;
		}
		else{
			cout<<C<<endl;
			cout<<B<<endl;
		}
	}
	if(B<A && B<C){
		cout<<B<<endl;
		if(A<C){
			cout<<A<<endl;
			cout<<C<<endl;
		}
		else{
			cout<<C<<endl;
			cout<<A<<endl;
		}
	}
	if(C<A && C<B){
		cout<<C<<endl;
		if(B<A){
			cout<<B<<endl;
			cout<<A<<endl;
		}
		else{
			cout<<A<<endl;
			cout<<B<<endl;
		}
	}
	
	
}
