#include <iostream>
#include <Windows.h>
#include <string>

void Start();

float Plus(float num1, float num2);
float Minus(float num1, float num2);
float Multip(float num1, float num2);
float Devide(float num1, float num2);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Start();

	return 0;
}

void Start()
{
	float number1, number2;

	std::cout << "������� 2 �����:\n������: ";
	std::cin >> number1;
	std::cout << "������: ";
	std::cin >> number2;

	int size = 4;
	float(*operations[4])(float, float) = { Plus, Minus, Multip, Devide };

	std::cout << "\n\t - ���������� ��������: - \n��������   ���������   ���������   �������\n";

	for (int i = 0; i < size; i++)
	{
		if (i == 3 && number2 == 0)
		{
			std::cout << "�� ���� ������ ������";
		}
		else
		{
			std::cout << "    " << operations[i](number1, number2) << "     ";
		}
	}
	std::cout << "\n\n";
}

float Plus(float num1, float num2)
{
	return num1 + num2;
}
float Minus(float num1, float num2)
{
	return num1 - num2;
}
float Multip(float num1, float num2)
{
	return num1 * num2;
}
float Devide(float num1, float num2)
{
	return num1 / num2;
}