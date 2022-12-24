#include<iostream>
#include<cstring>
using namespace std;
void arrout(char arr[], int Size){
	for(int i = 0 ; i< Size ; i++ ){
		cout<<arr[i]<<"   ,  ";
	}
}
int main(){
	char name[100];
	char c ;

	cout<<"Enter Your Name : ";
	cin>>name;
	cout<<"Enter Character : ";
	cin>>c;
	
	for(int i = 0 ; i<= strlen(name) ; i++){
		if (name[i] == c){
			cout<<" exist ";
			return 0 ;
		}
	}
	cout<<"do not exist ";
	return 0;
}