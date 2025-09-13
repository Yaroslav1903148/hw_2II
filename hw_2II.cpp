#include <iostream>
#include "Time.h"
#include "Bus.h"
using namespace std;

int main()
{
	/*Time t1(1, 12, 59);
	t1++;
	t1.showTime();
	t1--;
	t1.showTime();

	cout << "==================================\n";

	Time t2;
	cin >> t2;
	cout << "Time: " << t2 << endl;
	cout << "T2 + 5 = " << t2 + 5;
	cout << "T2 - 5 = " << t2 - 5;*/

	Time start(6, 0, 0, true);   
	Time finish(11, 0, 0, true); 

	Bus bus(start, finish, 10, 30);
	bus.buildgraph();

}
