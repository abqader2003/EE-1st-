#include<iostream>
using namespace std;
void arrin(int [], int );
void arrrev(int [],int [], int);
float arravr( int [] , int );
int arrmax( int [] , int );
void arrsortas( int [] , int );
void arrout(int [], int );

int main(){
	//3
	const int Size = 5;
	int arr[Size] ;
	int are[Size] ;
	cout<<"Enter 5 Numbers . \n";
	arrin(arr, Size);
    arrrev(arr ,are, Size);
    cout<<arravr(arr,Size )<<endl;
    cout<<arrmax(arr,Size )<<endl;
    arrout(arr,Size);
    cout<<"\n\n";
    arrsortas(arr,Size);
    arrout(arr,Size);
}
//4a
void arrin(int arr[], int Size){
	for(int i = 0 ; i< Size ; i++ ){
		cout<<"Enter  Number #"<<i+1<<" : ";
		cin>>arr[i];
	}
}
void arrout(int arr[], int Size){
	for(int i = 0 ; i< Size ; i++ ){
		cout<<arr[i]<<"   ,  ";
	}
}
//4b
void arrrev(int arr1[],int arr2[], int Size){
	for(int i = 0 ; i< Size ; i++ ){
		arr2[i]=arr1[4-i];
	}	
}
//5
float arravr( int arr[] , int Size ){
	float sum = 0 , avr ; 
	for(int i = 0 ; i< Size ; i++ ){
	sum += arr[i] ;
    }
    avr =sum/Size;
    return avr;
}
//6
int arrmax( int arr[] , int Size ){
	int max = 0 ;
	for(int i = 0 ; i< Size ; i++ ){
	    if(arr[i]>max){
	    	max = arr[i];
	    }
    }
    return max;
}
//7
void arrsortas( int arr[] , int Size ){
	bool swap;
	do{
		swap = false ;
		for(int i = 0 ;i<(Size-1) ;i++){
			if(arr[i]>arr[i+1]){
				int temp =0 ;
				temp = arr[i] ;
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap = true;
				
			}
		}
	}while(swap);

}