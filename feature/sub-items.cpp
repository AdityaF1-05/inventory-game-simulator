#include <string>
#include <iostream>
#include "../header/inventory-items.hpp"

MainMenu::MainMenu() {}

void MainMenu::SubMenuItems() {
    std::cout << "+=======+" << std::endl;
    std::cout << "| ITEMS |" << std::endl;
    std::cout << "+=======+" << std::endl;

    std::cout << "\n1. Add Item" << std::endl;
    std::cout << "2. Check Items" << std::endl;
    std::cout << "3. Exit the Sub Menu" << std::endl;
}

