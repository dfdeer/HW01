#ifndef NUMBER_H_
#define NUMBER_H_

class Number {
public:
	void setSize();
	void inputNum();
	void sortNum();
	int getSum();
	double getAvg();

private:
	int size;
	int* num = new int[size];
	int sum = 0;
};
#endif