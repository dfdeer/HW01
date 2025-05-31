#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
    Number n;
    n.setSize();
    n.inputNum();
    n.sortNum();
    cout << "합계" << n.getSum() << endl;
    cout << "평균" << n.getAvg() << endl;

    return 0;
}