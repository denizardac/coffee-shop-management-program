#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <iostream>
using namespace std;
class Player {
private:
    int Health;
    int Day=1;
    int Money = 0;
    int coffemax=7;
public:
    Player() : Health(3) {}
    int get_money() {
        return Money;
    }
    void set_money(int money) {
        Money = money;
    }
    int get_day() {
        return Day;
    }
    void set_day(int day) {
        Day = day;
    }
    int get_coffemax() {return coffemax;}
    void set_coffemax(int x) {coffemax=x;}

    void game() {
        if (Health > 1) {
            Health--;
            cout << "You Lose a Health. Your Current Heath Is : " << Health << endl;
        }
        else  {
            Health--;
            cout << "You Lose a Health. Your Current Heath Is : " << Health << endl;
            cout << "--------------------GAME IS OVER--------------------"<<endl;
            exit(0);
        }
    }

    int getHealth() const {
        return Health;
    }
};
#endif
