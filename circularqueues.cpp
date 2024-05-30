#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	Queues() {
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
            cout << "\nQueue overflow\n";
            return;

		}
         //cek apakah antrian kosong
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
         else
        {
            //jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR = max - 1)
            
                REAR = 0;
            
            else
            
                REAR = REAR + 1;
            
        }
        //memasukkan nilai ke array index ke REAR
        queue_array[REAR] = num;
    }
    void remove(){
        //cek apakah antrian kosong
        if (FRONT == -1) 
        {
            cout << "Queue underflow\n";
            return;
        }
        //display untuk menampilkan element yang di delete dari queue
        cout << "\nThe element delete from queue is : " << queue_array[FRONT] << "\n";

        //cek jika antrian hanya memiliki satu element
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            //jika posisi element yang di hapus berada di posisi terakhir array, kembali ke awal array
            if (FRONT == max -1)
            {
                FRONT = 0;
            }
            else //jika tidak increment FRONT + 1
            {
                FRONT = FRONT + 1;
            }
        }
    }
        //membuat prosedur diplay untuk menampilkan element queue
        void display() {
            //cek apakah antrian kosong 
            int FRONT_Position = FRONT;
            int REAR_Position = REAR;

            if (FRONT_Position == -1)
            {
                cout << "Queue is Empty\n";
                return;
            }
            cout << "\nElement in queue are...\n";

            //jika FRONT <= REAR, Iterasi dari FRONT hingga REAR
            if (FRONT_Position <= REAR_Position)
            {
                while (FRONT_Position <= REAR_Position)
                {
                    cout << queue_array[FRONT_Position] << " ";
                    FRONT_Position++;
                }
                cout << endl;
            }
            else
            {
                //jika FRONT > REAR, iterasi dari FRONT hingga akhir array
                while (FRONT_Position <= max - 1)
                {
                    cout << queue_array[FRONT_Position] << " ";
                    FRONT_Position++;
                }

                FRONT_Position = 0;

                //iterasi dari awal array hingga REAR
                while (FRONT_Position <= REAR_Position)
                {
                    cout << queue_array[FRONT_Position] << " ";
                    FRONT_Position++;
                }
                cout << endl;
            }
        }
};


int main(){
    //deklarasi objek q dan variabel ch
    Queues q;
    char ch;

    //membuat perulangan while untuk menjalankan program queue
    while (true)
    {
        try
        {
            //membuat menu queue
            cout << "Menu" << endl;
            cout << "1. Implementasi insert operation" << endl;
            cout << "2. Implementasi delete operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;
            cout << "enter your choice(1-4-): " << endl;
            cin >> ch;
            cout << endl;

            //kondisi yang terjadi sesuai nilai input ch
            switch (ch)
            {
            case 1 :
                q.insert();
                break;
            case 2 :
                q.remove();
                break;
            case 3 :
                q.display();
                break;
            case 4 :
                return 0;
            default:
                cout << "Invalid option!" << endl;
                break;
            }
        }
        catch (exception& e){
            cout << "Error!" << endl;
        }
    }
    

}