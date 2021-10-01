/*
 * Gabriel Peytral Borja
 * Práctica Gauss-Jordan
 * 01/10/2021
 */

#include <iostream>
#include <array>


// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    cout << "Solucion:" <<endl;
    for(int i = 0; i < variables; i++){
        cout <<"x" << i << " = "<< miMatriz[i][variables] << endl;
        }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
   double pivote;  // pivote para resolver el sistema
   double auxiliar; // toma el valor de lo que queramos hacer cero
   int index; // índices de las posiciones
   double mayor; // encontrar mayores


   int variables = miMatriz.size();     // le damos valor a la variable variables
// buscamos el índice más grande con un ciclo for anidado que nos permita recorrer la matriz
    for(int i = 0; i < variables; i++ ){
        mayor = abs(miMatriz[i][i]);
        index = i;

        for(int j = i + 1; j < variables; j++){
            if(mayor < abs(miMatriz[j][i])){
                mayor = abs(miMatriz[j][i]);
                index = j;
            }
        }
        // Identificamos el auxiliar
        if(i != index){
            for(int k = 0; k < variables + 1; k++){
                auxiliar = miMatriz[i][k];
                miMatriz[i][k] = miMatriz[index][k];
                miMatriz[index][k] = auxiliar;
            }
        }
        // consideramos el caso de tener una fila de ceros (infinitas soluciones)
        if(miMatriz[i][i] == 0){
            cout << "Sin solución" << endl;
        }
        else{

            for(int k = 0; k < variables; k++){             // se resuelve
                if (k != i){
                    pivote = -miMatriz[k][i];

                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] + pivote * miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else{
                    pivote = miMatriz[i][i];
                    for(int l = i; l < variables + 1; l++){
                        miMatriz[k][l] = miMatriz[k][l] / pivote;
                    }
                }
            }
        }
    }
}