#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	char human, computer;
	unsigned h=0, c=0; // h: diem nguoi , c: diem may;
	srand(time(NULL));
	while (1)
	{
		cout << "(k-b-d)";
		cin >> human;
		while (getchar() != '\n') {}
		switch (human) {
		case 'b':
			switch (rand() % 3)
			{
		    	case 0: computer = 'b'; break;
		    	case 1: computer = 'd'; h++; break;
			    case 2: computer = 'k'; c++;
			}break;
		case 'd':
			switch (rand() % 3)
			{
			case 0: computer = 'b'; c++; break;
			case 1: computer = 'd'; break;
			case 2: computer = 'k'; h++;
			}break;
		case 'k':
			switch (rand() % 3)
			{
			case 0: computer = 'b'; h++; break;
			case 1: computer = 'd'; c++; break;
			case 2: computer = 'k';
			}break;
		default: return 0;
		}
		cout << "Computer : " << computer << endl;
		cout << "Ty so : " << h << " - " << c << endl;
	}
}
