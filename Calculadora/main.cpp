//Gabriel Peytral Borja
//15/09/2021

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 char op;
 float x;
 float y;

 cout << "Basic calculator";

 cout << "Enter first number:";
 cin >> x;
 cout << "Choose operator (+,-,*,%,/):";
 cin >> op;
 cout << "Enter second number:";
 cin >> y;

 if( op == '%'){
     cout << x << "%" << y << "=" << fmod (x,y);
 }
 if( op == '+'){
     cout << x << "+" << y << "=" << (x + y);
     }
 if( op == '-'){
     cout << x << "-" << y << "=" << (x - y);
     }
 if( op == '*') {
     cout << x << "*" << y << "=" << (x * y);
     }
 if( op == '/'){
     if (y !=0.0) {
         cout << x << "/" << y << "=" << (x / y);
     }
     else {
            cout << "Not defined";
     }

     }

        return 0;
    }

