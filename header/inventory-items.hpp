#ifndef INVENTORY_ITEMS
#define INVENTORY_ITEMS
#include <string>
#include <vector>

class Items {
    protected:  // Akses untuk Child dan Parent Class
    std::string itemName;
    int price;

    public:
    Items(std::string itemName, int price) 
    : itemName(itemName), price(price) {}

    std::string getItemName() {
        return itemName;
    }
    int getPrice() {
        return price;
    }

    // Destructor
    virtual ~Items();
};

class Potion : public Items {
    private:
    int Heal;

    public:
    Potion(std::string itemName, int price, int Heal);

    int getHeal() const {
        return Heal;
    }
    void DisplayHealInfo();

    void setItemName(std::string it) {
        Items::itemName = it;
    }

    void setPrice(int p) {
        Items::price = p;
    }

    void setHeal(int h) {
        Heal = h;
    }
};

class Database {
    private:
    std::vector<Potion> potionItem;

    public:
    Database();

    void DataItems(std::string itemName, int price, int heal);
    
    std::vector<Potion>& getpotionItem();
    int getSizePotion() const {
        return potionItem.size();
    }
};

class MainMenu {
    public:
    MainMenu();

    void MenuManager();
    void SwitchMenu();

    void SubMenuItems();
    void SubSwitchMenu();
};

#endif