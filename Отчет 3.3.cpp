#include <iostream>
using namespace std;

template <class T>
void out(T data) {
	cout << data << endl;
}
void main()
{
	out(5);
	out(4.3);
	out('a');
}

