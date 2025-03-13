#include "Animal.h"
#include "Cow.h"
#include "Sheep.h"
#include "Goat.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int cow, sheep, goat;
	cout << "Nhap so luong bo: ";
	cin >> cow;
	cout << "Nhap so luong cuu: ";
	cin >> sheep;
	cout << "Nhap so luong de: ";
	cin >> goat;
	int total = cow + sheep + goat;
	vector<Animal*> farm(total);
	for (int i = 0; i < cow; i++) {
		farm[i] = new Cow;
	}
	for (int i = 0; i < sheep + cow; i++) {
		farm[i] = new Sheep;
	}
	for (int i = 0; i < total; i++) {
		farm[i] = new Goat;
	}
	for (int i = 0; i < total; i++) {
		farm[i]->sound();
	}

	int totalCow = 0, totalSheep = 0, totalGoat = 0;
	for (int i = 0; i < total; i++) {
		if (farm[i]->getSpecies() == 1) {
			totalCow += farm[i]->giveBirth();
		}
		else if (farm[i]->getSpecies() == 2) {
			totalSheep += farm[i]->giveBirth();
		}
		else if (farm[i]->getSpecies() == 3) {
			totalGoat += farm[i]->giveBirth();
		}
	}
	cout << "Tong so gia suc trong nong trai sau khi sinh la: " << endl;
	cout << "Bo: " << cow + totalCow << endl;
	cout << "Cuu: " << sheep + totalSheep << endl;
	cout << "De: " << goat + totalGoat << endl;
	int milk = 0;
	for (int i = 0; i < total; i++) {
		milk += farm[i]->getMilk();
	}
	cout << "Tong so lit sua: " << milk << endl;
	return 0;
}