#include <iostream>
#include <Windows.h>
#include <chrono>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0;
	int number = 0;
	int hp = 0;
	int randomNumber = 0;
	int difficulty = 1;
	int maxHp;
	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\tИгра \"Выберите Сложность\"\n\n\n";
		std::cout << "1 - Легкий (1 - 500)\n";
		std::cout << "2 - Сложный (1 - 5000)\n";
		std::cout << "0 - Выход в главное меню\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{

			randomNumber = rand() % 500 + 1;
			hp = maxHp;

			while (true)
			{

				system("cls");
				std::cout << "\nКол-во жизней: " << hp << "\n";
				std::cout << "Введите число от 1 до 500: ";
				std::cin >> number;

				if (number == randomNumber)
				{

					std::cout << "\nВы угодали! Поздравляю!\n";
					system("pause");
					break;




				}
				else if (number < 1 || number > 500)
				{
					std::cout << "\nВы вышли из диапозона\n";
					Sleep(1200);
				}
				else
				{

					hp--;
					if (hp <= 0)
					{
						std::cout << "\nВы проиграли!\n";
						std::cout << "Число было: " << randomNumber << "\n";
						system("pause");
						break;

					}
					std::cout << "Не угодали\n";
					std::cout << "Взять подсказку за 1 жизнь?\n";
					std::cout << "1 - да\nЛюбое число - Нет\nВвод: ";
					std::cin >> choose;

					if (choose == 1)
					{
						hp--;
						if (hp <= 0)
						{
							std::cout << "\nВы проиграли!\n";
							std::cout << "Число было: " << randomNumber << "\n";
							system("pause");
							break;
						}
						if (number < randomNumber)
							std::cout << "Загаданное число больше\n";
						else
							std::cout << "Загаданное число меньше\n";
						Sleep(2000);
					}


				}





			}


		}
		else if (choose == 2)
		{
			randomNumber = rand() % 5000 + 1;
			hp = maxHp;

			while (true)
			{

				system("cls");
				std::cout << "\nКол-во жизней: " << hp << "\n";
				std::cout << "Введите число от 1 до 5000: ";
				std::cin >> number;

				if (number == randomNumber)
				{

					std::cout << "\nВы угодали! Поздравляю!\n";
					system("pause");
					break;




				}
				else if (number < 1 || number > 5000)
				{
					std::cout << "\nВы вышли из диапозана\n";
					Sleep(1200);
				}
				else
				{
					hp--;
					if (hp <= 0)
					{
						std::cout << "\nВы проиграли!\n";
						std::cout << "Число было: " << randomNumber << "\n";
						system("pause");
						break;

					}
					std::cout << "Не угодали\n";
					std::cout << "Взять подсказку за 1 жизнь?\n";
					std::cout << "1 - да\nЛюбое число - Нет\nВвод: ";
					std::cin >> choose;

					if (choose == 1)
					{
						hp--;
						if (hp <= 0)
						{
							std::cout << "\nВы проиграли!\n";
							std::cout << "Число было: " << randomNumber << "\n";
							system("pause");
							break;
						}
						if (number < randomNumber)
							std::cout << "Загаданное число больше\n";
						else
							std::cout << "Загаданное число меньше\n";
						Sleep(2000);
					}

				}

			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}



		}
		return 0;

}











//int main()
//{ 
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//
//	int a = 1000;
//
//	for (int Otabek = 0;; Otabek++)
//	{
//		std::cout << "моGGнул " << Otabek;
//	}
//
//
//
//
//
//
//}
//int main()
//{
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//
//	int a = 0;
//
//		
//
//
//	do
//	{
//
//		std::cout << "1 - Ларионов\n";
//		std::cout << "2 - Александр\n";
//		std::cout << "3 - Дмитриевич\n";
//		std::cout << "Выберите пункт: ";
//		std::cin >> a;
//
//
//
//	} while (a < 1 || a > 3);
//	
//	if (a == 1)
//	{
//		std::cout << "Ларионов\n";
//	}
//	else if (a == 2)
//	{
//		std::cout << "Александр\n";
//	}
//	else
//	{
//		std::cout << "Дмитриевич";
//	}
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//
//	SetConsoleCP(CP_UTF8);
//	SetConsoleOutputCP(CP_UTF8);
//
//	std::cout << "Меня зовут НУрик.\n"
//		"\tМне " << 18 << "лет."
//		"\nРазработка ПО."
//		"\n\tПотому что не все пельмени из качественного мяса."
//		"\n\tПросто качественный";
//
//	double one = 0;
//	double two = 0;
//	char sym = ' ';
//
//	std::cout << "\tКАЛЬКУЛЯТОР\n";
//	std::cout << "\t+ Сложение\n";
//	std::cout << "\t- Вычетание\n";
//
//	std::cout << "\nВведите знак: ";
//	std::cin <<  ;
//  return 0;
//} //
/*







  типы данных

  bool                       true/false   0 - false
  char                       '+'     43
  unsigned                    0 -- 255









  short          123        -32768 -- 32767
  unsigned short 123        0 -- 65535

  int           123456      -2747483648 -- 2147483647
  unsigned  int 123456      0 - 4294967295 

  float         123.542     +- 3.4e-38...3.4e+38

  double        123123.123123   +- 1.7e-308..1.7e-308
  long double   no comment      3.4-4932
  
  long long int ........  

  auto          ???

  Операторы:
  
  математические: + 0 / * % () ++ -- += -= *= /= =
  сравнительный:  > < == >= <= !=
  логические:     && (и) || (или)    ! (не)




  ТАБУ: goto  and or not    int номерОдин;

*/























