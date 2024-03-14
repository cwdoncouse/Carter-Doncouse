//
// Created by Carter Doncouse on 6/27/23.
//

#ifndef MEAL_LOGGER_FOOD_H
#define MEAL_LOGGER_FOOD_H
#include <string>


class food {

private:
    static const double GRAMS_IN_OZ;
    std::string name_;
    int calories_;
    double grams_;
    double oz_;

public:
    //Default constructor
        food() : name_("no name"), calories_(0), grams_(0), oz_(0) {}
    //General constructor
    food(std::string name, int calories, double grams = 0);

    void SetName(std::string name);
    void SetCalories(int);
    void SetGrams(double);

    //Getters
    std::string GetName () const { return name_; }
    int GetCalories() const { return calories_; }
    double GetGrams() const { return grams_; }
    double GetaOz() const { return oz_; }

    //other methods
    void Print() const;

private:
    void setOz();

};


#endif //MEAL_LOGGER_FOOD_H
