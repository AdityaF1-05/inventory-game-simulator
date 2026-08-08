#include <iostream>
#include <string>
#include "../header/inventory-items.hpp"

MainMenu::MainMenu() {
}

void MainMenu::MenuManager() {
    std::cout << "+================================+" << std::endl;
    std::cout << "| INVENTORY MANAGEMENT SIMULATOR |" << std::endl;
    std::cout << "+================================+" << std::endl;

    std::cout << std::endl;
    std::cout << "1. Take a Items\n";
    std::cout << "2. Check my Inventory\n";
    std::cout << "3. End of Simulation\n";
}