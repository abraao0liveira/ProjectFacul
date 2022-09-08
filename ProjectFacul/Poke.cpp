#include<iostream>
#include<string>
#include<cstdlib>

#include"PokeLib.h"
using namespace std;

int main()
{
    pokemoniv x;
    pokemoniv z;
    rivalpk01 y;
    rivalpk02 w;

    string player;
    int pokemon01;
    int pokemon02;
    int move;
    int r = 0;

    int* ptr01;
    ptr01 = &x.hp;
    int* ptr02;
    ptr02 = &z.hp;

    int* rptr01;
    rptr01 = &y.rhp;
    int* rptr02;
    rptr02 = &w.rhp;

    int radom;
    srand(time(0));
    radom = 1 + rand() % 2;

    cout << "*****POKEMON*****" << endl << endl;

    cout << "Ola eu sou o Professor Oak, qual o seu nome?" << endl;
    cin >> player;

    while (r != 2)
    {
        cout << "PROFESSOR: " << player << " escolha seu pokemon para batalhar! Para escolher o Tyranitar precione(1), para escolher o Garchomp precione(2), para escolher o Dragonite precione(3) e para escolher o Metagross precione(4)." << endl;
        cin >> pokemon01;
        x.ini(pokemon01);

        cout << "PROFESSOR: " << player << " escolha outro pokemon para batalhar! Para escolher o Tyranitar precione(1), para escolher o Garchomp precione(2), para escolher o Dragonite precione(3) e para escolher o Metagross precione(4)." << endl;
        cin >> pokemon02;
        z.ini(pokemon02);

        switch (pokemon01)
        {
        case 1:
            x.hp = 100;
            y.rhp = 106;
            break;
        case 2:
            x.hp = 108;
            y.rhp = 106;
            break;
        case 3:
            x.hp = 91;
            y.rhp = 106;
            break;
        case 4:
            x.hp = 80;
            y.rhp = 106;
            break;
        default:
            cout << "Escolha (1, 2, 3 ou 4)" << endl;
        }

        switch (pokemon02)
        {
        case 1:
            z.hp = 100;
            w.rhp = 105;
            break;
        case 2:
            z.hp = 108;
            w.rhp = 105;
            break;
        case 3:
            z.hp = 91;
            w.rhp = 105;
            break;
        case 4:
            z.hp = 80;
            w.rhp = 105;
            break;
        default:
            cout << "Escolha (1, 2, 3 ou 4)" << endl;
        }

        cout << "PROFESSOR: Entao voce escolheu " << x.name << " e o " << z.name << "." << endl;

        cout << "PROFESSOR: Vamos comecar a batalha! Esse eh seu rival, ele se chama Blue." << endl << endl;
        cout << "****BATALHAR****" << endl << endl;

        cout << player << " jogou " << x.name << " para batalhar!" << endl;
        cout << "Blue jogou " << y.rname << " para batalhar!" << endl << endl;

        while (x.hp > 0 && y.rhp > 0)
        {
            cout << "Aperte (1) para usar " << x.nmove01 << " ou (2) para usar " << x.nmove02 << "." << endl;
            cin >> move;
            cout << endl;

            if (move == 1)
            {
                cout << x.name << " usou " << x.nmove01 << "!" << endl;
                int damage = ((x.attack - y.rdefense) + x.move01) - y.rhp;
                int newhprival = y.rhp - damage;
                *rptr01 = newhprival;
                cout << y.rname << " esta com " << y.rhp << " de hp." << endl << endl;

                if (y.rhp <= 0)
                {
                    cout << "Hp de " << y.rname << " chegou a 0!" << endl;
                    cout << "BLUE: Ainda temos mais uma batalha, isso nao acabou " << player << "!" << endl << endl;
                }

                if (y.rhp > 0)
                {
                    radom = 1 + rand() % 2;

                    if (radom == 1)
                    {
                        cout << y.rname << " usou " << y.rnmove01 << "!" << endl;
                        int rdamage = ((y.rattack - x.defense) + y.rmove01) - x.hp;
                        int newhp = x.hp - rdamage;
                        *ptr01 = newhp;
                        cout << x.name << " esta com " << x.hp << " de hp." << endl << endl;

                        if (x.hp <= 0)
                        {
                            cout << "Hp de " << x.name << " chegou a 0!" << endl;
                            cout << "BLUE: Vamos para a segunda batalha, isso ainda nao acabou!" << endl << endl;
                        }
                    }
                    if (radom == 2)
                    {
                        cout << y.rname << " usou " << y.rnmove02 << "!" << endl;
                        int rdamage = ((y.rattack - x.defense) + y.rmove02) - x.hp;
                        int newhp = x.hp - rdamage;
                        *ptr01 = newhp;
                        cout << x.name << " esta com " << x.hp << " de hp." << endl << endl;

                        if (x.hp <= 0)
                        {
                            cout << "Hp de " << x.name << " chegou a 0!" << endl;
                            cout << "BLUE: Vamos para a segunda batalha, isso ainda nao acabou!" << endl << endl;
                        }
                    }
                }
            }
            if (move == 2)
            {
                cout << x.name << " usou " << x.nmove02 << "!" << endl;
                int damage = ((x.attack - y.rdefense) + x.move02) - y.rhp;
                int newhprival = y.rhp - damage;
                *rptr01 = newhprival;
                cout << y.rname << " esta com " << y.rhp << " de hp." << endl << endl;

                if (y.rhp <= 0)
                {
                    cout << "Hp de " << y.rname << " chegou a 0!" << endl;
                    cout << "BLUE: Ainda temos mais uma batalha, isso nao acabou " << player << "!" << endl << endl;
                }

                if (y.rhp > 0)
                {
                    radom = 1 + rand() % 2;

                    if (radom == 1)
                    {
                        cout << y.rname << " usou " << y.rnmove01 << "!" << endl;
                        int rdamage = ((y.rattack - x.defense) + y.rmove01) - x.hp;
                        int newhp = x.hp - rdamage;
                        *ptr01 = newhp;
                        cout << x.name << " esta com " << x.hp << " de hp." << endl << endl;

                        if (x.hp <= 0)
                        {
                            cout << "Hp de " << x.name << " chegou a 0!" << endl;
                            cout << "BLUE: Vamos para a segunda batalha, isso ainda nao acabou!" << endl << endl;
                        }
                    }
                    if (radom == 2)
                    {
                        cout << y.rname << " usou " << y.rnmove02 << "!" << endl;
                        int rdamage = ((y.rattack - x.defense) + y.rmove02) - x.hp;
                        int newhp = x.hp - rdamage;
                        *ptr01 = newhp;
                        cout << x.name << " esta com " << x.hp << " de hp." << endl << endl;

                        if (x.hp <= 0)
                        {
                            cout << "Hp de " << x.name << " chegou a 0!" << endl;
                            cout << "BLUE: Vamos para a segunda batalha, isso ainda nao acabou!" << endl << endl;
                        }
                    }
                }
            }
        }

        cout << player << " jogou " << z.name << " para batalhar!" << endl;
        cout << "Blue jogou " << w.rname << " para batalhar!" << endl << endl;

        while (z.hp > 0 && w.rhp > 0)
        {
            cout << "Aperte (1) para usar " << z.nmove01 << " ou (2) para usar " << z.nmove02 << "." << endl;
            cin >> move;
            cout << endl;

            if (move == 1)
            {
                cout << z.name << " usou " << z.nmove01 << "!" << endl;
                int damage = ((z.attack - w.rdefense) + z.move01) - w.rhp;
                int newhprival = w.rhp - damage;
                *rptr02 = newhprival;
                cout << w.rname << " esta com " << w.rhp << " de hp." << endl << endl;

                if (w.rhp <= 0)
                    cout << "Hp de " << w.rname << " chegou a 0!" << endl;

                if (w.rhp > 0)
                {
                    radom = 1 + rand() % 2;

                    if (radom == 1)
                    {
                        cout << w.rname << " usou " << w.rnmove01 << "!" << endl;
                        int rdamage = ((w.rattack - z.defense) + w.rmove01) - z.hp;
                        int newhp = z.hp - rdamage;
                        *ptr02 = newhp;
                        cout << z.name << " esta com " << z.hp << " de hp." << endl << endl;

                        if (z.hp <= 0)
                            cout << "Hp de " << z.name << " chegou a 0!" << endl;
                    }
                    if (radom == 2)
                    {
                        cout << w.rname << " usou " << w.rnmove02 << "!" << endl;
                        int rdamage = ((w.rattack - z.defense) + w.rmove02) - z.hp;
                        int newhp = z.hp - rdamage;
                        *ptr02 = newhp;
                        cout << z.name << " esta com " << z.hp << " de hp." << endl << endl;

                        if (z.hp <= 0)
                            cout << "Hp de " << z.name << " chegou a 0!" << endl;
                    }
                }
            }
            if (move == 2)
            {
                cout << z.name << " usou " << z.nmove02 << "!" << endl;
                int damage = ((z.attack - w.rdefense) + z.move02) - w.rhp;
                int newhprival = w.rhp - damage;
                *rptr02 = newhprival;
                cout << w.rname << " esta com " << w.rhp << " de hp." << endl << endl;

                if (w.rhp <= 0)
                    cout << "Hp de " << w.rname << " chegou a 0!" << endl;

                if (w.rhp > 0)
                {
                    radom = 1 + rand() % 2;

                    if (radom == 1)
                    {
                        cout << w.rname << " usou " << w.rnmove01 << "!" << endl;
                        int rdamage = ((w.rattack - z.defense) + w.rmove01) - z.hp;
                        int newhp = z.hp - rdamage;
                        *ptr02 = newhp;
                        cout << z.name << " esta com " << z.hp << " de hp." << endl << endl;

                        if (z.hp <= 0)
                            cout << "Hp de " << z.name << " chegou a 0!" << endl;
                    }
                    if (radom == 2)
                    {
                        cout << w.rname << " usou " << w.rnmove02 << "!" << endl;
                        int rdamage = ((w.rattack - z.defense) + w.rmove02) - z.hp;
                        int newhp = z.hp - rdamage;
                        *ptr02 = newhp;
                        cout << z.name << " esta com " << z.hp << " de hp." << endl << endl;

                        if (z.hp <= 0)
                            cout << "Hp de " << z.name << " chegou a 0!" << endl;
                    }
                }
            }
        }
        if (x.hp > 0 && z.hp > 0)
        {
            cout << "BLUE: Parece que nao fui pareo para voce " << player << ", na proxima nao irei perder!" << endl;
            cout << "PROFESSOR: Parabens " << player << "!" << endl << endl;
        }
        else if (x.hp <= 0 && z.hp <= 0)
        {
            cout << "BLUE: Voce nao eh pareo para mim treinador!" << endl;
            cout << "VOCE PERDEU!" << endl << endl;
        }
        else if (x.hp > 0 && z.hp <= 0)
        {
            cout << "BLUE: Impates nao existem " << player << " na proxima nao deixarei isso acontecer!" << endl;
            cout << "PROFESSOR: Nao ligue pra isso, foi uma otima batalha!" << endl << endl;
        }
        else if (x.hp <= 0 && z.hp > 0)
        {
            cout << "BLUE: Impates nao existem " << player << " na proxima nao deixarei isso acontecer!" << endl;
            cout << "PROFESSOR: Nao ligue pra isso, foi uma otima batalha!" << endl << endl;
        }

        cout << player << " quer jogar novamente? Se sim, digite (1), caso nao, digite (2)." << endl;
        cin >> r;
        system("cls");
    }
    system("pause");
    return 0;
}