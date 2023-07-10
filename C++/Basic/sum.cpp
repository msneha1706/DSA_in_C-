#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum=1,sum1=-2;
	for(int i=3;i<=1000;i++){
		if(i%2==0){
			sum1=sum1-i;
		}else{
			sum=sum+i;
		}
	}
	cout<<sum<<" "<<sum1;
}
