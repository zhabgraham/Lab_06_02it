#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Generate(int* a, const int n, int low, int high)
{ 
	for (int i = 0; i < 2*n; i++)
		{
			a[i] = low + rand() % (high - low + 1);
		}
}

void Sort(int* a, const int n, int i)
{
	for (int i = 0; i < n; i++)
	{
		swap(a[i], a[i + n]);
	}	
}

void print(int* a, const int n)
{
	cout << "a[] = { ";
	for (int i = 0; i < 2*n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "}" << endl;
}

int main()
{
	srand(time(NULL));

	int n;
	cout << "Insert n:" << endl;
	cout << "n = "; cin >> n;
	const int high = 100;
	const int low = 0;
	int* a = new int[2*n];
	Generate(a, n, low, high);
	print(a, n);
	Sort(a, n, 0);
	cout << "Sortified array: " << endl;
	print(a, n);
	delete[ ] a;

	system("pause");
	return 0;
}