#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "pankkitili.h"
#include "luottotili.h"

class Asiakas
{
private:
    QString nimi;
    Pankkitili pt;
    Luottotili lt;

public:
    Asiakas(const QString& n, double lr);

    void showSaldo() const;

    bool talletus(double s);
    bool nosto(double s);

    bool luottoNosto(double s);
    bool tiliSiirto(double s, Asiakas& a2);
};

#endif
