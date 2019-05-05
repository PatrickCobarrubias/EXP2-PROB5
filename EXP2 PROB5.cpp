#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1;
	int a = 22;
	int x, nextNum;
	
    cout << "Fibonacci numbers: " << endl;
    cout << n1 << "," << n2;

    for (x = 3; x <= a; x++) 
    {
        nextNum = n1 + n2;
        cout << "," << nextNum;
        n1 = n2;
        n2 = nextNum;
    }
    cout << endl;

	getch();
	return 0;
}