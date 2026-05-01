#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int arr[100],n;
	cin>>n;
	for(int i=0; i<n; i++){
			arr[i] = rand()%10;		
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";			
	}
	cout<<endl;
	return 0;
}

