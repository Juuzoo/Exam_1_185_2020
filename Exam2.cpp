#include <iostream> 
#include <string>

using namespace std;

class Counter
{
public:
	int a = 0;
	int num = 0;

	Counter(int a)
	{
		this->a = a;
		this->num = 0;
	}

	void numbers(int a)
	{
		if (a > 0)
		{
			while (num != a)
			{
				num = num + 1;
				cout << "+1=" << num << "\n";
			};

			while (a > 1)
			{
				if (a % 2 == 0)
				{
					a = (a - 2);
				}
				else
				{
					a = (a - 1);
				};
				cout << "-2=" << a << '\n';
			};
		};
	}
};

int main()
{
	Counter gg(0);
	gg.numbers(90);
	return 0;
}
