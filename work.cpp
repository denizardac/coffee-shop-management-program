#include "coffee.h"
#include "newFoods.h"
#include "details.h"
#include "menu.h"
#include "playerClass.h"
#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include <cstdlib> 


using namespace std;

void gameplay(Player player, Food food)
{
    Food* foodpntr;
    foodpntr = &food;

    Player* playerpointer;
    playerpointer = &player;
    int musterisayisi_default = 2;
    int musterisayisi = 2;
    int first_material;
    int second_material;
    int third_material;
    public_coffee_add();
    public_coffee_materials();
    vector<bool> p_choice_control;
    vector<string> temp;
    temp.push_back("hot");
    temp.push_back("cold");

    vector<int> customer_choice = { 1,2,3,4 }; // 1 = düz kahve , 2 = malzemeli kahve , 3 = düz kahve ve yiyecek, 4 = malzemeli kahve ve yiyecek


    do {
        cout << "Day :" << player.get_day() << " is beginning." << endl;
        loading_dots();
        cout << "Your current health :" << player.getHealth() << endl;
        cout << endl;

        for (;musterisayisi > 0; musterisayisi--)
        {



            int choice = customer_choice[rand() % 4];

            string hc = temp[rand() % 2];

            if (choice == 1 && hc == "hot")
            {

                hot_coffee coffee;
                const coffee_names& hot_coffees = coffee.getHotCoffees();

                int x = rand() % 2;
                string customer_coffee = hot_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();
                public_materials_list();
                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, customer_coffee) == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x));
                }
                else
                    player.game();

            }

            else if (choice == 1 && hc == "cold")
            {
                cold_coffee coffee;
                const coffee_names& cold_coffees = coffee.getColdCoffees();

                int x = rand() % 2;
                string customer_coffee = cold_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();

                public_materials_list();
                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, customer_coffee) == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x));
                }
                else
                    player.game();

            }

            if (choice == 2 && hc == "hot")
            {

                hot_coffee coffee;

                const coffee_names& hot_coffees = coffee.getHotCoffees();

                int x = rand() % (player.get_coffemax() - 2 + 1) + 2;
                // To generate a random number between min and max, use:
                //int randNum = rand()%(max-min + 1) + min;  (Includes max and min)
                string customer_coffee = hot_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();
                public_coffee_list();

                public_materials_list();

                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                cout << " Third slot: "; cin >> third_material;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, third_material, customer_coffee) == 1)
                {
                    cout << endl << "Right order!! " << endl << "You gained " << coffee.get_price(x) << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x));
                }
                else
                    player.game();

            }

            else if (choice == 2 && hc == "cold")
            {
                cold_coffee coffee;
                const coffee_names& cold_coffees = coffee.getColdCoffees();

                int x = rand() % (player.get_coffemax() - 2 + 1) + 2;
                string customer_coffee = cold_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();
                public_coffee_list();

                public_materials_list();

                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                cout << " Third slot: "; cin >> third_material;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, third_material, customer_coffee) == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x));
                }
                else
                    player.game();

            }


            if (choice == 3 && hc == "hot")
            {

                hot_coffee coffee;
                const coffee_names& hot_coffees = coffee.getHotCoffees();

                int x = rand() % 2;
                string customer_coffee = hot_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();

                public_materials_list();
                loading_dots();
                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;

                cout << "I also will buy some food " << endl;
                loading_dots();




                if (coffee.make_coffee(first_material, second_material, customer_coffee) == 1 && food.foodmenu() == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) + food.get_food_price() << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x) + food.get_food_price());
                }
                else
                    player.game();

            }

            else if (choice == 3 && hc == "cold")
            {
                cold_coffee coffee;
                const coffee_names& cold_coffees = coffee.getColdCoffees();

                int x = rand() % 2;
                string customer_coffee = cold_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();

                public_materials_list();

                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                loading_dots();
                cout << "I also will buy some food " << endl;

                loading_dots();
                if (coffee.make_coffee(first_material, second_material, customer_coffee) == 1 && food.foodmenu() == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) + food.get_food_price() << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x) + food.get_food_price());
                }
                else
                    player.game();

            }

            if (choice == 4 && hc == "hot")
            {

                hot_coffee coffee;
                const coffee_names& hot_coffees = coffee.getHotCoffees();

                int x = rand() % (player.get_coffemax() - 2 + 1) + 2;
                string customer_coffee = hot_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();
                public_coffee_list();

                public_materials_list();

                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                cout << " Third slot: "; cin >> third_material;
                loading_dots();
                cout << "I also will buy some food " << endl;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, third_material, customer_coffee) == 1 && food.foodmenu() == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) + food.get_food_price() << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x) + food.get_food_price());
                }
                else
                    player.game();

            }

            else if (choice == 4 && hc == " cold")
            {
                cold_coffee coffee;
                const coffee_names& cold_coffees = coffee.getColdCoffees();

                int x = rand() % (player.get_coffemax() - 2 + 1) + 2;
                string customer_coffee = cold_coffees.coffee_n[x];

                cout << "I want " << customer_coffee << endl;
                loading_dots();
                general_coffee_list();
                public_coffee_list();

                public_materials_list();

                cout << "Make the coffee: " << endl << "First slot: ";
                cin >> first_material;
                cout << " Second slot: "; cin >> second_material;
                cout << " Third slot: "; cin >> third_material;
                loading_dots();
                cout << "I also will buy some food " << endl;
                loading_dots();
                if (coffee.make_coffee(first_material, second_material, third_material, customer_coffee) == 1 && food.foodmenu() == 1)
                {
                    cout << endl << "Right order!! " << endl << "you gained " << coffee.get_price(x) + food.get_food_price() << " $" << endl;
                    player.set_money(player.get_money() + coffee.get_price(x) + food.get_food_price());
                }
                else
                    player.game();

            }



        }
        material_buy(playerpointer, foodpntr);
        musterisayisi_default += 2;
        musterisayisi = musterisayisi_default;
        player.set_day(player.get_day() + 1);
    } while (true);

}


int main()
{
    Player player;
    Food food;
    srand(time(0));
    gameplay(player, food);

    return 0;
}