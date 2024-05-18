#ifndef DETAILS_H
#define DETAILS_H
#include <iostream>
#include <vector>
#include <ctime>
#include<thread>
#include<chrono>
#include "playerClass.h"
using namespace std;
vector<string> coffee_public;
vector<string>coffee_general;
vector<string>coffee_private;
vector<string> public_materials;
vector<string> private_materials;
vector<int>private_material_price;
vector<int> coffee_price;
int i;
int day = 1;
int public_size = 3;
int private_size = 3;
void general_coffee_list()/*burası bilmediği ama alabileceği kahveler*/ {
    coffee_general.push_back("Americano");
    coffee_general.push_back("Coffee Milk");


    coffee_price.push_back(5);
    coffee_price.push_back(6);

    cout << "Coffees Contain Two Material recipe and their price is :" << endl << "---------------------------------------" << endl << endl;
    cout << "1. Americano = Coffee Bean + Coffee Bean, and Its price is : 5$" << endl;
    cout << "2. Coffee Milk = Coffee Bean + Milk, and Its price is : 6 $" << endl << endl;
}
void public_coffee_list()/*buraya erişebildiği kahveler*/ {
    int y;
    cout << "Coffees Contain Three Material recipe and their price is :" << endl << "---------------------------------------" << endl << endl;
    for (y = 0;y < coffee_public.size();y++) {
        cout << coffee_public[y] << " : " << coffee_price[y] << " $ " << endl;
    }
}

void public_coffee_add()
{
            coffee_public.push_back("Frappe =  Coffee Milk + Coffee Bean");
            coffee_public.push_back("Cappuccino = Coffee Milk + Milk");
            coffee_public.push_back("Espresso = Americano + Coffee Bean");
            coffee_public.push_back("Latte = Americano + Milk");
            coffee_public.push_back("Honey Coffee = Americano + Honey");
            coffee_public.push_back("Honey Milk = Coffee Milk + Honey");

            coffee_price.push_back(8);
            coffee_price.push_back(8);
            coffee_price.push_back(8);
            coffee_price.push_back(8);
            coffee_price.push_back(10);
            coffee_price.push_back(10);
            coffee_price.push_back(15);
            coffee_price.push_back(15);
            coffee_price.push_back(17);
            coffee_price.push_back(17);
            coffee_price.push_back(20);
            coffee_price.push_back(20);
}
void private_coffee_list()/*buraya erişemediği kahveler*/ {

    coffee_private.push_back("Chocolate Coffee = Americano + Chocolate");
    coffee_private.push_back("Chocolate Latte = Coffee Milk + Chocolate");
    coffee_private.push_back("Caramel Coffee = Americano + Caramel");
    coffee_private.push_back("Caramel Latte = Coffee Milk + Caramel");
    coffee_private.push_back("Ginger Coffee = Americano + Ginger");
    coffee_private.push_back("Ginger Latte = Coffee Milk + Ginger");


}
void add_list() {
        coffee_public.push_back(coffee_private[0]);
        coffee_public.push_back(coffee_private[1]);
        coffee_private.erase(coffee_private.begin());
        coffee_private.erase(coffee_private.begin());

    }
void public_coffee_materials() {
    public_materials.push_back("Coffee Bean");
    public_materials.push_back("Milk");
    public_materials.push_back("Honey");
}
void public_materials_list()
{   
    int y;
    for (y = 0;y < public_materials.size();y++) {
        cout << y+1 << ". "<<public_materials[y] << endl;
    }

}
void private_material() {

    private_materials.push_back("Chocolate");
    private_materials.push_back("Caramel");
    private_materials.push_back("Ginger");

    private_material_price.push_back(30);
    private_material_price.push_back(40);
    private_material_price.push_back(50);
}
void add_material(Player* player) {
        public_materials.push_back(private_materials[0]);
        private_materials.erase(private_materials.begin());
        player->set_money(player->get_money() - private_material_price[0]);
        private_material_price.erase(private_material_price.begin());
        public_size++;
        private_size--;
    
}
#endif
