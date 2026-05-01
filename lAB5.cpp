#include <iostream>
#include <cmath>
using namespace std;
int main(){
  setlocale(LC_ALL,"Russian");
  char dir;
  cout<< " please enter direction ";
  cin>>dir;
  int com ;
  cout << "please enter command \n";
  cin >> com;
  string result;
   switch(dir){ 

   case 'C':
     switch(com){ 
     case 0:
       result= " север";
         break;
       case 1:
       result = " запад ";
         break;
       case 2:
         result ="восток";
         break;
     }
     break;
      case 'W':    
     switch(com){ 
     case 0:
       result= " юг";
         break;
       case 1:
       result = " восток  ";
         break;
       case 2:
         result ="зопод";
         break;
       }
       break;
     case 'V':    
     switch(com){ 
      
     case 0:
       result= " восток ";
         break;
       case 1:
       result = " север  ";
         break;
       case 2:
         result ="юг";
         break;
       }
       break;
       case 'Z':    
     switch(com){ 
      
     case 0:
       result= " зопод ";
         break;
       case 1:
       result = "  юг";
         break;
       case 2:
         result ="север";
         break;
     }
     break;
   }
   cout<<result;

  return 0;
}
