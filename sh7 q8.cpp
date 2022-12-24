#include<iostream>
using namespace std;
void fun(float [] , int );
int getSmallestIndex( float [] , int );

/////////////////////////////////////////////////
void arrin(float arr[], int Size){
	for(int i = 0 ; i< Size ; i++ ){
		cout<<"Enter  Number #"<<i+1<<" : ";
		cin>>arr[i];
	}
}
////////////////////////////////////////////////
int main(){
	float array[10];
	cout<<"Enter  10 Float Number \n";
	//8a
	arrin(array,10);
	fun(array,10);
	cout<<getSmallestIndex(array , 10);

}
void fun(float arr[] , int size){
	int x =0 ;
	for(int i = 0 ; i< size ; i++ ){
		if (arr[i]>= 5.5 ){
			x++;
		}
	}
	cout<<"There are "<<x<<" Numbers is greater than or equal 5.5\n";
}
//9
int getSmallestIndex( float arr[] , int Size ){
	float min = 9999999 ;
	int index ;
	for(int i = 0 ; i< Size ; i++ ){
	    if(arr[i]<min){
	    	min = arr[i];
	    	index = i ;
	    	
	    }
    }
    return index ;
}