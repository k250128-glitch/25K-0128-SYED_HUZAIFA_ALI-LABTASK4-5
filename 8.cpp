#include <iostream>
using namespace std;

class Weapon
{
private:
    string weaponName;
    int damage;

public:
    void setWeapon()
    {
        cout << "Enter Weapon Name: " << endl;
        getline(cin, weaponName);

        cout << "Enter Damage: " << endl;
        cin >> damage;
        cin.ignore();
    }

    void showWeapon() const
    {
        cout << "Weapon: " << weaponName << endl;
        cout << "Damage: " << damage << endl;
    }
};

class Player
{
private:
    string playerName;
    int health;
    Weapon weapon;
    static int activePlayers;

public:
    Player()
    {
        activePlayers++;
    }

    ~Player()
    {
        activePlayers--;
    }

    void setPlayer()
    {
        cout << endl << "Enter Player Name: " << endl;
        getline(cin, playerName);

        cout << "Enter Health: " << endl;
        cin >> health;
        cin.ignore();

        weapon.setWeapon();
    }

    void showStatus() const
    {
        cout << endl << "Player: " << playerName << endl;
        cout << "Health: " << health << endl;
        weapon.showWeapon();
        cout << "Active Players: " << activePlayers << endl;
    }

    static void showActivePlayers()
    {
        cout << endl << "Total Active Players: " << activePlayers << endl;
    }
};

int Player::activePlayers = 0;

int main()
{
    {
        Player players[3];

        for(int i = 0; i < 3; i++)
            players[i].setPlayer();

        for(int i = 0; i < 3; i++)
            players[i].showStatus();

        Player::showActivePlayers();
    }

    cout << endl << "After block ends:" << endl;
    Player::showActivePlayers();

    return 0;
}
