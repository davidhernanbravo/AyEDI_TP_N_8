/* Hacer un programa en C++ que lea dos números x e y, luego hacer la diferencia x - y; 
si la diferencia es menor o igual a 10, entonces escribir todos los números comprendidos entre y y x.
*/

#include <iostream>
using namespace std;

// Definición typedef Entero.
typedef int tEntero;

// Enumerador para manejar las posibles situaciones.
enum Resultado 
{
    EXITO,
    DIFERENCIA_MAYOR_10,
    DIFERENCIA_NEGATIVA
};

// Prototipos de Funciones
tEntero LeerNumero(const string& mensaje);
Resultado ProcesarDiferencia(tEntero x, tEntero y);
void ImprimirNumerosEntre(tEntero menor, tEntero mayor);

int main() 
    {
        cout << "*************************" << endl;
        cout << "LA DIFERENCIA ENTRE X E Y" << endl;
        cout << "*************************" << endl;
        cout << endl;

        tEntero x = LeerNumero("Ingresa el primer numero (x): ");
        tEntero y = LeerNumero("Ingresa el segundo numero (y): ");
        cout << endl;

        Resultado resultado = ProcesarDiferencia(x, y);

        switch (resultado) 
            {
                case EXITO:
                    ImprimirNumerosEntre(min(x, y), max(x, y));
                    break;
                case DIFERENCIA_MAYOR_10:
                    cout << "La diferencia es mayor que 10. No se imprimen numeros." << endl;
                    break;
                case DIFERENCIA_NEGATIVA:
                    cout << "ERROR: La diferencia es negativa." << endl;
                    break;
            }
        cout << endl;
        cout << "***********************************************************" << endl;
        cout << "PROCURA SIEMPRE QUE TU X O Y TENGAN MUCHAS COSAS EN COMUN" << endl;
        cout << "SI TIENE ACTITUDES NEGATIVAS O HAY MUCHAS DIFERENCIAS HUYE!" << endl;
        cout << "              TU PAZ MENTAL NO SE NEGOCIA!!!" << endl;
        cout << "***********************************************************" << endl;
        cout << endl;
        return 0;
    }

    // Definición de Funciones.

    tEntero LeerNumero(const string& mensaje) 
        {
            tEntero numero;

            cout << mensaje;
            cin >> numero;

            return numero;
        }

    Resultado ProcesarDiferencia(tEntero x, tEntero y) 
        {
            tEntero diferencia = x - y;

            if (diferencia < 0) 
                {
                    return DIFERENCIA_NEGATIVA;

                } else if (diferencia > 10) 
                    {
                        return DIFERENCIA_MAYOR_10;

                    } else 
                        {
                            return EXITO;
                        }
        }

    void ImprimirNumerosEntre(tEntero menor, tEntero mayor) 
        {
            cout << "Los numeros comprendidos entre Y y X son:" << endl;
            cout << "----------------------------------------" << endl;

            for (tEntero i = menor; i <= mayor; ++i) 
                {
                    cout << i << " ";
                }
            cout << endl;
        }