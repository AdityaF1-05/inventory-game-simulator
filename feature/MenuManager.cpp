#include <iostream>
#include <string>
#include <iomanip>
#include "../header/inventory-items.hpp"

MainMenu::MainMenu() {
}

void MainMenu::MenuManager() {
    std::cout << "+================================+" << std::endl;
    std::cout << "| INVENTORY MANAGEMENT SIMULATOR |" << std::endl;
    std::cout << "+================================+" << std::endl;

    std::cout << std::endl;
    std::cout << "1. Take a Items\n";
    std::cout << "2. Program Info\n";
    std::cout << "3. End of Simulation\n";
}

void MainMenu::InfoMenu() {
    std::cout << std::left;

    std::cout << std::endl;
    std::cout << "+========================+\n";
    std::cout << "|          INFO          |\n";
    std::cout << "+========================+\n";
    std::cout << std::endl;

    std::cout << "Welcome to Inventory Simulator Program!\n"
              << "This Program run on Console PC/Laptop simulatenaly.\n"
              << "Use VS Code or Other Compiler Program for newer version of C++ (C++ 17).\n\n"
              << "Program Version v0.7.1 - In Development\n" << std::endl;
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
                SubSwitchMenu();
                break;
                }

                case 2:{
                InfoMenu();
                std::cout << std::endl;
                break;
                }

                case 3:{
                std::cout << "\nThank you for using the Simulator. Exiting";
                std::cout << std::endl;
                return;
                }

                default:
                throw std::out_of_range("Your number is out of Range!\n");
            }
        }
        catch(std::invalid_argument& e) {
            std::cout << "\n[ERROR] " << e.what();
        }
        catch(std::out_of_range& e) {
            std::cout << "\n[ERROR] " << e.what();
        }
    }
}