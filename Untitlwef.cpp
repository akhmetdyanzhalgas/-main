#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	
	int a,arr[100];
	cin >> a;
	for( int i=0; i<a; i++){
		arr[i]= rand()%10;
	}
	for( int i=0; i<a; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
