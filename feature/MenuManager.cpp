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

void MainMenu::SwitchMenu() {
    std::string mySwitch;
    while (true) {
        try {
            MenuManager();

            std::cout << "\nYour Choice ";
            getline(std::cin, mySwitch);

            if (mySwitch.empty()) {
                throw std::invalid_argument("\nPlease Input your Choice!");
            }
            
            int valueSwitch = stoi(mySwitch);
            switch(valueSwitch) {
                case 1:{
                std::cout << "\nStill In Development! Coming Soon\n";
                std::cout << std::endl;
                break;
                }

                case 2:{
                std::cout << "\nStill In Development! Coming Soon\n";
                std::cout << std::endl;
                break;
                }

                case 3:{
                std::cout << "\nThank you for using the Simulator. Exiting";
                return;
                }

                default:
                throw std::out_of_range("Your number is out of Range!");
            }
        }
        catch(std::invalid_argument& e) {
            std::cout << "[ERROR] " << e.what();
        }
        catch(std::out_of_range& e) {
            std::cout << "[ERROR] " << e.what();
        }
    } 
}