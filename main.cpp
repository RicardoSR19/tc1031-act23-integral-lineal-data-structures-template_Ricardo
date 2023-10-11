// =================================================================
//
// File: main.cpp
// Author: Ricardo Sierra Roa - A01709887
// Date: 10/10/2023
//
// =================================================================

#include <iostream>
#include <list>

using namespace std;


// =================================================================
// Funcion para determinar sobreviviente y posteriormente posicion 
// donde se debe colocar para sobrevivir dada n personas y k numero 
// de personas para realizar conteo
//
// @param n numero de peronas y k numero de personas
// @return posicion de inicio segura
// @Complexity	O(n^2)
// =================================================================
int survivor(int n, int k) {
    list<int> survivors;
    list<int>::iterator it;
    int aux, position;

    for (int i = 1; i <= n; i++){
        survivors.push_back(i);
    }

    while (survivors.size() > 1) { //@Complexity O(n^2)

        //Recorrer lista y eliminar elemento k
        for (int i = 1; i < k; i++) {
            survivors.push_back(survivors.front());
            survivors.pop_front();
        }
        survivors.pop_front();

        //Encontrar elemento k que se reacomodara
        for (int i = 1; i < k; i++) {
            survivors.push_back(survivors.front()); 
            survivors.pop_front();
        }
        
        //Guardar elemento que se reacomodara en una variable
        aux = survivors.front();
        survivors.pop_front();
        
        //Reacomodar lista para continuar eliminacion posterior
        for (int i = 1; i < k; i++) {
            survivors.push_front(survivors.back()); 
            survivors.pop_back();
        }
        
        //Insertar elemento k en la posicion del elemento previamente eliminado
        survivors.push_back(aux);
    }

    //Calcular posicion de inicio segura
    position = (n - survivors.front()) + 2;
    
    //Casos especiales
    if(survivors.front()==1){
        return 1;
    }else{
        return position;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << survivor(n, k); //@Complexity O(n^2)
    return 0;
}