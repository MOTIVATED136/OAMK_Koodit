#include "pankkitili.h"
#include <QTextStream>

Pankkitili::Pankkitili(const QString& n)
{
    nimi = n;
    saldo = 0;

    QTextStream out(stdout);
    out << "Pankkitili luotu " << nimi << "lle\n";
}

bool Pankkitili::talleta(double s)
{
    if (s <= 0)
        return false;

    saldo += s;

    QTextStream out(stdout);
    out << "Pankkitili: talletus " << s << " tehty\n";
    return true;
}

bool Pankkitili::nosta(double s)
{
    if (s <= 0 || s > saldo)
        return false;

    saldo -= s;

    QTextStream out(stdout);
    out << "Pankkitili: nosto " << s << " tehty\n";
    return true;
}

double Pankkitili::getSaldo() const
{
    return saldo;
}
