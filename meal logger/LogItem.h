//
// Created by Carter Doncouse on 6/27/23.
//

#ifndef LOGITEM_H
#define LOGITEM_H
#include "food.h"


class LogItem {

private:

    food food_;
    int quantity_;

public:
    LogItem() : food_(), quantity_(0) {}
    LogItem(food, int);
    // Getters
    food GetFood() const {return food_;}
    int GetQuantity() const{ return quantity_; }

    int GetTotalCalories() const;
    double GetTotalGrams() const;
    double GetTotalOz() const;

    //Setters
    void SetFood(food);
    void SetQuantity(int);

    void Print() const;

};


#endif //LOGITEM_H
