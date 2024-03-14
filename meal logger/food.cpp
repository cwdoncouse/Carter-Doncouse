 //
// Created by Carter Doncouse on 6/27/23.
//

#include "food.h"
#include <iostream>

 const double food::GRAMS_IN_OZ = 28.3495;

food::food(std::string name, int calories, double grams)
{
    name_ = name;
    SetCalories(calories);
    SetGrams(grams);

}
/*
 * @brief set the member variable name_ to user chosen value
 */
void food::SetName(std::string name)
{
    name_ = name;
}
/*
 * @brief set the member variable calories_ to user chose
 * @remark does not allow the user to input a value less than 0
 */
void food::SetCalories(int calories)
{
    if(calories < 0 )
        calories_ = 0;
    else calories_ = calories;
}
/*
 * @brief set the member variable grams_ to user chose
 * @remark does not allow the user to input a value less than 0
 *  then sets the oz_ member value
 */

void food::SetGrams(double grams)
 {
    if(grams <0)
        grams_ = 0;
    else
        grams_ = grams;

    setOz();
 }
/*
 * @brief set the member variable oz_ to user chose
 * @remark does not allow the user to input a value less than 0
 */
 void food::setOz()
 {
    if(grams_ <= 0)
        oz_ = 0;
    else
        oz_ = grams_ / GRAMS_IN_OZ;
 }

 void food::Print()  const
 {
    std::cout << "name: "<< name_ << " Grams: " << grams_ << " OZ: " << oz_ << " Calories: " << calories_ << std::endl;
 }
