#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(time(0));

    for (int i = 1; i <= 3; i++) {
        string filename = "file" + to_string(i) + ".txt";
        ofstream fout(filename);

        if (!fout.is_open()) {
            cerr << "Ошибка в открытии " << filename << endl;
            return 1;
        }

        for (int j = 0; j < 10; j++) {
            fout << (rand() % 10 + 1);
            if (j < 9) fout << " ";
        }
        fout << endl;
        fout.close();

        cout << "файл: " << filename << endl;
    }

    cout << "готово" << endl;
    return 0;
}
