#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "Chef " << chefName << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << chefName << " destruktori" << endl;
}

int Chef::makeSalad(int ingredients) {
    return ingredients / 5;
}

int Chef::makeSoup(int ingredients) {
    return ingredients / 3;
}
