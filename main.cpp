#include <iostream>
#include <string>
#include "header/inventory-items.hpp"

using namespace std;

int main() {

    // Class Database dan Objek
    Database db;
    MainMenu mgr;

    mgr.MenuManager();
    cout << endl;
    
    // Membuat isi data dalam class database
    db.DataItems("Bandage", 300, 10);
    db.DataItems("Healing Potion", 500, 40);

    // Menampilkan jumlah ukuran data tersimpan
    cout << "Listed item Counted " << db.getSizePotion() << " in your Inventory" << endl;
    cout << endl;

    // memakai perulangan untuk tampilkan setiap objek data
    for (auto& items : db.getpotionItem()) {
        items.DisplayHealInfo();
    }

    return 0;
}