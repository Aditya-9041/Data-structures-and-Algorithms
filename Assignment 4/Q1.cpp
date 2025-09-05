#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int f = -1;
    int r = -1;
    int choice;
    int value;
    do {
        cout << " ____Queue Menu_____" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Check Empty" << endl;
        cout << "6. Check Full" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                if (r == 5 - 1) {
                    cout<< "queue is full " << endl;
                } else {
                    cout << "enter value: ";
                    cin >> value;
                    if (f == -1){
                        f = 0;
                    }
                    r++;
                    arr[r] = value;
                    cout << value << " insertedinto array" << endl;
                }
                break;

            case 2: 
                if (f == -1 || f>r) {
                    cout << "queue is empty " << endl;
                    f = -1;
                    r = -1;
                } 
                else {
                    cout << arr[f] << " removed from array" << endl;
                    f++;
                }
                break;

            case 3:
                if (f == -1 || f>r) {
                    cout << "queue is empty " << endl;
                }
                else{
                    cout << "front element is " << arr[f] << endl;
                }
                break;

            case 4:
                if (f == -1 || f>r) {
                    cout << "queue is empty " << endl;
                } else {
                    cout << "queue elements -  ";
                    for (int i = f; i <= r; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 5:
                if (f == -1 || f>r){
                    cout << "queue is empty " << endl;
                }
                else{
                    cout<<"queue is not empty"<<endl;
                }
                break;

            case 6:
                if (r ==  5 - 1)
                    cout << "queue is full " << endl;
                else
                    cout << "queue is not full " << endl;
                break;

            case 7:
                cout << "exiting, bye byee" << endl;
                break;

            default:
                cout << "invalid choice try again " << endl;
        }
    } while (choice != 7);
    return 0;
}
