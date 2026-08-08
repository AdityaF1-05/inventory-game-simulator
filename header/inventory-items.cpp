#include <iostream>
#include <string>
#include <vector>
#include "inventory-items.hpp"

Potion::Potion(std::string nameItem, int price, int Heal)
    : Items(nameItem, price), Heal(Heal) {}

// Destructor
Items::~Items() {

}

void Potion::DisplayHealInfo() {
    std::cout << "Potion : " << itemName << " | Gold : " << price << " | Healing : " << Heal << "HP";
    std::cout << std::endl;
}

// Constructor kelas Database
Database::Database() {
}

std::vector<Potion>& Database::getpotionItem() {
    return potionItem;
}

void Database::DataItems(std::string itemName, int price, int heal) {
    potionItem.push_back(Potion(itemName, price, heal));
}
