#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int quees_array[5];

public:
	Quesues() {
		FRONT = -1;
		REAR = -1;
	}

    void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		//cek apakah antrian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {

		}
	}



};



int main(){

}