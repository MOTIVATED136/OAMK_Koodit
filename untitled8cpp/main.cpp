#include <QCoreApplication>
#include "Asiakas.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Asiakas aapeli("Aapeli", 1000);
    aapeli.showSaldo();

    aapeli.talletus(250);
    aapeli.luottoNosto(150);
    aapeli.showSaldo();

    Asiakas bertha("Bertha", 1000);
    bertha.showSaldo();

    aapeli.tiliSiirto(50, bertha);

    aapeli.showSaldo();
    bertha.showSaldo();

    return 0;
}

