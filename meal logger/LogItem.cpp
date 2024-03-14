//
// Created by Carter Doncouse on 6/27/23.
//

#include "LogItem.h"
#include <iostream>

/*
 * @brief LogItem General constructor
 * @param food object
 * @param quantity how many food objects per LogItem
 */
LogItem::LogItem(food food, int quantity)
{
    food_ = food;
    SetQuantity(quantity);
}

/*
 * @brief gets food_ calories and multiplies them by quanity_
 * @returns int
 */
int LogItem::GetTotalCalories() const
{
    return food_.GetCalories() * quantity_;
}
/*
 * @brief gets food_ oz and multiplies them by quanity_
 * @returns idouble
 */
double LogItem::GetTotalGrams() const
{
    return food_.GetGrams() * quantity_;
}

double LogItem::GetTotalOz() const
{

    return food_.GetaOz() * quantity_;
}
/*
 * @brief gets food_ oz and multiplies them by quanity_
 * @returns double
 */
void LogItem::SetFood(food food)
{
    food_ = food;
}

void LogItem::SetQuantity(int quantity)
{
    if(quantity < 0 )
        quantity_ = 0;
    else
        quantity_ = quantity;
}

void LogItem::Print() const
{
    std::cout << "Food: "<< food_.GetName() << " Qty: " << quantity_ << "Total cal: " << GetTotalCalories() <<  std::endl;
}