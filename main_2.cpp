/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class FunctionCalculator {
public:
    double calculate(double x) {
        if (x >= -3 && x < -2) {
            return -2 - x;
        } else if (x >= -2 && x < -1) {
            return sqrt(1 - (x + 1) * (x + 1));
        } else if (x >= -1 && x < 1) {
            return -1;
        } else if (x >= 1 && x < 2) {
            return -x + 1;
        } else if (x >= 2 && x <= 5) {
            return -1;
        } else {
            cout << "x вне диапазона функции" << endl;
            return 0;
        }
    }
};

class FileCalculator {
public:
    void calculateAndSaveToFile(int x, int y) {
        int result = x * y;

        ofstream outFile("text2.txt");
        outFile << result << endl;
        outFile.close();
    }
};

int main() {
    int choice;
    cout << "Выберите действие:\n1. Вычислить значение функции\n2. Вычислить и сохранить в файл\n3. Выполнить оба действия\n";
    cin >> choice;

    if (choice == 1 || choice == 3) {
        double x;
        cout << "Введите значение x: ";
        cin >> x;

        FunctionCalculator functionCalculator;
        double result = functionCalculator.calculate(x);

        if (result != 0) {
            cout << "Функция равна: " << result << endl;
        }
    }

    if (choice == 2 || choice == 3) {
        int xFromFile, yFromFile;

        cout << "Введите значения x и y из файла: ";
        cin >> xFromFile >> yFromFile;

        FileCalculator fileCalculator;
        fileCalculator.calculateAndSaveToFile(xFromFile, yFromFile);
    }

    return 0;
}

