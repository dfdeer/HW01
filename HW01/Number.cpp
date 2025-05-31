#include <iostream>
#include "Number.h"

using namespace std;

void Number::setSize() {
    cout << "입력할 숫자의 개수: ";
    cin >> size;
}
void Number::inputNum() {
    cout << "숫자 " << size << "개를 입력하세요" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
}
void Number::sortNum() {
    int select;
    cout << "\n[입력 받은 숫자 정렬]\n" << "1: 오름차순\n2: 내림차순" << endl;
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
                cout << "잘못된 입력입니다." << endl;
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