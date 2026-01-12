#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    cout << "Ohjelma alkaa" << endl;

    Game game(40);
    game.play();

    cout << "Ohjelma loppui" << endl;
    return 0;
}
