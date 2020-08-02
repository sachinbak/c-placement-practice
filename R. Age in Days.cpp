#include<bits/stdc++.h>
using namespace std;
int main(){
	long long num;
	int years,monthcal, months, days;
	cin>>num;
	years=num/365;
	monthcal=num%365;
	months=monthcal/30;
	days=monthcal%30;
	cout<<years <<" years"<<endl;
	cout<<months <<" months"<<endl;
	cout<<days <<" days";

}
