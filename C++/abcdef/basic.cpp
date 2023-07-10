#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int a=0;
	int b=1;
	
	cout<<a<<","<<b;
	int i=1;
	while( i<=n){
		int c=a+b;
		cout<<c<<",";
		a=b;
		b=c;
		i++;
		
	}
	
	return 0;
}
