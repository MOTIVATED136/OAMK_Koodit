#include "luottotili.h"
#include <QTextStream>

Luottotili::Luottotili(const QString& n, double raja)
    : Pankkitili(n)
{
    maxLuotto = raja;
    saldo = raja;

    QTextStream out(stdout);
    out << "Luottotili luotu " << nimi
        << "lle, luottoraja " << maxLuotto << "\n";
}

bool Luottotili::nosta(double s)
{
    if (s <= 0 || saldo - s < 0)
        return false;

    saldo -= s;

    QTextStream out(stdout);
    out << "Luottotili: nosto " << s
        << " tehty, luottoa jaljella " << saldo << "\n";
    return true;
}

bool Luottotili::talleta(double s)
{
    if (s <= 0)
        return false;

    saldo += s;
    if (saldo > maxLuotto)
        saldo = maxLuotto;

    return true;
}

