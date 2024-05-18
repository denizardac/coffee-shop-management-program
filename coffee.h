#ifndef COFFEE_H
#define COFFEE_H
#include "details.h"
#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <string>
#include <vector>

using namespace std;


struct coffee_names
{
    vector<string> coffee_n;
    vector <int> is_it_first_time;
    vector<int> prices; 
    const std::string& operator[](size_t index) const {
        return coffee_n[index];
    }
};

class coffee{

    protected:
        vector<string> materials;
    
    public:

        coffee(){
            materials.insert(materials.end(), {"coffee_bean","milk","honey","chocolate","caramel","ginger"});
        }

        ~coffee(){};

};

class hot_coffee:public coffee{
    private:
        coffee_names hot_coffees;
    
    public:

        hot_coffee(){
            hot_coffees.coffee_n.insert(hot_coffees.coffee_n.end(),{"hot americano","hot coffe milk","hot frappe","hot cappuccino","hot espresso","hot latte","hot honey coffee"
                                                                    , "hot honey milk"
                                                                    ,"Chocolate Coffee"
                                                                    ,"hot Chocolate Latte"
                                                                    ,"hot Caramel Coffee"
                                                                    ,"hot Caramel Latte"
                                                                    ,"hot Ginger Coffee"
                                                                    ,"hot Ginger Latte"});//Deniz listeine göre isimler eklenicek.
            hot_coffees.prices.insert(hot_coffees.prices.end(),{5,6,8,8,8,8,10,10,15,15,17,17,20,20});                                                       
            hot_coffees.is_it_first_time.insert(hot_coffees.is_it_first_time.end(),{1,1,0,0,0,0,0,0,0,0,0,0,0,0}); //kahve keşfedilmediyse 0 keşfedildiyse 1
        }

        const coffee_names& getHotCoffees() const {
            return hot_coffees;
        }

        int get_price(int x) {return hot_coffees.prices[x];}

        bool make_coffee(int x,int y, int z,string customer) //coffee with material
        {   
            if(x==1 && y==1 && z==1 && hot_coffees.coffee_n[4] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " =  " << hot_coffees.coffee_n[4] << endl; //Espresso = Americano + Coffee Bean
                if(hot_coffees.is_it_first_time[4] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[4];
                    hot_coffees.is_it_first_time[4] = 1;
                }
                return 1;
            }

            else if(x==1 && y==1 && z==2 && hot_coffees.coffee_n[5] == customer )
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[5] << endl;
                if(hot_coffees.is_it_first_time[5] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[5];
                    hot_coffees.is_it_first_time[5] = 1;
                }
                return 1;
            }

