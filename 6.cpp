#include <iostream>
using namespace std;

class Player
{
private:
    string name;
    static int totalPlayers;

public:
    Player(string n)
    {
        name = n;
        totalPlayers++;
    }

    ~Player()
    {
        totalPlayers--;
    }

    static void showPlayers()
    {
        cout << "Total Players: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main()
{
    Player::showPlayers();

    {
        Player p1("Ali");
        Player p2("Ahmed");
        Player p3("Sara");

        Player::showPlayers();
    }
    Player p4("Ahmed"); 
    Player::showPlayers();

    return 0;
}
