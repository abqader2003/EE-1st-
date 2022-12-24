#include<iostream>
using namespace std;

int main(){
	int n , max;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i = 1 ; i <= n ; i++){
		int num ;
		cout<<"Enter The Number : ";
		cin>>num;
		if(num>max){
			max = num ;
		}
	}
	cout<<"The Laregest Number is "<<max;
	
}