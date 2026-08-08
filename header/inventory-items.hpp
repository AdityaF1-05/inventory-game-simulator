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
    void setPrice(int p);

    void ItemInfo();

    // Destructor
    virtual ~Items();
};

class Potion : public Items {
    private:
    int Heal;

    public:
    Potion(std::string itemName, int price, int Heal);
    int getHeal() {
        return Heal;
    }
    void DisplayHealInfo();
};

class Database {
    private:
    std::vector<Potion> potionItem;

    public:
    Database();

    void DataItems(std::string itemName, int price, int heal);
    
    std::vector<Potion>& getpotionItem();
    int getSizePotion() {
        return potionItem.size();
    }
};

#endif