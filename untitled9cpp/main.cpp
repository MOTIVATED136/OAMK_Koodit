#include <QCoreApplication>
#include <QString>
#include <QDebug>


class Seuraaja {
private:
    QString nimi;
public:
    Seuraaja* next;

    Seuraaja(const QString& n) : nimi(n), next(nullptr) {
        qDebug() << "Luodaan seuraaja" << n;
    }

    void paivitys(const QString& viesti) {
        qDebug() << nimi << "sai viestin" << viesti;
    }

    QString getNimi() const {
        return nimi;
    }
};

class Notifikaattori {
private:
    Seuraaja* alku;
public:
    Notifikaattori() : alku(nullptr) {
        qDebug() << "Luodaan notifikaattori";
    }

    void lisaa(Seuraaja* s) {
        if (!s) return;
        s->next = alku;
        alku = s;
        qDebug() << "Notifikaattori lisaa seuraajan" << s->getNimi();
    }

    void poista(const QString& nimi) {
        Seuraaja* edellinen = nullptr;
        Seuraaja* nykyinen = alku;

        while (nykyinen) {
            if (nykyinen->getNimi() == nimi) {
                if (!edellinen)
                    alku = nykyinen->next;
                else
                    edellinen->next = nykyinen->next;
                return;
            }
            edellinen = nykyinen;
            nykyinen = nykyinen->next;
        }
    }

    void tulosta() {
        qDebug() << "Notifikaattorin seuraajat:";
        Seuraaja* o = alku;
        while (o) {
            qDebug() << o->getNimi();
            o = o->next;
        }
    }

    void postita(const QString& viesti) {
        qDebug() << "Notifikaattori postaa viestin" << viesti;
        Seuraaja* o = alku;
        while (o) {
            o->paivitys(viesti);
            o = o->next;
        }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Notifikaattori n;

    Seuraaja sA("Seuraaja A");
    Seuraaja sB("Seuraaja B");
    Seuraaja sC("Seuraaja C");

    n.lisaa(&sA);
    n.lisaa(&sB);
    n.lisaa(&sC);

    n.tulosta();

    n.postita("Tama on viesti 1");

    n.poista("Seuraaja B");

    n.postita("Tama on viesti 2");

    return 0;
}

