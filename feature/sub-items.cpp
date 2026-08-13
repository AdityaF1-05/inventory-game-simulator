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
                {
                    std::string myItemName, myItemsPrice, myItemsHeals;
                    int ItemPrice, HealEffects;

                    bool isInputName = true;
                    while (isInputName) {
                        try {
                            std::cout << "\nInput the Item Name : ";
                            std::getline(std::cin, myItemName);

                            if (myItemName.empty()) {
                                throw std::invalid_argument("Your Input is Empty\n");
                            }
                            isInputName = false;
                        }
                        catch(...) {
                            std::cout << "\nIncorrect Input type! Try Again!";
                        }
                    }

                    bool isInputPrice = true;
                    while (isInputPrice) {
                        try {
                            std::cout << "\nInput the Item Price ($): ";
                            std::getline(std::cin, myItemsPrice);

                            if (myItemsPrice.empty()) {
                                throw std::invalid_argument("Your Input is Empty\n");
                            }
                            ItemPrice = std::stoi(myItemsPrice);

                            if (ItemPrice <= 0 ) {
                                throw std::invalid_argument("The Price is Invalid value!\n");
                            }

                            isInputPrice = false;
                        }
                        catch(...) {
                            std::cout << "\nIncorrect Input type! Try Again!";
                        }
                    }

                    bool isInputHeal = true;
                    while (isInputHeal) {
                        try {
                            std::cout << "\nInput Your Item Heals Effect for Potion (HP): ";
                            std::getline(std::cin, myItemsHeals);

                            if (myItemsHeals.empty()) {
                                throw std::invalid_argument("Value Items Effect is Empty!\n");
                            }
                            HealEffects = std::stoi(myItemsHeals);

                            if (HealEffects <= 0) {
                                throw std::invalid_argument("The Value of Healing Effect is Invalid!\n");
                            }

                            isInputHeal = false;
                        }
                        catch (...) {
                            std::cout << "\nIncorrect Input Type! Try Again!";
                        }
                    }

                    Database dbm;
                    dbm.DataItems(myItemName, ItemPrice, HealEffects);
                    std::cout << "\n[SUCCESS] " << myItemName << " Has Been Stored!";
                    std::cout << std::endl;

                    break;
                }
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