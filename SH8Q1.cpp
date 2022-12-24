#include<iostream>
#include<iomanip>
using namespace std ;

void initMatrix(int [][3] , int);
void displayMatrix(int [][3] , int);
int getSum(int [][3] , int);
int getLargest(int [][3] , int);
void getTranspose(int [][3] , int [][3] , int );
void printRowsSum(int [][3] , int);
void isSymmetric(int [][3] , int );

int main(){
	int A[3][3], transpose_A[3][3];
	//a//h1
	initMatrix(A , 3);
	//b//h2
	displayMatrix(A , 3);
	//c//h6
	cout<<"\nThe summation of the matrix elements = "<<getSum(A , 3)<<endl;
	//d//h5
	cout<<"\nThe Largest of the matrix elements = "<<getLargest(A , 3)<<endl;
	//e//h3
	getTranspose(A , transpose_A , 3 );
	//e//h4
	displayMatrix(transpose_A , 3);
	cout<<"\n";
	//f//h7
	printRowsSum(A , 3);
	//g//h8
	isSymmetric(A , 3);
	return 0 ;
}
//a
void initMatrix(int arr[][3] , int size){
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			cout<<"Enter the Number "<<i+1<<" , "<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
	cout<<"\n";
}
//b
void displayMatrix(int arr[][3] , int size){
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			cout<<setw(3)<<arr[i][j];
			if(j<2){
				cout<<"  |";
			}
		}
	    if(i<2){
			cout<<"\n-----+-----+-----\n";
		}	
	}
	
}
//c
int getSum(int arr[][3] , int size){
	int sum = 0 ;
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			sum += arr[i][j];
		}
	}
	return sum ;
}
//d
int getLargest(int arr[][3] , int size){
	int largest = 0 ;
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			if (largest < arr[i][j]){
				largest = arr[i][j];
			}
			
		}
	}
	return largest ;
}
//e
void getTranspose(int arr[][3] , int arrtran[][3] , int size){
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			arrtran[i][j] = arr[j][i];
		}
	}
}
//f
void printRowsSum(int arr[][3] , int size){
	for (int i = 0 ; i<size ; i++){
		int sum = 0 ;
		for(int j = 0 ; j<3 ; j++ ){
			sum += arr[i][j];
		}
		cout<<"Summation of  Row #"<<i+1<<" = "<<sum<<endl;
	}
}
//g
void isSymmetric(int arr[][3] , int size){
	for (int i = 0 ; i<size ; i++){
		for(int j = 0 ; j<3 ; j++ ){
			if(arr[i][j] != arr[j][i]){
				cout<<"It is not a symmetric matrix";
				return ;
			}	
		}
	}
	cout<<"It is a symmetric matrix";
}




