#include "Weapon.hpp"
#include <iostream>
#include <string>

//set the value of attack

//set the value of in how many turns would it take to break 

//set the rarity of the weapon (can correlate with the value when sold)

//value of how much it would cost when bought from the market 

//value of how much it would sell for when sold in the market 

//Set any special features it has (for example when used during battle, it can speed a character up, or when battle is done, it recovers some health or something like that)

//An item is used to attack during battle. 
//The parameter should be the enemey so it specifies which enemy to attack. 
void Weapon::attack(/*Enemy enemy*/){
    //enemy health subtracted by value of attack (have to consider the enemy's defense level)
    //value of how many turns it would take to break will subtract by one. 
}

void Weapon::equip(Weapon w /*, Character character*/){
    //character's weapon is set to w. 
}

void Weapon::describe(){
    //prints out value of attack
    //prints out in how many turns it would be until it breaks. 
    //Prints the rarity of the wewapon. 
    //Prints the cost when bought. 
    //Prints the value when sold. 
    //Any special features. 
}
