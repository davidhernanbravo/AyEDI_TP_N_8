/* Hacer un programa en C++ que ayude a una empresa a incrementar 
los salarios de los trabajadores de la siguiente manera:

	    Tipo de salario %
        -----------------
		De 0 a $9 000 20%
		De $9 000 a $15 000 10%
		De $15 000 a $20 000 5%
		Más de $20 000 3%
*/

#include <iostream>
using namespace std;

// Enumerador para las Categorías de Salario.
enum CategoriaSalario 
    {
        BAJO,
        MEDIO,
        ALTO,
        SUPERIOR
    };

// typedef para Salarios.
typedef double tSalario;

// Enunciando Funciones.
CategoriaSalario determinarCategoria(tSalario salario);
tSalario calcularNuevoSalario(tSalario salario);

int main()
    {
        tSalario salarioActual;

        cout << "********************************" << endl;
        cout << "AUMENTADOR DE SUELDOS COMPULSIVO" << endl;
        cout << "********************************" << endl;
        cout << endl;
        cout << "Ingrese el salario actual: ";
        cin >> salarioActual;
        cout << endl;

        tSalario nuevoSalario = calcularNuevoSalario(salarioActual);

        cout << "El nuevo salario es: $" << nuevoSalario << endl;
        cout << endl;
        cout << "***************************************************" << endl;
        cout << "ADVERTENCA: ESTO ES UNA SIMULACION..." << endl;
        cout << "QUE TU EMPLEADOR TE AUMENTE EL SUELDO ES UNA UTOPIA" << endl;
        cout << "***************************************************" << endl;
        return 0;
    }

   // Función para determinar la Categoría Salarial.
    CategoriaSalario determinarCategoria(tSalario salario)
        {
            if (salario <= 9000) 
                {
                    return BAJO;

                } else if (salario <= 15000) 
                    {
                        return MEDIO;

                    } else if (salario <= 20000) 
                        {
                            return ALTO;
                            
                        } else 
                            {
                                return SUPERIOR;
                            }
        }

    // Función para calcular el Nuevo Salario según Categoría.
    tSalario calcularNuevoSalario(tSalario salario) 
        {
            CategoriaSalario categoria = determinarCategoria(salario);

            tSalario incremento = 0.0;

            switch (categoria) 
                {
                    case BAJO:
                        incremento = salario * 0.20;
                        break;
                    case MEDIO:
                        incremento = salario * 0.10;
                        break;
                    case ALTO:
                        incremento = salario * 0.05;
                        break;
                    case SUPERIOR:
                        incremento = salario * 0.03;
                        break;
                }

            return salario + incremento;
        }