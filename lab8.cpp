#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
 using namespace std;
 int main(){
    srand(time(0));
    int arr[100][100], a,n;
    cin>>a>>n;
    for( int i=0; i<a;i++){
    	for( int j=0;j<n; j++)
    	arr[i][j]=rand()%19-3;
    	
	}
	for( int i=0; i<a;i++){
    	for( int j=0;j<n; j++){
    		  cout<< setw(3)<<arr[i][j]<<" ";
		}
    	cout<< endl;
	}
		
    return 0;
 }













//200 + rand() % 101- 200-300 сан шыгарады
// rand() % 41 - 20-20 мен20 арасындагы сандар,
//0.01 * (rand() % 101)- 0.01-мен 1-ге дейін.


// массив элементтеринин косындысын шыгару керек;
//int arr[5] = {4, 2, 1, 7, -1};
// int sum = 0;
// for (int i = 0; i < 5; i++) {
//    sum += arr[i];
// }
// cout << sum;



//  массив тек жуп сандар шыгарады 
//int arr[5] = {4, 2, 1, 7, -1};
// for (int i = 0; i < 5; i++) {
//    if (arr[i] % 2 == 0) {
//        cout << arr[i] << " ";
//   }
//}

// массив тек 3 ке болинети сандарады шарады
//int arr[5] = {21, 19, 15, 7, -1};
// int count = 0;
// for (int i = 0; i < 5; i++) {
//    if (arr[i] % 3 == 0) {
//        count ++;
//    }
// }
// cout << count;

//массив узындыгы
//int numbers[] = {1, 7, 22, 10};
// cout << "Length: " << sizeof(numbers) / sizeof(numbers[0]);    // Length: 4
// int array_size = size(numbers);
// cout << array_size;  

//массив элементтерин алу  жане озгерту
//int arr[4] = {1, 5, 10, 47};
// cout << arr[0];                        
// cout << arr[3];


