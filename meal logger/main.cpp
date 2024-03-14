#include <iostream>
#include "food.h"
#include "LogItem.h"
using namespace std;

int main() {

    food f1;

    cout << "Name:      " << f1.GetName() << endl;
    cout << "Grams:     " << f1.GetGrams() << endl;
    cout << "Oz:        " << f1.GetaOz() << endl;
    cout << "calories:  " << f1.GetCalories() << endl;

    food egg("Egg", 70, 38);
    food link("Sausage Link", 40, 15);
    food oatmeal("Oatmeal", 180,50);



    egg.Print();
    link.Print();
    oatmeal.Print();

    LogItem l1;
    l1.Print();

    cout << endl;

    //Breakfast
    LogItem eggs(egg, 2);
    LogItem Links(link, 3);
    LogItem oats(oatmeal, 1);

    cout << "Breakfast"<< endl;
    eggs.Print();
    Links.Print();
    oats.Print();

    cout << endl;

    cout << " Totals " << "....." << eggs.GetTotalCalories() + Links.GetTotalCalories() + oats.GetTotalCalories();

    return 0;
}
