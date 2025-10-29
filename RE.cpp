#include <iostream>
#include <string>

using namespace std;


int main(){

     int a;

     do{
          cout << "Enter your number: ";
          cin >> a;
          if(a % 2 == 0){
               cout << a << " is even." << endl;
          }
          else{
               cout << a << " is odd." << endl;
          }
     }while(a != 5);
     
     return 0;
}