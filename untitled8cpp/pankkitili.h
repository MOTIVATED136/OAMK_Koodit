#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <QString>

class Pankkitili
{
protected:
    QString nimi;
    double saldo;

public:
    Pankkitili(const QString& n);

    virtual bool talleta(double s);
    virtual bool nosta(double s);

    double getSaldo() const;
};

#endif

