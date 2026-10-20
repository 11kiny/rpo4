#include <iostream>
#include <Windows.h>

/*
тип_возврата Имя_функции (аргументы_функции, ...)
{
	тело_функции
}
*/
/*
void PrintHello()
{
	int a = 0;
	std::cout << "Hello\n";
}

void PrintNum(int number)
{
	number += 100;
	if (number > 0)
	{
		return;
	}
	std::cout << number << "\n";
}

int Sum(int one, int two)
{
	return 1123;
}
*/
/*double Sum(double one, double two)
{
	return one + two;
}
double Razn(double one, double two)
{
	return one - two;
}
double Proiz(double one, double two)
{
	return one * two;
}
double Chast(double one, double two)
{
	return one / two;
}
double MyPow(double one, double two)
{
	double result = one;
	for (int i = 1; i < two; i++)
	{
		result = result * one;
	}
	return result;
}*/
/*void PrintArr(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}

void SetArr(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = rand() % 6;
	}
}*/
/*int Sum(int one, int two)
{
	return one + two;
}

double Sum(double one, double two)
{
	return one + two;
}

char Sum(char one, char two)
{
	return one + two;
}*/
/*SetArr(arr, size);
	PrintArr(arr, size);*/
/*void ShowArray(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}
void ShowArray(double name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}
void ShowArray(char name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}*/
/*void FillArray(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = rand() % 9 + 1;
	}
}
void FillArray(double name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = (rand() % 20 + 1) + (double)(rand() % 9 + 1) / 10;
	}
}
void FillArray(char name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = rand() % 192 + 32;
	}
}*/
/*template <typename T1>
int BAHEK(T1 one, T1 two)
{
	return one - two;
}
	//BAHEK(3.7, 4.6);*/
/*int Fac(int num)
{
	if (num < 0)
	{
		return 0;
	}
	if (num == 0)
	{
		return 1;
	}
	return num * Fac(num - 1);
}
int Umn(int num, int two)
{
	if (two == 0)
	{
		return 0;
	}
	return num + Umn(num, two - 1);
}
void Plus(int* num)
{
	*num += 10;
}
int Plus(int num)
{
	return num += 10;
}
void MySwap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void FillArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 10;
	}
}
int* Lol()
{
	int* car = new int;
	return car;
}*/

void PushArray(int *&arr, int &size)
{
	int *temp = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	
	size++;
	arr = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}
	delete[] temp;

	arr[size - 1] = 100;
}

void PushArray2(int*& arr, int& size)
{
	size++;

	int* temp = new int[size];

	for (int i = 0; i < size - 10; i++)
	{
		temp[i] = arr[i];
	}
	temp[size - 1] = 100;

	std::swap(arr, temp);

	delete[]temp;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	
	/*	int a = 5;
	//Plus(&a);
	a = Plus(a);
	int b = a;
	Plus(&b);
	int* ptr = &a;
	//ptr = &b;

	std::cout << a << "\n";
	std::cout << &a << "\n";
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	std::cout << &ptr << "\n";*/
	/*	int one = 10, two = 25;

	std::cout << one << " " << two << "\n";
	std::swap(one, two); //меняет местами значения переменных
	std::cout << one << " " << two << "\n";

	std::cout << one << " " << two << "\n";
	MySwap(one, two);
	std::cout << one << " " << two << "\n";*/
	/*const int size = 5;
	int arr[size]{ 3,1,2,5,6 };
	
	FillArray(arr, size);

	std::cout << arr << "\n";
	std::cout << *arr << "\n";
	std::cout << arr + 1 << "\n";
	std::cout << *(arr + 1) << "\n";

	std::cout << arr + 5 << "\n";
	*(arr + 5) = 100;
	std::cout << *(arr + 5) << "\n";*/
	/*int* arr = new int[5];
	arr[0] = 10;
	delete[] arr;
	arr = nullptr;*/
	/*int row = 3, col = 4;

	int ** name = new int *[row];
	for (int i = 0; i < row; i++)
	{
		name[i] = new int[col];
	}
	name[1][2] = 100;
	for (int i = 0; i < row; i++)
	{
		delete[] name[i];
	}
	delete[] name;
	name = nullptr;*/
	/*int side = 2, row = 4, col1 = 4, col2 = 3; 

	int*** serega = new int**[side];

	for (int i = 0; i < side; i++)
	{
		serega[i] = new int* [row];
	}

	for (int i = 0; i < row; i++)
	{
		serega[0][i] = new int[col1];
	}

	serega[1][0] = new int[2];
	for (int i = 1; i < row; i++)
	{
		serega[1][i] = new int[col2];
	}


	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < row; j++)
		{
			delete[] serega[i][j];
		}
		delete[] serega[i];
	}
	delete[] serega;*/

	int size = 5;
	int* ptr = nullptr;





	/*int* arr = new int[size]{1, 2, 3, 4, 5};
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";
	
	PushArray(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	delete[]arr;*/

	std::cout << "\n";

	return 0;
}

