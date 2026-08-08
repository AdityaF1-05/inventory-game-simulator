#include <iostream>
#include <string>
#include "header/inventory-items.hpp"

using namespace std;

int main() {

    // Class Database dan Objek
    Database db;
    
    // Membuat isi data dalam class database
    db.DataItems("Bandage", 300, 10);
    db.DataItems("Healing Potion", 500, 40);

    // Menampilkan jumlah ukuran data tersimpan
    cout << "Jumlah Items yang terlist " << db.getSizePotion() << endl;
    cout << endl;

    // memakai perulangan untuk tampilkan setiap objek data
    for (auto& items : db.getpotionItem()) {
        items.DisplayHealInfo();
    }

    return 0;
}