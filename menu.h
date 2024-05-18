#ifndef MENU.H
#define MENU.H
#include "newFoods.h"
#include "details.h"
#include "playerClass.h"
#include "coffee.h"
#include <iostream>
#include <ctime>
#include <vector>

using namespace std;


void material_buy(Player* player,Food* foods)
{
    int z=0;
    int a=1;
    cout << "--------------------------------------------------" << endl;
    cout << "Your current materials are :" << endl;
    public_materials_list();
    cout << "--------------------------------------------------" << endl;
    cout << "Your current desserts are :" << endl;
    foods->dessert_menu();
    cout << "--------------------------------------------------" << endl;
    cout << "Your current snacks are :" << endl;
    foods->snack_menu();
    cout << "--------------------------------------------------" << endl;
    while (a == 1) {
        cout << "You have " << player->get_money() << " $ " << endl;
        cout << "Do you want to buy a new item" << endl << "1. Yes" << endl << "2. NO" << endl;
        cin >> a;
        loading_dots();
        cout << endl;
        cout << "--------------------------------------------------" << endl;
        if (a == 1) {
            cout << "What do you want to buy ?" << endl << "1. Coffee Material " << endl << "2. Dessert " << endl << "3. Snack" << endl;

            int selection;
            cin >> selection;
            loading_dots();
            cout << endl;
            cout << "--------------------------------------------------" << endl;
            if (selection == 1)
            {
                private_material();
                cout << "You have " << player->get_money() << " " << " $ " << endl << "do you want to buy this new material ?" << endl;
                cout << private_materials[0] << " : ";
                cout << private_material_price[0] << endl;
                cout << "0. Exit" << endl;
                cin >> x;
                loading_dots();
                if (x == 0) {
                    
                    continue;
                }
                if(player->get_money() - private_material_price[0] < 0)
                {
                    cout << endl <<"you don't have enough money to buy this item !!!" << endl;
                    continue;
                }
                cout << endl;
                add_material(player);
                private_coffee_list();
                add_list();

                /*Player.money-aldığının parası*/
                cout << "Material added. Current materials are : " << endl;
                cout << "--------------------------------------------------" << endl;
                for (z = 0;z < public_size;z++) {
                    cout << public_materials[z] << endl;
                }
                cout << endl << endl << "--------------------------------------------------" << endl << endl;
                public_coffee_list();
                cout << endl << endl << "--------------------------------------------------" << endl << endl;
                cout << "You have " << player->get_money() << " " << " $ " << endl;
                player->set_coffemax(player->get_coffemax() + 2);
            }
            else if (selection == 2) {
                cout << "You have " << player->get_money() << " $ " << endl << "do you want to buy this new dessert ?" << endl;
                foods->private_desserts();
                cout << foods->desserts_private[0] << " : " << foods->private_dessert_price[0] << endl;

                cout << "0. Exit" << endl;
                cin >> x;
                loading_dots();
                if (x == 0) {
                    continue;
                }
                if(player->get_money() - foods->private_dessert_price[0] < 0)
                {
                    cout << endl <<"you don't have enough money to buy this item !!!" << endl;
                    continue;
                }
                cout << endl;
                player->set_money(player->get_money() - foods->private_dessert_price[0]);
                foods->add_dessert_list();
                /*Player.money-aldığının parası*/
                cout << "Desert added. Current deserts are : " << endl;
                cout << "--------------------------------------------------" << endl;
                for (z = 0;z < foods->desserts_public_size;z++) {
                    cout << foods->desserts_public[z] << endl;
                }
                cout << endl << endl << "--------------------------------------------------" << endl << endl;
                cout << "You have " << player->get_money() << " $ " << endl;
            }
            else if (selection == 3) {
                foods->private_snacks();
                cout << "You have " << player->get_money() << " $ " << endl << "do you want to buy this new snack ?" << endl;
                cout << foods->snacks_private[0] << " : " << foods->private_snack_price[0] << endl;
                cout << "0. Exit" << endl;
                cin >> x;
                loading_dots();
                if (x == 0) {
                    continue;
                }
                if(player->get_money() - foods->private_snack_price[0] < 0)
                {
                    cout << endl <<"you don't have enough money to buy this item !!!" << endl;
                    continue;
                }
                player->set_money(player->get_money() - foods->private_snack_price[0]);
                foods->add_snack_list();
                cout << endl;
                cout << "Snack added. Current snacks are : " << endl;
                cout << "--------------------------------------------------" << endl;
                for (z = 0;z < foods->snacks_public_size;z++) {
                    cout << foods->snacks_public[z] << endl;
                }
                cout << "You have " << player->get_money() << " $ " << endl;
            }

        }

        else
        {
            cout << "You have " << player->get_money() << " $ " << endl;
        }
    }
}
#endif