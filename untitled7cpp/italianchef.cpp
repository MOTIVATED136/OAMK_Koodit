#include "italianchef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name)
    : Chef(name), password("pizza") {
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

int ItalianChef::makePizza(int flour, int water) {
    return min(flour / 5, water / 5);
}

bool ItalianChef::askSecret(string givenPassword, int flour, int water) {
    if (password.compare(givenPassword) == 0) {
        cout << "Password ok!" << endl;
        int pizzas = makePizza(flour, water);
        cout << "ItalianChef " << chefName
             << " with " << flour << " flour and "
             << water << " water can make "
             << pizzas << " pizzas" << endl;
        return true;
    }
    return false;
}


