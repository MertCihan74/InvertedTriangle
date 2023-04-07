// 02.10.2020
#include <iostream>
using namespace std;
int main(){
	int sayi;
	cout<<"Please enter a number"<<endl;
	cin>>sayi;
	for(int s=1;s<=sayi;s++){
		for(int b=1;b<s;b++)
		cout<<" ";
	    for(int p=1;p<=sayi-s+1;p++)
	    cout<<"*";
	    	cout<<endl;
	}
	cout<<endl;
	 
	
}
