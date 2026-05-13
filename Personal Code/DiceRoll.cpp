using namespace std;
#include <iostream>
//#include <string>
#include <random>

int diceRoll() {
    int num = rand() % 8 - 1;
    return num;
}
void print(int one, int two, int three, int four, int five, int six) {

    cout << "Face | Frequency" << endl << "----------------" << endl;
    cout << "  1  | " << one << endl;
    cout << "  2  | " << two << endl;
    cout << "  3  | " << three << endl;
    cout << "  4  | " << four << endl;
    cout << "  5  | " << five << endl;
    cout << "  6  | " << six << endl;
}

int main() {
    srand(time(0));

    int one = 0; int two = 0; int three = 0; int four = 0; int five = 0; int six = 0;

    int roll = 0;

    for (int i = 0; i < 100000; i++) {
        roll = diceRoll();
        if (roll == 1) { one += 1; }
        else if (roll == 2) { two += 1; }
        else if (roll == 3) { three += 1; }
        else if (roll == 4) { four += 1; }
        else if (roll == 5) { five += 1; }
        else if (roll == 6) { six += 1; }
    }

    print(one, two, three, four, five, six);


    return 0;
}
