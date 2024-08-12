// Hacer un programa en C++ que convierta centímetros a pulgadas, Celsius a Fahrenheit y libras a kilogramos.

#include <iostream>
using namespace std;

// Enumeración para cada Tipo de Conversión y Salida del programa.

enum TipoConversion 
    {
        CENTIMETROS_A_PULGADAS,
        CELSIUS_A_FAHRENHEIT,
        LIBRAS_A_KILOS,
        SALIR
    };

// Encabezado de Funciones.

double convertirCentimetrosAPulgadas(double centimetros);
double convertirCelsiusAFahrenheit(double celsius);
double convertirLibrasAKilos(double libras);
TipoConversion obtenerTipoConversion();

int main()
    {
        double valor;
        TipoConversion TipoConversion;

        do
            {
                TipoConversion = obtenerTipoConversion();

                switch(TipoConversion) 
                    {
                        case CENTIMETROS_A_PULGADAS:
                            cout << "CONVERSOR DE CENTIMETROS A PULGADAS" << endl;
                            cout << "-----------------------------------" << endl;
                            cout << "Ingresa el valor en Centimetros: ";
                            cin >> valor;
                            cout << endl;
                            cout << valor << " cm es igual a " << convertirCentimetrosAPulgadas(valor) << " pulgadas." << endl;
                            break;

                        case CELSIUS_A_FAHRENHEIT:
                            cout << "CONVERSOR DE CELCIUS A FAHRENHEIT" << endl;
                            cout << "---------------------------------" << endl;
                            cout << "Ingresa el valor en Grados Celsius: ";
                            cin >> valor;
                            cout << endl;
                            cout << valor << " C es igual a " << convertirCelsiusAFahrenheit(valor) << " F." << endl;
                            break;

                        case LIBRAS_A_KILOS:
                            cout << "CONVERSOR DE LIBRAS A KILOGRAMOS" << endl;
                            cout << "--------------------------------" << endl;
                            cout << "Ingresa el valor en Libras: ";
                            cin >> valor;
                            cout << endl;
                            cout << valor << " libras es igual a " << convertirLibrasAKilos(valor) << " kg." << endl;
                            break;

                        case SALIR:
                            cout << "SALIENDO DEL PROGRAMA.. HASTA LA VISTA BABY...";
                            cout << endl;
                            break;
                    }

                cout << endl;

            } while(TipoConversion != SALIR);

        return 0;
    }

    // Función para Convertir Centímetros a Pulgadas

    double convertirCentimetrosAPulgadas(double centimetros) 
        {
            return centimetros / 2.54;
        }

    // Función de Conversón de Celcius a Fahrenheit.

    double convertirCelsiusAFahrenheit(double celsius) 
        {
            return (celsius * 9.0 / 5.0) + 32;
        }

    // Función que Convierte Libras a Kilogramos.

    double convertirLibrasAKilos(double libras) 
        {
            return libras * 0.453592;
        }

    // Función que muestra el Menú y levanta la Selección del Usuario.

    TipoConversion obtenerTipoConversion() 
        {
            int opcion;

            cout << "******************************" << endl;
            cout << "CONVIRTIENDO DE TODITO UN POCO" << endl;
            cout << "******************************" << endl;
            cout << endl;

            cout << "Selecciona el Tipo de Conversion:" << endl;
            cout << "--------------------------------" << endl;
            cout << "1. Centimetros a Pulgadas" << endl;
            cout << "2. Celsius a Fahrenheit" << endl;
            cout << "3. Libras a Kilogramos" << endl;
            cout << "4. Salir" << endl;
            cout << endl;
            cout << "Ingrese su eleccion: ";
            cin >> opcion;
            cout << endl;
            
            switch(opcion) 
                {
                    case 1: 
                        return CENTIMETROS_A_PULGADAS;
                    case 2: 
                        return CELSIUS_A_FAHRENHEIT;
                    case 3: 
                        return LIBRAS_A_KILOS;
                    case 4: 
                        return SALIR;
                    default:
                        cout << "Opcion No Valida Zoquete!";
                        return obtenerTipoConversion();
                }
        }