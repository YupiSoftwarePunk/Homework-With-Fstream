#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <vector>


bool IsFileEmpty(const std::string& filename);

void ReadFilePrintNCnsl(const std::string& path1, const std::string& path2, const std::string& path3);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int chooseFile{};
	int chooseAction{};
	char totalChoose;

	const int size = 3;
	char input[30];
	std::string fileLine;

	std::ofstream fout;
	std::ifstream fin;

	std::cout << "\t\tДобро пожаловать в приложение!\n\n";
	std::cout << "В этом приложении вы можете записывать разные параметры в 3 файла и получать результат записей в виде таблицы\n";

	do
	{
		std::cout << "1. Название товара\n2. Количество\n3. Цена\n";
		std::cout << "Выберите файл в который хотите что-нибудь записать \nВвод: ";
		std::cin >> chooseFile;
		std::cin.ignore();


		if (chooseFile == 1)
		{
			if (IsFileEmpty("Name.txt") == false)
			{
				std::cout << "В файле уже есть текст.\n1. Дополнить текст\n2. Очистить файл и заполнить заново\n";
				std::cin >> chooseAction;
				std::cin.ignore();
				if (chooseAction == 1)
				{
					fout.open("Name.txt", std::ofstream::app);
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else if (chooseAction == 2)
				{
					fout.open("Name.txt");
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else
				{
					std::cout << "Неверный ввод!!\n";
				}
			}
			else
			{
				fout.open("Name.txt");
				if (!fout.is_open())
				{
					std::cout << "Ошибка открытия файла!!\n";
				}
				else
				{
					for (int i = 0; i < size; i++)
					{
						std::cout << "Введите значение " << i + 1 << ": ";
						std::cin.getline(input, 40);
						fout << input << std::endl;
					}
				}
				fout.close();
			}
		}


		else if (chooseFile == 2)
		{
			if (IsFileEmpty("Counter.txt") == false)
			{
				std::cout << "В файле уже есть текст.\n1. Дополнить текст\n2. Очистить файл и заполнить заново\n";
				std::cin >> chooseAction;
				std::cin.ignore();
				if (chooseAction == 1)
				{
					fout.open("Counter.txt", std::ofstream::app);
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else if (chooseAction == 2)
				{
					fout.open("Counter.txt");
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else
				{
					std::cout << "Неверный ввод!!\n";
				}
			}
			else
			{
				fout.open("Counter.txt");
				if (!fout.is_open())
				{
					std::cout << "Ошибка открытия файла!!\n";
				}
				else
				{
					for (int i = 0; i < size; i++)
					{
						std::cout << "Введите значение " << i + 1 << ": ";
						std::cin.getline(input, 40);
						fout << input << std::endl;
					}
				}
				fout.close();
			}
		}


		else if (chooseFile == 3)
		{
			if (IsFileEmpty("Price.txt") == false)
			{
				std::cout << "В файле уже есть текст.\n1. Дополнить текст\n2. Очистить файл и заполнить заново\n";
				std::cin >> chooseAction;
				std::cin.ignore();
				if (chooseAction == 1)
				{
					fout.open("Price.txt", std::ofstream::app);
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else if (chooseAction == 2)
				{
					fout.open("Price.txt");
					if (!fout.is_open())
					{
						std::cout << "Ошибка открытия файла!!\n";
					}
					else
					{
						for (int i = 0; i < size; i++)
						{
							std::cout << "Введите значение " << i + 1 << ": ";
							std::cin.getline(input, 40);
							fout << input << std::endl;
						}
					}
					fout.close();
				}
				else
				{
					std::cout << "Неверный ввод!!\n";
				}
			}
			else
			{
				fout.open("Price.txt");
				if (!fout.is_open())
				{
					std::cout << "Ошибка открытия файла!!\n";
				}
				else
				{
					for (int i = 0; i < size; i++)
					{
						std::cout << "Введите значение " << i + 1 << ": ";
						std::cin.getline(input, 40);
						fout << input << std::endl;
					}
				}
				fout.close();
			}
		}
		else
		{
			std::cout << "Неверный ввод!!\n";
		}


		std::cout << "Хотите продолжить?\nВведите [y/n]: ";
		std::cin >> totalChoose;
	} while (totalChoose != 'n');
	
	std::string name = "Name.txt";
	std::string counter = "Counter.txt";
	std::string price = "Price.txt";

	ReadFilePrintNCnsl(name, counter, price);

	return 0;
}



bool IsFileEmpty(const std::string& filename)
{
	std::ifstream file(filename);

	if (!file.is_open())
	{
		std::cout << "Не удалось открыть файл: " << filename<<"\n";
		return true;
	}

	std::string line;
	if (std::getline(file, line)) 
	{
		return false;
	}
	else
	{
		return true;
	}
}

void ReadFilePrintNCnsl(const std::string& path1, const std::string& path2, const std::string& path3)
{
	system("cls");
	std::vector <std::vector<std::string>> informationPrint;

	std::ifstream fin1(path1);
	std::ifstream fin2(path2);
	std::ifstream fin3(path3);

	if (!fin1.is_open() || !fin2.is_open() || !fin3.is_open())
	{
		std::cout << "Ошибка при открытии одного из файлов!!\n";
	}

	std::string line1, line2, line3;

	while (std::getline(fin1, line1) && std::getline(fin2, line2) && std::getline(fin3, line3))
	{
		std::vector<std::string> row = { line1, line2, line3 };
		informationPrint.push_back(row);
	}


	fin1.close();
	fin2.close();
	fin3.close();

	std::cout << "ID\tНазвание\tКол-во\tЦена\n";
	for (int i = 0; i < informationPrint.size(); i++)
	{
		std::cout << i + 1 << ") ";
		for (int j = 0; j < informationPrint[i].size(); j++)
		{
			std::cout << "\t" << informationPrint[i][j] << "\t";
		}
		std::cout << "\n";
	}
}