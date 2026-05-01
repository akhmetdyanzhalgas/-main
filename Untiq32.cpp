#include <iostream>
 #include <cstdlib>
 #include <ctime>
 using namespace std;
 int main(){
    int arr[10],sum1 =0;
    for (int i = 0; i < 10; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
	}
	 for (int i = 0; i < 10; i++){
	 	if(arr[i]%2==1){
	 		sum1=sum1+arr[i];
		 }
	 }
	 cout<<" tak sandar kosydysy"<<sum1<<" "<<endl;
	 
      return 0;
 }
  