            else if(x==1 && y==2 && z==1 && hot_coffees.coffee_n[2] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[2] << endl;
                if(hot_coffees.is_it_first_time[2] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[2];
                    hot_coffees.is_it_first_time[2] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==2 && hot_coffees.coffee_n[3] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[3] << endl;
                if(hot_coffees.is_it_first_time[3] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[3];
                    hot_coffees.is_it_first_time[3] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==3 && hot_coffees.coffee_n[6] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[6] << endl;
                if(hot_coffees.is_it_first_time[6] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[6];
                    hot_coffees.is_it_first_time[6] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==3 && hot_coffees.coffee_n[7] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[7] << endl;
                if(hot_coffees.is_it_first_time[7] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[7];
                    hot_coffees.is_it_first_time[7] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==4 && hot_coffees.coffee_n[8] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[8] << endl;
                if(hot_coffees.is_it_first_time[8] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[8];
                    hot_coffees.is_it_first_time[8] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==4 && hot_coffees.coffee_n[9] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[9] << endl;
                if(hot_coffees.is_it_first_time[9] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[9];
                    hot_coffees.is_it_first_time[9] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==5 && hot_coffees.coffee_n[10] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[10] << endl;
                if(hot_coffees.is_it_first_time[10] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[10];
                    hot_coffees.is_it_first_time[10] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==5 && hot_coffees.coffee_n[11] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[11] << endl;
                if(hot_coffees.is_it_first_time[11] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[11];
                    hot_coffees.is_it_first_time[11] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==6 && hot_coffees.coffee_n[12] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[12] << endl;
                if(hot_coffees.is_it_first_time[12] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[12];
                    hot_coffees.is_it_first_time[12] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==6 && hot_coffees.coffee_n[13] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << hot_coffees.coffee_n[13] << endl;
                if(hot_coffees.is_it_first_time[13] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[13];
                    hot_coffees.is_it_first_time[13] = 1;
                }
                return 1;

            }
            else
                return 0;
        }

        bool make_coffee(int x,int y, string customer) //simple coffee
        {   
            if(x==1 && y==1 && hot_coffees.coffee_n[0] == customer)
            {
                cout << materials[x-1] <<" and " << materials[y-1] << " =  " << hot_coffees.coffee_n[0] << endl;
                if(hot_coffees.is_it_first_time[0] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[0];
                    hot_coffees.is_it_first_time[0] = 1;
                }
                return 1;
            }

            else if(x==1 && y==2 && hot_coffees.coffee_n[1] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " =  " << hot_coffees.coffee_n[1] << endl;
                if(hot_coffees.is_it_first_time[1] == 0)
                {
                    cout << "congrats !! you have discovered : " << hot_coffees.coffee_n[1];
                    hot_coffees.is_it_first_time[1] = 1;
                }
                return 1;
            }

            else
                return 0;
        }

        ~hot_coffee(){}

};

class cold_coffee:public coffee{
    private:
        coffee_names cold_coffees;
    
    public:

        cold_coffee(){
            cold_coffees.coffee_n.insert(cold_coffees.coffee_n.end(),{"ice americano","cold coffe milk","cold frappe","iced cappuccino","iced espresso","ice latte","iced honey coffee", "iced honey milk",
                                                                        "cold Chocolate Coffee"
                                                                        ,"iced Chocolate Latte"
                                                                        ,"iced Caramel Coffee"
                                                                        ,"iced Caramel Latte"
                                                                        ,"iced Ginger Coffee"
                                                                        ,"iced Ginger Latte"});//Deniz listeine göre isimler eklenicek.
            cold_coffees.prices.insert(cold_coffees.prices.end(),{ 5,6,8,8,8,8,10,10,15,15,17,17,20,20 });
            cold_coffees.is_it_first_time.insert(cold_coffees.is_it_first_time.end(),{1,1,0,0,0,0,0,0,0,0,0,0,0,0}); //kahve keşfedilmediyse 0 keşfedildiyse 1
        }

        const coffee_names& getColdCoffees() const {
            return cold_coffees;
        }

        int get_price(int x) {return cold_coffees.prices[x];}
        
        bool make_coffee(int x,int y, int z,string customer) //coffee with material
        {   
            if(x==1 && y==1 && z==1 && cold_coffees.coffee_n[4] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[4] << endl; //Espresso = Americano + Coffee Bean
                if(cold_coffees.is_it_first_time[4] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[4];
                    cold_coffees.is_it_first_time[4] = 1;
                }
                return 1;
            }

            else if(x==1 && y==1 && z==2 && cold_coffees.coffee_n[5] == customer )
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[5] << endl;
                if(cold_coffees.is_it_first_time[5] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[5];
                    cold_coffees.is_it_first_time[5] = 1;
                }
                return 1;
            }

            else if(x==1 && y==2 && z==1 && cold_coffees.coffee_n[2] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[2] << endl;
                if(cold_coffees.is_it_first_time[2] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[2];
                    cold_coffees.is_it_first_time[2] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==2 && cold_coffees.coffee_n[3] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[3] << endl;
                if(cold_coffees.is_it_first_time[3] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[3];
                    cold_coffees.is_it_first_time[3] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==3 && cold_coffees.coffee_n[6] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[6] << endl;
                if(cold_coffees.is_it_first_time[6] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[6];
                    cold_coffees.is_it_first_time[6] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==3 && cold_coffees.coffee_n[7] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[7] << endl;
                if(cold_coffees.is_it_first_time[7] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[7];
                    cold_coffees.is_it_first_time[7] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==4 && cold_coffees.coffee_n[8] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[8] << endl;
                if(cold_coffees.is_it_first_time[8] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[8];
                    cold_coffees.is_it_first_time[8] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==4 && cold_coffees.coffee_n[9] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[9] << endl;
                if(cold_coffees.is_it_first_time[9] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[9];
                    cold_coffees.is_it_first_time[9] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==5 && cold_coffees.coffee_n[10] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[10] << endl;
                if(cold_coffees.is_it_first_time[10] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[10];
                    cold_coffees.is_it_first_time[10] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==5 && cold_coffees.coffee_n[11] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[11] << endl;
                if(cold_coffees.is_it_first_time[11] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[11];
                    cold_coffees.is_it_first_time[11] = 1;
                }
                return 1;

            }

            else if(x==1 && y==1 && z==6 && cold_coffees.coffee_n[12] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[12] << endl;
                if(cold_coffees.is_it_first_time[12] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[12];
                    cold_coffees.is_it_first_time[12] = 1;
                }
                return 1;

            }

            else if(x==1 && y==2 && z==6 && cold_coffees.coffee_n[13] == customer)
            {
                cout << materials[x-1] << materials[y-1] << " and " << materials[z-1] << " = " << cold_coffees.coffee_n[13] << endl;
                if(cold_coffees.is_it_first_time[13] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[13];
                    cold_coffees.is_it_first_time[13] = 1;
                }
                return 1;

            }

            else
                return 0;
        }

        bool make_coffee(int x,int y,string customer) //simple coffee
        {   
            if(x==1 && y==1 && cold_coffees.coffee_n[0] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " = " << cold_coffees.coffee_n[0] << endl;
                if(cold_coffees.is_it_first_time[0] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[0];
                    cold_coffees.is_it_first_time[0] = 1;
                }
                return 1;
            }

            else if(x==1 && y==2 && cold_coffees.coffee_n[1] == customer)
            {
                cout << materials[x-1] <<" and "<< materials[y-1] << " = " << cold_coffees.coffee_n[1] << endl;
                if(cold_coffees.is_it_first_time[1] == 0)
                {
                    cout << "congrats !! you have discovered : " << cold_coffees.coffee_n[1];
                    cold_coffees.is_it_first_time[1] = 1;
                }
                return 1;
            }

            else
                return 0;
        }

        ~cold_coffee(){}
};

#endif
