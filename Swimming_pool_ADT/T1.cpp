#include "Task1.h"

int main()
{
	int length,width,depth,rate_of_filing,rate_of_drain;
	cout << "enter length of pool" << ' ';
	cin >> length;
	cout << endl;
	cout << "enetr the width of pool" << ' ';
	cin >> width;
	cout << endl;
	cout << "enetr the depth of pool" << ' ';
	cin >> depth;
	cout << endl;
	cout << "enetr the rate of filing the pool" << ' ';
	cin >> rate_of_filing;
	cout << endl;
	cout << "enetr the rate of drain in pool" << ' ';
	cin >> rate_of_drain;
	cout << endl;

	S_Pool S(length, width, depth, rate_of_filing, rate_of_drain);

	cout << "enter the value to set length" << endl;
	cin >> length;
	S.set_length(length);
	cout << endl;

	cout << "enter the value to set width" << endl;
	cin >> width;
	S.set_width(width);
	cout << endl;
	cout << "enter the value to set depth" << endl;
	cin >> depth;
	S.set_depth(depth);
	cout << endl;
	cout << "enter the cost of filing" << endl;
	cin >> rate_of_filing;
	S.set_filing(rate_of_filing);
	cout << endl;
	cout << "enter the cost of drain" << endl;
	cin >> rate_of_drain;
	S.set_filing(rate_of_drain);
	cout << endl;
	int r = 0;
	r = S.get_length();
	cout << "the value of length is" << r;
	cout << endl;
	r = S.get_width();
	cout << "the value of width is" << r;
	cout << endl;
	r = S.get_depth();
	cout << "the value of depth is" << r;
	cout << endl;
	r = S.get_filing();
	cout << "the value of filing cost is" << r;
	cout << endl;
	r = S.get_drain();
	cout << "the value of drain is" << r;
	cout << endl;

	int res=S.calculate_filing_pool();
	cout << "the calculating of filing pool is" << res<<endl;

	res = S.calculate_drain_from_pool();
	cout << "the calculating of drain from pool is" << res << endl;

}