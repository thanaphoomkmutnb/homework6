#include <iostream>
#include <random>
#include <time.h>
#include <string>

using namespace std;
int Guess(int random);

int main() {
    srand(time(NULL));
    int random = rand() % 9 + 1, Round = 0;
    cout << "###Welcome to guessing number game###\n";
    cout << "Secret number has been chosen\n";
    Round = Guess(random);
    cout << "Congratulations!\n";
    cout << "The secret number is " << random << endl;
    cout << "You made " << Round << " guesses" << endl;
    system("pause");
    return 0;
}


int Guess(int random) {
	int Round = 0, number = 0;
    do {
        cout << "Guess the number (1 to 10): ";
        cin >> number;
        if (number > random) {
            cout << "The secret number is higher\n";
        } else if (number < random) {
            cout << "The secret number is lower\n";
        }
        Round++;
    } while (random != number);
	return Round;
}