// =================================================================
//
// File: main.cpp
// Author: Ricardo Sierra Roa - A01709887
// Date: 06/10/2023
//
// =================================================================

#include <iostream>
#include <list>

using namespace std;

int survivor(int n, int k) {
    list<int> survivors;
    list<int>::iterator it;

    for (int i = 1; i <= n; i++){
        survivors.push_back(i); //crear fila con la cantidad de personas
    }

    survivors.push_front(survivors.back()); 
    survivors.pop_back();

    while (survivors.size() > 1) {

        //Funcion para eliminar elemento
        for (int i = 1; i < k+1; i++) {
            survivors.push_back(survivors.front()); //mandar el elemento del frente al final
            survivors.pop_front(); //eliminar el elemento del frente 
        }
        survivors.pop_front(); //eliminar el elemento del frente

        //Funcion para recorrer elemento a la posicion de elemento eliminado
        it = survivors.begin(); //Declarar iterador para recorrer la lista
        advance(it, (k-1)); //Avanzar el iterador hasta llegar a la posicon deseada
        survivors.splice(survivors.begin(), survivors, it); //Utilizar el metodo splice para mover el elemento al inicio
        
        for (const int& elemento : survivors) {
            cout << elemento << " ";
        }
        cout << endl;

    }

    return survivors.front(); //regresar el sobreviviente
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << survivor(n, k) << endl;
    return 0;
}
