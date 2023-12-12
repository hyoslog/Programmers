#include <string>
#include <vector>

using namespace std;

int GetDivisorCount(int number)
{
	if (number <= 2)
	{
		return number;
	}

	int count = 2;
	for (int i = 2; (i * i) <= number; ++i)
	{
		if ((number % i) == 0)
		{
			if ((i * i) == number)
			{
				count += 1;
			}
			else
			{
				count += 2;
			}
		}
	}

	return count;
}

int solution(int number, int limit, int power) 
{
	int answer = 0;

	for (int i = 1; i <= number; ++i)
	{
		int value = GetDivisorCount(i);
		value = (value > limit) ? power : value;
		answer += value;
	}

	return answer;
}

int main()
{
	int result = solution(10, 3, 2);
	return 0;
}