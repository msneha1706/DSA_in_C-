#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int i=0;
	int bit=0;
	
	while(n!=0){
		
		int a;
		int rem=n%2;
		n=n>>1;
		
		if(rem==0){
			a=1;
		}else{
			a=0;
		}
		
		bit=(a*pow(10,i))+bit;
		i++;
	}
	
	while(bit!=0){
		
		int carry=0;
		if(bit&1){
			bits=0;
			carry=1;
		}
	}
	
	cout<<bit;
	
	
	return 0;
}
