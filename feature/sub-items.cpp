#include <string>
#include <iostream>
#include "../header/inventory-items.hpp"

void MainMenu::SubMenuItems() {
    std::cout << "+=======+" << std::endl;
    std::cout << "| ITEMS |" << std::endl;
    std::cout << "+=======+" << std::endl;

    std::cout << "\n1. Add Item" << std::endl;
    std::cout << "2. Check Items" << std::endl;
    std::cout << "3. Exit the Sub Menu" << std::endl;
}

void MainMenu::SubSwitchMenu() {
    bool isSubMenu = true;
    std::string mySubSwitch;

    while (isSubMenu) {
        try {
            SubMenuItems();

            std::cout << "\nYour Choice ";
            getline(std::cin, mySubSwitch);

            if (mySubSwitch.empty()) {
                throw std::invalid_argument("Inputs Empty! Try Again!\n");
            }

            int SubMenu = std::stoi(mySubSwitch);
            switch (SubMenu)
            {
            case 1:
                std::cout << "\nStill in Development! In Progress!";
                std::cout << std::endl;
                break;
            
            case 2:
                std::cout << "\nStill in Development! In Progress!";
                std::cout << std::endl;
                break;
            case 3:
                std::cout << "\nBack to main menu.";
                std::cout << std::endl;

                isSubMenu = false;
                return;
            default:
                throw std::out_of_range("Invalid Choice! Retry!");
            }
        }
        catch (std::invalid_argument& e) {
            std::cout << "\n[ERROR] " << e.what();
        }
        catch (std::out_of_range& e) {
            std::cout << "\n[ERROR] " << e.what();
        }
    }
}