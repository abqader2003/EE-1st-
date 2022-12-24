#include<iostream>
using namespace std;
void calu(int ,int ,char );
int main(){
	int n1 , n2 ;
	char op ;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	cout<<"choose the operator (+, -, *, /): ";
	cin>>op;
	calu(n1,n2,op);
}
void calu(int n1 , int n2 , char op){
	switch(op)
	{
		case '*': 
		    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
		    break;
		case '/': 
		    cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
		    break;
		case '+': 
		    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
		    break;
		case '-': 
		    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
			break;			
	}
}