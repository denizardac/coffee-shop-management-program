#ifndef NEWFOODS_H
#define NEWFOODS_H
#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>


using namespace std;
int x;
void loading_dots()
{
    cout << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << ".";
    cout << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << ".";
    cout << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << ".";
    cout << endl;
}

class Food {
private:
    int food_price;

public:
        vector<string> desserts_public;
        vector<string>desserts_private;
        vector<string> snacks_public;
        vector<string> snacks_private;
        vector<int>public_dessert_price;
        vector<int>public_snack_price;
        vector<int>private_dessert_price;
        vector<int>private_snack_price;
        int desserts_private_size = 4;
        int desserts_public_size = 6;
        int snacks_private_size = 2;
        int snacks_public_size = 3;
        Food() {
            desserts_public.push_back("Brownie");
            desserts_public.push_back("Lemon Cheesecake");
            desserts_public.push_back("Raspberry Cheesecake");
            desserts_public.push_back("Brownie Cheesecake");
            desserts_public.push_back("Chocolate Cookie");
            desserts_public.push_back("Hazelnut Cookie");
            snacks_public.push_back("Croissant");
            snacks_public.push_back("Bagel");
            snacks_public.push_back("Ham Sandwich");
            public_dessert_price.push_back(10);
            public_dessert_price.push_back(12);
            public_dessert_price.push_back(12);
            public_dessert_price.push_back(12);
            public_dessert_price.push_back(7);
            public_dessert_price.push_back(7);
            public_snack_price.push_back(10);
            public_snack_price.push_back(12);
            public_snack_price.push_back(15);

        }

        int get_food_price() {return food_price;}
        void set_food_price(int price) {food_price = price;}

        void private_desserts() {
            desserts_private.push_back("Chocolate Donut");
            desserts_private.push_back("Caramel Donut");
            desserts_private.push_back("Strawberry Donut");
            desserts_private.push_back("Tiramisu");

            private_dessert_price.push_back(50);
            private_dessert_price.push_back(60);
            private_dessert_price.push_back(70);
            private_dessert_price.push_back(80);

        }
        void private_snacks() {
            snacks_private.push_back("Chocolate Croissant");
            snacks_private.push_back("Club Sandwich");

            private_snack_price.push_back(90);
            private_snack_price.push_back(100);
        }
        void add_dessert_list() {
                desserts_public.push_back(desserts_private[0]);
                desserts_private.erase(desserts_private.begin());
                private_dessert_price.erase(private_dessert_price.begin());
                desserts_private_size--;
                desserts_public_size++;
                public_dessert_price.push_back(15);
            
        }
        void add_snack_list() {
                snacks_public.push_back(snacks_private[0]);
                snacks_private.erase(snacks_private.begin());
                private_snack_price.erase(private_snack_price.begin());
                snacks_private_size--;
                snacks_public_size++;
                public_snack_price.push_back(17);
                
            
        }
        void dessert_menu()
        {
            int i;
            cout << "--------------------DESSERTS--------------------" << endl;
            for (i = 0;i < desserts_public.size();i++) {
                cout << i+1 << ". "<<desserts_public[i] << " " << public_dessert_price[i] << " $"<< endl;
            }
        }

        void private_dessert_menu()
        {
            int i;
            cout << "--------------------PRIVATE DESSERTS--------------------" << endl;
            for (i = 0;i < desserts_private.size();i++) {
                cout << i+1 << ". "<<desserts_private[i] << endl;
                cout << i + 1 << ". " << private_dessert_price[i] << endl;
            }
        }

        void private_snacks_menu()
        {
            int i;
            cout << "--------------------PRIVATE SNACKS--------------------" << endl;
            for (i = 0;i < snacks_private.size();i++) {
                cout << i+1 << ". "<<snacks_private[i] << endl;
                cout << i + 1 << ". " << private_snack_price[i] << endl;
            }
        }

        void snack_menu()
        {
            int i; 
            cout << "--------------------SNACKS--------------------" << endl;
            for (i = 0;i < snacks_public.size();i++) {
                cout << i+1 <<". "<<snacks_public[i] << " " << public_snack_price[i] << " $"<< endl;
            }
        }
        
        bool foodmenu() {
            int ordered_food;
            int x = time(0);
            srand(x);
            int control = 1 + rand() % 3;
            int y;
 

            if (control == 1) {
                loading_dots();
                cout << endl;
                cout << "Client Just Ordered Dessert" << endl;
                dessert_menu();
                y = rand() % desserts_public.size();
                loading_dots();
                cout << endl;
                cout << "Client Ordered " << desserts_public[y] << endl;
                cout << "give the ordered food: "; cin >> ordered_food;
                set_food_price(public_dessert_price[y]);
                return food_order(ordered_food,desserts_public[y]);

            }
            else if (control == 2) {
                bool control;
                int price;
                loading_dots();
                cout << endl;
                cout << "Client Ordered Dessert and Snack " << endl;
                loading_dots();
                dessert_menu();
                snack_menu();
                cout << endl;
                y = rand() % desserts_public.size();
                cout << "Client Ordered  " << desserts_public[y]<<endl;
                price = public_dessert_price[y];
                cout << "give the first ordered food: "; cin >> ordered_food;
                control = food_order(ordered_food,desserts_public[y]);
                y = rand() % snacks_public.size();
                cout <<" and " <<snacks_public[y] << endl;
                price += public_snack_price[y];
                cout << "give the second ordered food: "; cin >> ordered_food;
                set_food_price(price);
                return (food_order(ordered_food,snacks_public[y]) && control);
            }
            else {
                loading_dots();
                cout << endl;
                cout << "Client Just Ordered Snack" << endl;
                y = rand() % snacks_public.size();
                loading_dots();
                snack_menu();
                cout << endl;
                cout << "Client Ordered  " << snacks_public[y] << endl;
                cout << "give the ordered food: "; cin >> ordered_food;
                set_food_price(public_snack_price[y]);
                return food_order(ordered_food,snacks_public[y]);
            }
        }

        bool food_order(int x , string order)
        { 
            
            if(x==1 && order == snacks_public[x-1])
                return 1;
            else if(x==2 && order == snacks_public[x-1])
                return 1;
            else if(x==2 && order == snacks_public[x-1])
                return 1;
            else if(x==3 && order == snacks_public[x-1])
                return 1;
            else if(x==4 && order == snacks_public[x-1])
                return 1;
            else if(x==5 && order == snacks_public[x-1])
                return 1;
            else if(x==1 && order == desserts_public[x-1])
                return 1;
            else if(x==2 && order == desserts_public[x-1])
                return 1;
            else if(x==3 && order == desserts_public[x-1])
                return 1;
            else if(x==4 && order == desserts_public[x-1])
                return 1;
            else if(x==5 && order == desserts_public[x-1])
                return 1;
            else if(x==6 && order == desserts_public[x-1])
                return 1;
            else if(x==7 && order == desserts_public[x-1])
                return 1;
            else if(x==8 && order == desserts_public[x-1])
                return 1;
            else if(x==9 && order == desserts_public[x-1])
                return 1;
            else if(x==10 && order == desserts_public[x-1])
                return 1;
            else
                return 0;
            

        }



    };
#endif