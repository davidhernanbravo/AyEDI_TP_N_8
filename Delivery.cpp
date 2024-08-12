/* Una empresa nos pide el armado de una App para la toma de pedidos, 
primero deberá presentar un menú de Opciones de 4 productos:
a) Simple b) Medio c) Calidad d) Premium
Luego nos deberá mostrar en menú de tipo de envío: 
1) Normal 2) Express 3) Fast Delivery
A posteriori deberá mostrar por consola el producto seleccionado y el tipo de envío que eligió.
Usar Funciones, manteniendo un Main lo “más pequeño posible”,
desacoplando las funcionalidades. Trabajar con la visibilidad de los operadores vistos, while Switch, If, etc.
*/

#include <iostream>
using namespace std;

// Definición de un tipo enumerado para los Productos.
enum Producto 
    {
        SIMPLE,
        MEDIO,
        CALIDAD,
        PREMIUM
    };

// Definición de un tipo enumerado para los tipos de Envío.
enum Envio 
    {
        NORMAL,
        EXPRESS,
        FAST_DELIVERY
    };

// Encabezado de Funciones.
Producto seleccionarProducto();
Envio seleccionarEnvio();
void mostrarSeleccion(Producto producto, Envio envio);

int main()
    {
        cout << "**************************************" << endl;
        cout << "SERVICIO DE DELIVERY EL PRECOZ DEL SUR" << endl;
        cout << "**************************************" << endl;
        cout << endl;

        Producto producto = seleccionarProducto();
        Envio envio = seleccionarEnvio();

        mostrarSeleccion(producto, envio);

        return 0;
    }

    // Función para mostrar el Menú de Productos y devolver la Selección del Usuario.
    Producto seleccionarProducto() 
        {
            int opcion;

            cout << "Selecciona el Producto:" << endl;
            cout << "----------------------" << endl;
            cout << "1) Simple" << endl;
            cout << "2) Medio" << endl;
            cout << "3) Calidad" << endl;
            cout << "4) Premium" << endl;
            cout << endl;
            cout << "Ingresa su opcion: ";
            cin >> opcion;
            cout << endl;

            switch (opcion) 
                {
                    case 1:
                        return SIMPLE;
                    case 2:
                        return MEDIO;
                    case 3:
                        return CALIDAD;
                    case 4:
                        return PREMIUM;
                    default:
                        cout << "Opcion no valida. Seleccionando Simple por defecto... y por Nabo..." << endl;
                        return SIMPLE;
                }
        }

    // Función para mostrar el Menú de tipos de Envío y devolver la selección del usuario.
    Envio seleccionarEnvio() 
        {
            int opcion;

            cout << "Selecciona el Tipo de Envio:" << endl;
            cout << "---------------------------" << endl;
            cout << "1) Normal" << endl;
            cout << "2) Express" << endl;
            cout << "3) Fast Delivery" << endl;
            cout << endl;
            cout << "Ingresa su opcion: ";
            cin >> opcion;
            cout << endl;

            switch (opcion) 
                {
                    case 1:
                        return NORMAL;
                    case 2:
                        return EXPRESS;
                    case 3:
                        return FAST_DELIVERY;
                    default:
                        cout << "Opcion no valida. Seleccionando Normal por defecto... defectuoso..." << endl;
                        return NORMAL;
                }
        }

    // Función para mostrar la selección del usuario
    void mostrarSeleccion(Producto producto, Envio envio) 
        {
            cout << "Tipo de Producto y Envio" << endl;
            cout << "------------------------" << endl;
            cout << "Producto seleccionado: ";
            switch (producto) 
                {
                    case SIMPLE:
                        cout << "Simple\n";
                        break;
                    case MEDIO:
                        cout << "Medio\n";
                        break;
                    case CALIDAD:
                        cout << "Calidad\n";
                        break;
                    case PREMIUM:
                        cout << "Premium\n";
                        break;
                }

            cout << "Tipo de envio seleccionado: ";
            switch (envio) 
                {
                    case NORMAL:
                        cout << "Normal\n";
                        break;
                    case EXPRESS:
                        cout << "Express\n";
                        break;
                    case FAST_DELIVERY:
                        cout << "Fast Delivery\n";
                        break;
                }
            cout << endl;
        }