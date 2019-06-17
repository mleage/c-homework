#include<iostream>
#include<cmath>
using namespace std;
class Prime {
public:
	Prime(int mn, int n);
	bool isPrime(int n);
	int sumBit(int n);
	int multiBit(int n);
	int squareSumBit(int n);
	void answer();
private:
	int num, mNum;
};
Prime::Prime(int mn, int n)
{
	mNum = mn;
	num = n;
}
bool Prime::isPrime(int n)
{
	int i;
	if (n % 2 == 0)
	{
		return 0;
	}
	else
	{
		for (i = 3; i < n; i += 2)
		{
			if (n%i == 0)
			{
				break;
			}
		}
		if (i >= n)return true;
		else return false;
	}
	int Prime::sumBit(int n)
	{
		int sum = 0;
		for (; n > 0; n /= 10)
		{
			sum += sum % 10;
		}
		return sum;
	}
	int Prime::multiBit(int n)
	{
		int sum = 1;
		for (; n > 0; n /= 10)
		{
			sum *= (sum % 10);
		}
		return sum;
	}
	int Prime::squareSumBit(int n)
	{
		int sum = 0;
		for (; n > 0; n /= 10)
		{
			sum += pow(sum % 10, 2);
		}
		return sum;
	}
	void answer()
	{
		int count = 0, max, sum = 0;
		for (int i = num; i <= mNum; i++)
		{
			if (isPrime(i) && isPrime(sumBit(i)) && isPrime(multiBit(i)) && isPrime(squareSumBit(i)))
			{
				cout++;
				sum += i;
				max = i;
			}
		}
		cout << num << "��" << mNum << "��ĳ���������" << count << "������Ϊ" << sum << "���ֵΪ" << max << endl;
	}
	int main()
	{
		int n1, n2;
		cout << "Ѱ�ҳ���������" << endl;
		cin >> n1 >> n2;
		Prime p(n1, n2);
		p.answer();
		return 0;
	}
