#include<iostream>
using namespace std;

int main(){
	int sum = 0 ;
	for(int i = 100 ; i<=500 ; i++){
		if(i%7 == 0){
			sum += i ;
		}
	}
	cout<<"The Result is "<<sum;
}