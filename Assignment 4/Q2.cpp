#include <iostream>
using namespace std;
int main() {
    int queue[5];
    int front = -1;
    int rear = -1;
    int choice;
    int value;

    do {
        cout << "____Circular queue menu____"<<endl;
        cout << "1. Enqueue "<<endl;
        cout << "2. Dequeue "<<endl;
        cout << "3. Peek "<<endl;
        cout << "4. Display "<<endl;
        cout << "5. Check empty "<<endl;
        cout << "6. Check full "<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice - ";
        cin >> choice;

        switch(choice) {
            case 1: 
                cout << "enter value: ";
                cin >> value;
                if ((front == 0 && rear == 5-1) || (rear + 1) % 5 == front) {
                    cout << "queue is full "<<endl;
                } else {
                    if (front == -1) front = 0;
                    rear = (rear + 1) % 5;
                    queue[rear] = value;
                    cout << value << " inserted into queueue"<<endl;
                }
                break;

            case 2: 
                if (front == -1) {
                    cout << "queue is empty"<<endl;
                } else {
                    cout << "deleted from queue " << queue[front] << endl;
                    if (front == rear) {
                        front = rear = -1;
                    } else {
                        front = (front + 1) % 5;
                    }
                }
                break;

            case 3: 
                if (front == -1) {
                    cout << "queue is empty "<<endl;
                } else {
                    cout << "front element - " << queue[front] <<endl;
                }
                break;

            case 4:
                if (front == -1) {
                    cout << "queue is empty "<<endl;
                } else {
                    cout << "queue elements - ";
                    int i = front;
                    while (true) {
                        cout << queue[i] << " ";
                        if (i == rear) break;
                        i = (i + 1) % 5;
                    }
                    cout <<endl;
                }
                break;

            case 5:
                if (front == -1)
                    cout << "queue is empty "<<endl;
                else
                    cout << "queue is not mepty "<<endl;
                break;

            case 6:
                if ((front == 0 && rear == 5-1) || (rear + 1) % 5 == front)
                    cout << "queue is full no space"<<endl;
                else
                    cout << "queue is not Full "<<endl;
                break;

            case 0:
                cout << "exiting the programs bye byee "<<endl;
                break;

            default:
                cout << "invalid choice try again"<<endl;
        }
    } while (choice != 0);
    return 0;
}
