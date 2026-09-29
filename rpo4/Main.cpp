#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	




	return 0;
}
/*

	Типы данных:

	bool							true/false	0 - false
	char							'-'		43		-128 -- 127
	unsighned char					'#'				0 - 256

	short							123				-32768 -- 32767
	unsughned short					123				0 -- 65535

	int								456326			-2147483648 -- 2147483647
	long long int					12345678		дофига
	unsighned int					123456463		0 -- 42944967295

	float							12345.4561		+- 3.4E+-38
	double							12345678.10536	1.7E+-308
	long double						no comment		3.4e-4932 -- 1.1e+4932


	Операторы:

	математические: + - * / = % ++ -- += -= *= /= ()
	сравнительные: > < >= <= != == <=>
	логические: && (и)		|| (или)	! (не)


	ТАБУ:	goto		and or not		int имяПеременной
*/

/*double a = 0, b = 0, c = 0, x1 = 0, x2 = 0, d = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите В: ";
	std::cin >> b;
	std::cout << "Введите С: ";
	std::cin >> c;

	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b,2) - 4 * a * c;

	std::cout << "\nДискриминант: " << d << "\n\n";
	if (d<0)
	{
		std::cout << "Корней нет\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else
	{
		x1 = (-b - std::sqrt(d)) / (2 * a);
		x2 = (-b + std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n\n";
		std::cout << "Второй корень: " << x2 << "\n\n";
	}*/

/*
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);	//	1251

std::cout << "Игорь\n";
std::cout << "\tЧтобы есть\n";
std::cout << "\t\tЧтобы помогать друг другу\n";
std::cout << "\t" << 8 << " гривен\n";
std::cout << "Местоимение";
*/

	// тип_данных имя_переменных

	/*double a = 4.3;
	double b = 4.3;

	if (a == b)
	{
		std::cout << "Tumyp";
	}
	*/
	
	/*if (a == 0)
	{
		std::cout << "Hello\n";
	}
	else if (a != 0)
	{
		std::cout << 2;
	}
	else if (a != 10)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << 1;
	}
	*/

	/*SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);	//	1251

	double one = 0;
	double two = 0;
	
	std::cout << "\tКалькулятор\n\n";
	std::cout << "Введите первое число: ";
	std::cin >> one;
	std::cout << "Введите второе число: ";
	std::cin >> two;

	char smth;

	std::cout << "\nВведите символ ( + - * / ): ";
	std::cin >> smth;

	std::cout << "\n";

	if (smth == '+')
	{
		std::cout << "Сумма: " << one + two << "\n";
	}
	else if(smth == '-')
	{
		std::cout << "Разность: " << one + two << "\n";
	}
	else if (smth == '*')
	{
		std::cout << "Произведение: " << one + two << "\n";
	}
	else if (smth == '/')
	{
		std::cout << "Частное: " << one + two << "\n";
	}
	else if (smth == '/')
	{
		if (two == 0)
		{
			std::cout << "Частное: " << one / two << "\n";
		}
		else
		{
			std::cout << "Делить на ноль нельзя!\n";
			std::cerr << "Text";
		}
	}
	else
	{
		std::cout << "Ошибка!";
	}
	*/