#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
    Number n;
    n.setSize();
    n.inputNum();
    n.sortNum();
    cout << "Sum: " << n.getSum() << endl;
    cout << "Average: " << n.getAvg() << endl;

    return 0;
}