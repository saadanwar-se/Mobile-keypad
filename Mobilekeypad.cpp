#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <time.h>

using namespace std;
int main(){
	int delay, count = 0;
	char c;
	cout << "input is :: ";
	c = _getch();
	while (true)
	{
		switch (c) 
		{
		case('2'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "a";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '2' && delay <= 1)
			{
				cout << "\bb";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '2' && delay <= 1)
				{
					cout << "\bc";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '2' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('3'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "d";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '3' && delay <= 1)
			{
				cout << "\be";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '3' && delay <= 1)
				{
					cout << "\bf";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '3' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('4'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "g";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '4' && delay <= 1)
			{
				cout << "\bh";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '4' && delay <= 1)
				{
					cout << "\bi";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '4' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('5'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "j";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '5' && delay <= 1)
			{
				cout << "\bk";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '5' && delay <= 1)
				{
					cout << "\bl";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '5' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('6'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "m";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '6' && delay <= 1)
			{
				cout << "\bn";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '6' && delay <= 1)
				{
					cout << "\bo";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '6' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('7'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "p";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '7' && delay <= 1)
			{
				cout << "\bq";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '7' && delay <= 1)
				{
					cout << "\br";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '7' && delay <= 1)
					{
						cout << "\bs";
						delay = time(0);
						c = _getch();
						
						delay = time(0) - delay;
						if (c == '7' && delay <= 1)
						{
							count = 1;
						}
					}
					
				}
			}
			break;

		case('8'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "t";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '8' && delay <= 1)
			{
				cout << "\bu";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '8' && delay <= 1)
				{
					cout << "\bv";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '8' && delay <= 1)
					{
						count = 1;
					}
				}
			}
			break;
		case('9'):

			if (count == 1) {
				cout << "\b";
			}
			cout << "w";
			count = 0;
			delay = time(0);
			c = _getch();
			delay = time(0) - delay;
			if (c == '9' && delay <= 1)
			{
				cout << "\bx";
				delay = time(0);
				c = _getch();

				delay = time(0) - delay;
				if (c == '9' && delay <= 1)
				{
					cout << "\by";
					delay = time(0);
					c = _getch();

					delay = time(0) - delay;
					if (c == '9' && delay <= 1)
					{
						cout << "\bz";
						delay = time(0);
						c = _getch();

						delay = time(0) - delay;
						if (c == '9' && delay <= 1)
						{
							count = 1;
						}
					}
				}
			}
			break;
		default:
			break;
		}
	}
	
	return 0;
}

