#include<bits/stdc++.h>
using namespace std;

int main(){
	
	for(int i=1;i<=5;i++){
		
		for(int j=5-i;j>=1;j--){
			cout<<" ";
		}
		
		for(int k=1;k<=i;k++){
			cout<<"*";
		}
		
		for(int l=1;l<i-1;l++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	//Ulta Pyramid
	/*for(int i=0;i<=5;i++){

        for(int j=0;j<=i;j++){
            cout<<" ";
        }

        for (int k=5-i;k>=0;k--){
            cout<<"*";
        }
        
        for (int k=5-i-1;k>=0;k--){
            cout<<"*";
        }


        cout<<"\n";
    }*/
    
    /*for(int i=2;i<7;i++){
    	for(int j=1;j<i-1;j++){
    		if(i%2==0){
    			if(j%2==0){
    				cout<<1;
				}else{
					cout<<0;
				}
			}else{
				if(j%2==0){
    				cout<<0;
				}else{
					cout<<1;
				}
			}
		}
		cout<<"\n";
	}*/
}
