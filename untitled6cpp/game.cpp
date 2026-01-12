#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNumber)
{
    cout << "Game alkaa" << endl;

    this->maxNumber = maxNumber;
    guesses = 0;

    srand(time(0));
    randomNumber = rand() % maxNumber + 1;

    cout << "Satunnainen luku luotu" << endl;
}

void Game::play()
{
    cout << "Peli käynnissä" << endl;

    int guess;

    do
    {
        cout << "Arvaa luku (1-" << maxNumber << "): ";
        cin >> guess;
        guesses++;

        if (guess < randomNumber)
        {
            cout << "Liian pieni!" << endl;
        }
        else if (guess > randomNumber)
        {
            cout << "Liian suuri!" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
        }

    } while (guess != randomNumber);

    printGameResult();
}

void Game::printGameResult()
{
    cout << "Peli loppui" << endl;
    cout << "Oikea luku oli " << randomNumber << endl;
    cout << "Arvauksia yhteensä " << guesses << endl;
}