/*int ChoiceCat, ChoiceDrink, choiceYesOrNo, korzina = 0;
	double apple = 115, orange = 130, abricos = 145, grusha = 180, tomato = 100, onion = 110, cucumber = 90, garlic = 200, petrush = 265, AllSum = 0, colvo;

	std::cout << "\t\tМагазин \"Соки Севы\"\n\n1. Фруктовые соки;\n2. Овощные соки;\n3. Чаи.\n\nКорзина: " << korzina << "\n\nВыберите категорию напитков : ";
	std::cin >> ChoiceCat;

	std::cout << "\n";
	while (true)
	{
		if (ChoiceCat == 1)
		{
			system("cls");
			std::cout << "\n\tФруктовые соки\n\n1. Яблочный сок;\n2. Апельсиновый сок;\n3. Абрикосовый сок;\n4. Грушевый сок.\n\nВыберите напиток: ";
			std::cin >> ChoiceDrink;
			while (true)
			{
				if (ChoiceDrink == 1)
				{
					std::cout << "\nСтоимость яблочного сока составляет 115 рублей.";
					system("cls");
					std::cout << "\nСколько литров вы хотите взять?\n\nВыбор: ";
					std::cin >> colvo;
					std::cout << "\nВы хотите положить в корзину сок?\n\n1. Да;\n0. Нет.\n\nВыбор: ";
					std::cin >> choiceYesOrNo;
					if (choiceYesOrNo == 1)
					{
						AllSum = korzina + apple;	
					}
					else if (choiceYesOrNo == 0)
					{
						break;
					}
					else
					{
						std::cout << "Неверный ввод!";
						Sleep(1500);
					}
				}
				else if (ChoiceDrink == 2)
				{
					std::cout << "\nСтоимость апельсинового сока составляет 130 рублей.";
					system("cls");
					std::cout << "\nСколько литров вы хотите взять?\n\nВыбор: ";
					std::cin >> colvo;
					while (colvo >= 0)
					{
						std::cout << "\nВы хотите положить в корзину сок?\n\n1. Да;\n2. Нет.\n\nВыбор: ";
						std::cin >> choiceYesOrNo;
						if (choiceYesOrNo == 1)
						{
							AllSum = korzina + apple;
						}
						else if (choiceYesOrNo == 0)
						{
							break;
						}
						else
						{
							std::cout << "Неверный ввод!";
							Sleep(1500);
						}
					}
				}
				else if (ChoiceDrink == 3)
				{
					std::cout << "\nСтоимость литра абрикосового сока составляет 145 рублей.\n";
					do
					{
						system("cls");
						std::cout << "\nВы хотите положить сок в корзину?\n\n1. Да;\n0. Нет.\nВыбор: ";
						std::cin >> choiceYesOrNo;
						if (choiceYesOrNo == 1)
						{
							AllSum = korzina + apple;
						}
						else if (choiceYesOrNo == 0)
						{
							break;
						}
						else
						{
							std::cout << "Неверный ввод!";
							Sleep(1500);
						}
					} while (choiceYesOrNo >= 0 && choiceYesOrNo <= 1);
				}
				else if (ChoiceDrink == 4)
				{
					std::cout << "\nСтоимость грушевого сока составляет 180 рублей.\n";
				}
				else
				{
					std::cout << "Не получилось обработать операцию. Повторите попытку!";
				}
			}
		
		}

		else if (ChoiceCat == 2)
		{
			std::cout << "\tОвощные соки\n\n1. Томатный сок;\n2. Луковый сок;\n3. Огуречный сок.\n\nВыберите напиток: ";
			std::cin >> ChoiceDrink;

		}
		else if (ChoiceCat == 3)
		{
			std::cout << "\tЧаи\n\n1. Чесночный;\n2. Петрушевый.\n\nВыберите напиток: ";
			std::cin >> ChoiceDrink;

		}
		else
		{
			std::cout << "Неверный ввод!";
		}
	}*/
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

/*	const int size = 7;
	int arr1[size]{};
	double arr2[size]{};
	char arr3[size]{};
	
	FillArray(arr1, size);
	ShowArray(arr1, size);
	std::cout << "\n";
	FillArray(arr2, size);
	ShowArray(arr2, size);
	std::cout << "\n";
	FillArray(arr3, size);
	ShowArray(arr3, size);*/
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
/*int arr[size]{};

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 6;
		std::cout << arr[i] << " ";
	}
	
	std::cout << "\n";

	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";

	}

	for (size_t i = 0; i < size; i++)
	{


		if (arr[i] == 0)
		{
			std::cout << -1 << " ";
		}

	}*/
/*const int row = 3, col = 4;
	int arr[row][col]{};
	int summ = 0;
	
	arr[0][0] = 100;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			summ += arr[i][j];
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "|\t" << summ << " \n";
	}*/