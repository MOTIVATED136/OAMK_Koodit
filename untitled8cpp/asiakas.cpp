#include "asiakas.h"
#include <QTextStream>

Asiakas::Asiakas(const QString& n, double lr)
    : nimi(n),
    pt(n),
    lt(n, lr)
{
    QTextStream out(stdout);
    out << "Asiakkuus luotu " << nimi << "\n\n";
}

void Asiakas::showSaldo() const
{
    QTextStream out(stdout);
    out << "Kayttotilin saldo " << pt.getSaldo() << "\n";
    out << "Luottotilin saldo " << lt.getSaldo() << "\n\n";
}

bool Asiakas::talletus(double s)
{
    return pt.talleta(s);
}

bool Asiakas::nosto(double s)
{
    return pt.nosta(s);
}

bool Asiakas::luottoNosto(double s)
{
    return lt.nosta(s);
}

bool Asiakas::tiliSiirto(double s, Asiakas& a2)
{
    QTextStream out(stdout);
    out << nimi << " siirtaa " << s << " " << a2.nimi << "lle\n";

    if (pt.nosta(s)) {
        a2.talletus(s);
        return true;
    }
    return false;
}


