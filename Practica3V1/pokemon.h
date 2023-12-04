#ifndef POKEMON_H
#define POKEMON_H

#include <QObject>

class Pokemon : public QObject
{
    Q_OBJECT
public:
    explicit Pokemon(QObject *parent = nullptr);

signals:

};

#endif // POKEMON_H
