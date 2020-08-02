#include<bits/stdc++.h>
using namespace std;
int main(){
	double dividend;
	double divisor;
	cin>> dividend>> divisor;
	cout<<"floor "<<dividend<<" / "<<divisor<<" = "<< floor(dividend/divisor)<<endl;
	cout<<"ceil "<<dividend<<" / "<<divisor<<" = "<< ceil(dividend/divisor)<<endl;
	cout<<"round "<<dividend<<" / "<<divisor<<" = "<< round(dividend/divisor)<<endl;
}
