#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
private:
    double maxLuotto;

public:
    Luottotili(const QString& n, double raja);

    bool nosta(double s) override;
    bool talleta(double s) override;
};

#endif
