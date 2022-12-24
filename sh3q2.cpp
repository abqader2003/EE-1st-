#include <iostream>
using namespace std ;
int main() {
	char character ;
	int ascii ;
	cout<<"Enter a single Character: ";
	cin>>character ;
	cout<<"The ASCII code of F is : "<<int(character)<<endl ;
	if(character>='A' && character<='Z'){
		cout<<character<<" is a Capital alphabetical letter " ;
	}
	else if(character>='a' && character<='z'){
		cout<<character<<" is a  Small alphabetical letter " ;
	}
	else {
		cout<<character<<" is not an alphabetical letter" ;
	}
	
}