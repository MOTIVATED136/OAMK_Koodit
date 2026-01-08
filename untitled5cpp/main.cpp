#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxLuku)
{
    int salLuku;
    int arv;
    int arvLkm = 0;
    salLuku = rand() % maxLuku + 1;
    do
    {
        cout << "Arvaa luku (1-" << maxLuku << "): ";
        cin >> arv;
        arvLkm++;
        if (arv < salLuku)
        {
            cout << "Liian pieni!" << endl;
        }
        else if (arv > salLuku)
        {
            cout << "Liian suuri!" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
        }

    } while (arv != salLuku);
    return arvLkm;
}

int main()
{
    srand(time(0));
    int arvaustenMaara;
    arvaustenMaara = game(40);
    cout << "Arvasit oikein " << arvaustenMaara << " yrityksellä." << endl;
    return 0;
}
