//Gabriel Peytral Borja
//15/09/2021

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 char op;
 float x;
 float y;

 cout << "Este programa hace operaciones basicas entre dos numeros"<<endl;

 cout << "Primer numero:";
 cin >> x;
 cout << "Operacion:";
 cin >> op;
 cout << "Segundo numero:";
 cin >> y;

 if( op == '%'){
     cout << "Resultado:" <<endl;
     cout <<  x  << " % " <<  y  << " = " << fmod (x,y);
 }
 if( op == '+'){
     cout << "Resultado:" <<endl;
     cout <<  x  << " + " <<  y  << " = " << (x + y);
     }
 if( op == '-'){
     cout << "Resultado:" <<endl;
     cout <<  x  << " - " <<  y  << " = " << (x - y);
     }
 if( op == '*') {
     cout << "Resultado:" <<endl;
     cout <<  x  << " * " <<  y  << " = " << (x * y);
     }
 if( op == '/'){
     if (y !=0.0) {
         cout << "Resultado:" <<endl;
         cout <<  x  << " / " <<  y  << " = " << (x / y);
     }
     else {
            cout << "Resultado:" <<endl;
            cout << "No esta definido";
     }

     }

        return 0;
    }

