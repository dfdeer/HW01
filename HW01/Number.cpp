#include <iostream>
#include "Number.h"

using namespace std;

void Number::setSize() {
    cout << "Input count of numbers: ";
    cin >> size;
}
void Number::inputNum() {
    cout << "Input " << size << " Numbers" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
}
void Number::sortNum() {
    int select;
    cout << "\n[Sort Numbers]\n" << "1: Ascending Order\n2: Descending Order" << endl;
    cin >> select;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (select == 1) {
                if (num[i] > num[j]) {
                    int temp;
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
            else if (select == 2) {
                if (num[i] < num[j]) {
                    int temp;
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
            else{
                cout << "Invalid Input." << endl;
                return;
            }
        }
    }
    cout << endl;
    for (int k = 0; k < size; k++)
    {
        cout << num[k] << " ";
    }
    cout << endl;
}
int Number::getSum() {
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}

double Number::getAvg() {
	return (double)getSum() / size;
}