#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int note;

    cout << "Total Amount: " << amount << endl;

    note = 100;
    switch (note) {
        case 100:
            cout << "100 notes = " << amount / 100 << endl;
            amount = amount % 100;
    }

    note = 50;
    switch (note) {
        case 50:
            cout << "50 notes = " << amount / 50 << endl;
            amount = amount % 50;
    }

    note = 20;
    switch (note) {
        case 20:
            cout << "20 notes = " << amount / 20 << endl;
            amount = amount % 20;
    }

    note = 1;
    switch (note) {
        case 1:
            cout << "1 notes = " << amount / 1 << endl;
    }

    return 0;
}
