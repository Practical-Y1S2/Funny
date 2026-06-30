#include <iostream>
using namespace std;

class Restaurant {
public:
	double total;
	
	Restaurant() {
		total = 0;
	}
	
	void showMenu() {
		cout << "\n===== Restaurant Menu =====" << endl;
		cout << "1. Burger ($5)" << endl;
		cout << "2. Pizza ($8)" << endl;
		cout << "3. Coffee ($2)" << endl;
		cout << "4. rice with pork ($3)" << endl;
		cout << "5. nuddol soup ($2.50)" << endl;
		cout << "6. fried chicken ($5)" << endl;
		cout << "7. coca cola ($1)" << endl;
		cout << "8. Show Bill & Exit" << endl;
	}
	
	void orderItem(int choice, int qty) {
		switch (choice) {
		case 1:
			total += 5 * qty;
			break;
		case 2:
			total += 8 * qty;
			break;
		case 3:
			total += 2 * qty;
			break;
			case 4:
			total += 3 * qty;
			break;
			case 5:
			total += 2.50 * qty;
			break;
			case 6:
			total += 5 * qty;
			break;
			case 7:
			total += 1 * qty;
			break;
		default:
			cout << "Invalid Choice!" << endl;
		}
	}
	
	void showBill() {

		cout << "\nTotal Bill = $" << total << endl;
		cout << "Thank You!" << endl;
	}
	void reserveTable() {
		int num;
		cout <<"enter you num table:";
		cin>>num ;
		cout << "Table Reserved Successfully!\n";
	
	}
};

int main() {
	Restaurant restaurant; 

	int choice, qty;
	
	
	do {
		restaurant.showMenu();
		  
		
		cout << "Enter your choice: ";
		cin >> choice;
		
		if (choice >= 1 && choice <= 7) {
			cout << "Enter quantity: ";
			cin >> qty;
			restaurant.orderItem(choice, qty);
		} 
		else if (choice == 8) {
			restaurant.showBill();
		} 
		else {
			cout << "Invalid Choice!" << endl;
		}
		
	} while (choice != 8);
     restaurant.reserveTable();
	
}
