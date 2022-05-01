#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += (sqrt(1 + cos(sin(1 * i)) * cos(sin(1 * i)))) / (1 + sin(cos(1 * i)) * sin(cos(1 * i)));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = 1;
	do {
		S += (sqrt(1 + cos(sin(1 * i)) * cos(sin(1 * i)))) / (1 + sin(cos(1 * i)) * sin(cos(1 * i)));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (sqrt(1 + cos(sin(1 * i)) * cos(sin(1 * i)))) / (1 + sin(cos(1 * i)) * sin(cos(1 * i)));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (sqrt(1 + cos(sin(1 * i)) * cos(sin(1 * i)))) / (1 + sin(cos(1 * i)) * sin(cos(1 * i)));
	}
	cout << S << endl;
	return 0;
}