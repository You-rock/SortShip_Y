#include <iostream>
#include <string.h>
#include <ctime>
#include <conio.h> 
using namespace std;


const int N = 11;
//const char ship[] = { '####','####','####','####' };

char p[N][N];


int x = 0;
int y = 0;



int one_deck(char p[N][N]) {
	srand(time(0));
	int a;
	int b;
	for (size_t i = 0; i < 4; i++) {
		a = rand() % 11;
		b = rand() % 11;

		if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
			&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {

			p[a][b] = '#';
		}

		else
			i--;
	}
	return p[N][N];
}



int two_deck(char p[N][N]) {
	srand(time(0));
	int a;
	int b;
	for (size_t i = 0; i < 2; i++) {
		a = rand() % 11;
		b = rand() % 11;
		if (a == 10) {
			i--;
		}
		else {

			if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
				&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {
				p[a][b] = '#';
				if (p[a + 1][b] != '#' && p[a + 2][b] != '#' && p[a + 1][b + 1] != '#' && p[a + 1][b - 1] != '#' && p[a + 2][b + 1] != '#'
					&& p[a][b - 1] != '#' && p[a + 2][b - 1] != '#' && p[a][b + 1] != '#')
					p[a + 1][b] = '#';
				else {
					p[a][b] = NULL;
					i--;
				}
			}

			else
				i--;
		}
	}
	a = NULL;
	b = NULL;

	for (size_t i = 0; i < 1; i++) {
		a = rand() % 11;
		b = rand() % 11;
		if (b == 10) {
			i--;
		}
		else {

			if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
				&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {
				p[a][b] = '#';
				if (p[a][b + 1] != '#' && p[a + 1][b + 1] != '#' && p[a - 1][b + 1] != '#' && p[a][b + 2] != '#' && p[a + 1][b + 2] != '#'
					&& p[a - 1][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b + 2] != '#')
					p[a][b + 1] = '#';
				else {
					p[a][b] = NULL;
					i--;
				}
			}

			else
				i--;
		}
	}


	return p[N][N];
}



int three_deck(char p[N][N]) {
	srand(time(0));
	int a;
	int b;
	for (size_t i = 0; i < 1; i++) {
		a = rand() % 11;
		b = rand() % 11;
		if (a >= 9) {
			i--;
		}
		else {

			if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
				&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {
				p[a][b] = '#';
				if (p[a + 1][b] != '#' && p[a + 2][b] != '#' && p[a + 1][b + 1] != '#' && p[a + 1][b - 1] != '#' && p[a + 2][b + 1] != '#'
					&& p[a][b - 1] != '#' && p[a + 2][b - 1] != '#' && p[a][b + 1] != '#') {
					p[a + 1][b] = '#';
					if (p[a + 2][b] != '#' && p[a + 3][b] != '#' && p[a + 2][b - 1] != '#' && p[a + 2][b + 1] != '#' && p[a + 3][b + 1] != '#'
						&& p[a + 1][b - 1] != '#' && p[a + 3][b - 1] != '#' && p[a + 1][b + 1] != '#')
						p[a + 2][b] = '#';
					else {
						p[a][b] = NULL;
						p[a + 1][b] = NULL;
						i--;
					}
				}
				else {
					i--;
					p[a][b] = NULL;
				}
			}
			else
				i--;
		}
	}
	a = NULL;
	b = NULL;

	for (size_t i = 0; i < 1; i++) {
		a = rand() % 11;
		b = rand() % 11;
		if (b >= 9) {
			i--;
		}
		else {

			if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
				&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {
				p[a][b] = '#';
				if (p[a][b + 1] != '#' && p[a + 1][b + 1] != '#' && p[a - 1][b + 1] != '#' && p[a][b + 2] != '#' && p[a + 1][b + 2] != '#'
					&& p[a - 1][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b + 2] != '#') {
					p[a][b + 1] = '#';
					if (p[a][b + 2] != '#' && p[a][b + 3] != '#' && p[a + 1][b + 2] != '#' && p[a - 1][b + 2] != '#'
						&& p[a + 1][b + 3] != '#' && p[a - 1][b + 1] != '#' && p[a + 1][b + 1] != '#' && p[a - 1][b + 3] != '#')
						p[a][b + 2] = '#';
					else {
						p[a][b] = NULL;
						p[a][b + 1] = NULL;
						i--;
					}
				}
				else {
					i--;
					p[a][b] = NULL;
				}
			}
			else
				i--;
		}
	}


	return p[N][N];
}



int four_deck(char p[N][N]) {
	srand(time(0));
	int a;
	int b;
	for (size_t i = 0; i < 1; i++) {
		a = rand() % 11;
		b = rand() % 11;
		if (b >= 8) {
			i--;
		}
		else {
			if (p[a][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b] != '#' && p[a][b + 1] != '#' && p[a][b - 1] != '#' && p[a + 1][b + 1] != '#'
				&& p[a - 1][b - 1] != '#' && p[a + 1][b - 1] != '#' && p[a - 1][b + 1] != '#') {
				p[a][b] = '#';
				if (p[a][b + 1] != '#' && p[a + 1][b + 1] != '#' && p[a - 1][b + 1] != '#' && p[a][b + 2] != '#' && p[a + 1][b + 2] != '#'
					&& p[a - 1][b] != '#' && p[a + 1][b] != '#' && p[a - 1][b + 2] != '#') {
					p[a][b + 1] = '#';
					if (p[a][b + 2] != '#' && p[a][b + 3] != '#' && p[a + 1][b + 2] != '#' && p[a - 1][b + 2] != '#'
						&& p[a + 1][b + 3] != '#' && p[a - 1][b + 1] != '#' && p[a + 1][b + 1] != '#' && p[a - 1][b + 3] != '#') {

						p[a][b + 2] = '#';
						if (p[a][b + 3] != '#' && p[a][b + 4] != '#' && p[a - 1][b + 3] != '#' && p[a + 1][b + 3] != '#' && p[a + 1][b + 4] != '#'
							&& p[a - 1][b + 2] != '#' && p[a + 1][b + 2] != '#' && p[a - 1][b + 4] != '#') {
							p[a][b + 3] = '#';
						}
						else {
							p[a][b] = NULL;
							p[a][b + 1] = NULL;
							p[a][b + 2] = NULL;
							i--;
						}
					}
					else {
						p[a][b] = NULL;
						p[a][b + 1] = NULL;
						i--;
					}

				}
				else {
					i--;
					p[a][b] = NULL;
				}
			}
			else
				i--;
		}
	}
	return p[N][N];
}




int print_sea(char p[N][N], const int N)
{
	cout << "+";
	for (size_t i = 0; i < N; i++)
	{
		cout << "----+";
	}
	cout << endl;

	for (size_t i = 0; i < N; i++)
	{
		cout << '|';
		for (size_t j = 0; j < N; j++)
		{

			if (p[i][j] == '#')
				cout << "####";
			else
				cout << "    ";
			cout << "|";
		}
		cout << endl;
		cout << "+";

		for (size_t i = 0; i < N; i++)
		{
			cout << "----+";
		}
		cout << endl;
	}
	return p[N][N];
}

int main() {

	one_deck(p);
	two_deck(p);
	three_deck(p);
	four_deck(p);

	//for (size_t i = 0; i < N; i++)
	//{
	//	for (size_t j = 0; j < N; j++)
	//	{
	//		if (p[i][j] == '#')
	//		{
	//			cout << p[i][j] << "|";
	//		}
	//		else
	//			cout << " |";

	//	}
	//	cout << endl;
	//}


	print_sea(p, N);
}