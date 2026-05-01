#include <iostream>
using namespace std;
int main(){
	int a,arr[1000],sum=0;
	cin>>a;
	for( int i=0; i<a; i++){
		cin>>arr[i];
	}
	for( int i=0; i<a; i++){
		if(i%2==1);
		sum=sum+arr[i];
	}
	cout<<" " <<sum<<" ";
	
	
	return 0;
}
