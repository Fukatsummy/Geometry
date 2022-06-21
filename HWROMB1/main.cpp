#include<iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define ROMB
//#define TERNARY

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << " ¬ведите число: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1


#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << " ";
		cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " ";
		cout << "/";
		cout << endl;
	}
#endif ROMB

#ifdef TERNARY
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* "; if(i % 2==j % 2)
		   //if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
		   //(i + j) % 2 == 0 ? cout << "* " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // TERNARY

		for (int i = 0; i < n; i++)
			for (int j = 0; j <= n; j++)
				cout << (j == n ? "\n" : (i + j) % 2 == 0 ? "219" : " ");
		cout << endl;
}
