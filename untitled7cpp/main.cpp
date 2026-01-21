#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {

    Chef chef1("Gordon");
    cout << "Chef Gordon with 11 items can make salad "
         << chef1.makeSalad(11) << " portions" << endl;
    cout << "Chef Gordon with 14 items can make soup "
         << chef1.makeSoup(14) << " portions" << endl;

    cout << endl;

    ItalianChef chef2("Mario");
    cout << "Chef Mario with 9 items can make salad "
         << chef2.makeSalad(9) << " portions" << endl;

    chef2.askSecret("pizza", 12, 12);

    return 0;
}
