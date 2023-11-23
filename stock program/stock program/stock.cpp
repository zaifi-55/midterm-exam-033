#include<iostream>
using namespace std;

int main() {
	int initial_quantity;
	cout << "enter the amount of products in stock:" << endl;
	cin >> initial_quantity;

	int threshold = 10;
	int current_stock = initial_quantity;

	while (true) {
		cout << "enter current_stock:" << current_stock << endl;
		char action;
		cout << "Enter 'S' for sold,'R' for restock and 'E' for exit" << endl;
		cin >> action;

		if (action == 'S' || action == 's') {
			int sold_quantity;
			cout << "Enter the sold quantity:" << endl;
			cin >> sold_quantity;

			if (sold_quantity > current_stock) {
				cout << "Not enough stock available:" << endl;
			}
			else {
				current_stock -= sold_quantity;
				cout << sold_quantity << "units sold.Remaining stock" << current_stock << endl;
			}
		}
		else if(action=='R'||action=='r'){
			int restocked_stock;
			cout << "Enter the restocked stock:" << endl;
			cin >> restocked_stock;

			current_stock += restocked_stock;
			cout << restocked_stock << "units restocked.Remaining stock" << current_stock << endl;
		}
		else if (action == 'E' || action == 'e') {
			break;
		}
		if (current_stock < threshold) {
			cout << "WARNING!Please restock immediatly" << endl;
		}
	}
	cout << "Exit the inventory" << current_stock << endl;
	return 0;
}