#include<iostream>
#include<string>

using namespace std;

class pokemoniv
{
public:
    int attack{}, defense{}, hp{}, move01{}, move02{};
    string name, nmove01, nmove02;
    void ini(int pk);
};
void pokemoniv::ini(int pk)
{
    if (pk == 1)
    {
        name = "Tyranitar";
        nmove01 = "Crunch";
        nmove02 = "Hyper beam";
        attack = 134;
        defense = 110;
        hp = 100;
        move01 = 80;
        move02 = 150;
    }
    if (pk == 2)
    {
        name = "Garchomp";
        nmove01 = "Dragon Claw";
        nmove02 = "Earthquake";
        attack = 130;
        defense = 95;
        hp = 108;
        move01 = 80;
        move02 = 100;
    }
    if (pk == 3)
    {
        name = "Dragonite";
        nmove01 = "Fly";
        nmove02 = "Outrage";
        attack = 134;
        defense = 95;
        hp = 91;
        move01 = 90;
        move02 = 120;
    }
    if (pk == 4)
    {
        name = "Metagross";
        nmove01 = "Shadow Ball";
        nmove02 = "Psychic";
        attack = 135;
        defense = 130;
        hp = 80;
        move01 = 80;
        move02 = 90;
    }
}
class rivalpk01
{
public:
    string rname = "Mewtwo";
    string rnmove01 = "Psychic";
    string rnmove02 = "Swift";
    int rattack = 154;
    int rdefense = 90;
    int rhp = 106;
    int rmove01 = 110;
    int rmove02 = 60;
};
class rivalpk02
{
public:
    string rname = "Rayquaza";
    string rnmove01 = "Outrage";
    string rnmove02 = "Dragon Pulse";
    int rattack = 150;
    int rdefense = 90;
    int rhp = 105;
    int rmove01 = 120;
    int rmove02 = 85;
};