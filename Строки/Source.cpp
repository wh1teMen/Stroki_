
#include<iostream>
#include<string> //библиотека имен строк
using namespace std;

string repeatStr(string str,int n) {
	string newStr;
	for (int i = 0; i <n; i++)
		newStr += str+" ";
		return newStr;
}
int compareSize(string str1,string str2) {
	if(str1.length()>str2.length())
		return 1;
	if(str1.length()<str2.length())
	return -1;
	return 0;
}






int main() {
	setlocale(LC_ALL, "ru");
	int n;
	string str21;
	//1  способ
	/*char word[5] = {'H','e','y','!','\0'};
	for (int i = 0; i < 5; i++)	{
		cout << word[i];
	}
	cout << endl;
	//2 способ
	char line[] = "Hellow world!";
	cout << line << endl;
	cout << line[1] << line[2] << endl;
	char sym = line[3];
	cout << sym;
	line[7] = 'W';
	cout << line << endl;*/

	/*string str;//создание строки, изначально пустая
	str = "hellow world!!!";
	cout << str<<endl;
	str = "Bye World";
	cout << str<<endl;
	str = ""; //обнуление символьной переменной(строчки)
	string str2 = str;
	cout << str2;*/

	//Другие способы созданя строки
	/*string s1;//пустая строка
	string s2 = "hellow"; //hellow
	string s3("welcome"); //welcome
	string s4(5, 'h'); //hhhhh
	string s5= s2;//hellow*/

	//Конкатенация строк
	//string str1 = "Hello";
	//string str2 = "world";
	//string str3 = str1 + " " + str2 + "!";
	
	/*string str = "oranges";
	string str2 = "bananas";
	cout << str + " and " + str2+"\n";
	string str3 = str + " without " + str2;
	cout << str3 << endl;
	string str4 = "apples";
	str4 += " and kiwi";
	cout << str4 << endl;
	//Сравнение строк
	string str5 = "hellow";
	string str6 = "world";
	if (str5 == str6)
		cout << "true\n";
	else
		cout << "false\n";*/
			
	//Вод строки через консоль
	//string str = "";
	/*cout << "Введите члово: ";
	getline(cin, str);
	cout << "Вы ввели слово: " + str + "\n\n";
	//Функция getline()
	cout << "Введите предложение: ";
	getline(cin, str); 
	cout << "Вы ввели: " + str << endl;*/
	//Обращение к отдельным элементам строки
	/*str = "Hi men!";
	for (int i = 0; i< 7; i++)//вывод через массив
	{
		cout << str[i];
	}
	cout << endl;

	for (int i = 6; i >=0; i--)	{ //в обратную сторону
		cout << str[i];

	}
	cout << endl;

	str = "Hellow\nworl"; //выводится с новой строки второе слово
	cout << str << endl;*/

	//Методы строк
	//Метод .length() и .size()
	/*string str7;
	cout << "Введите текст: ";
	getline(cin, str7);
	int len = str7.length();
	int len2 = str7.size();
	cout << "Длинна строки через size = " + str   << len<<endl;
	cout << "Длинна строки через lenth = " + str << len<<endl;*/
	//Метод .insert
	/*string str8;
	cout << "Введите первую строку: \n";
	getline(cin, str8);
	string str9;
	cout << "Введите вторую строку: \n";
	getline(cin, str9);
	str8.insert(3, str9);
	cout << str8;
	str8.replace(2, 3, str9);
	cout << endl;*/
	//Метод .replace()
	/*string str10 = "oranges";
	string str11 = "1234567";
	str10.replace(2, 3, str11);
	cout << str10<<endl;*/
	//Метод .find()  поиск элемента с начала текста
	/*string str12 = "Hello world!";
	int index = str12.find("l");//ищет первое совпадение с l это index=2
	cout <<"Первое совпадение index =  "<< index << endl;
	index = str12.find("l", 6); //ишет совпадение l начиная с 6го элемнта совпадение на 9 элементе index=10;
	cout << "Совпадение начиная с 6 элемента index = "<< index << endl;*/
	//Мктод .rfind() поиск элемнета с конца текста
	/*string str13 = "Hello world!";
	int index = str13.rfind("l");//ищет первое совпадение с l это index=9
	cout << "Первое совпадение index =  " << index << endl;
	index = str13.rfind("l", 6); //ишет совпадение l начиная с 6го элемнта совпадение на  элементе index=3;
	cout << "Совпадение начиная с 6 элемента index = " << index << endl; */

	//Метод .substr()
	/*string str14 = "Hello World!";
	string str15 = str14.substr(3);
	cout << str15 << endl; //на экране lo world!
	str15 = str14.substr(3, 5);
	cout << str15 << endl;	//на экране lo wo 
	//3 - позиция, с котрой берется значения
	//5 - необязательный аргумент, указывающий на то какой длины будет подстрока.*/

	//Преобразование числа в строку функция to_string()
	/*int N = 123;
	string str16 = to_string(N);
	cout << str16 << endl;//на экране 123
	str16 += "abc";
	cout << str16 << endl;//на экране 123abc*/

	//Преобразование строки в число Функция stoi()
	/*cout << "Введите число: ";
	cin >> n;
	string str18 = to_string(n);
	string newStr;

	for (int i = str18.length()-1; i >=0; i--)
		newStr += str18[i];
	int newN = stoi(newStr);
	cout << newStr << endl;*/

	//Возведение строки в верхний регистр Функция toupper()
	/*string str20;
	cout << "Введите строку: \n";
	getline(cin, str20);
	str20[0] = toupper(str20[0]);
	for (int i = 0; i < str20.length(); i++)
		str20[i] = toupper(str20[i]);
	cout << str20 << endl;*/
	//Возведение строки в нижний регистр Функция toupper()
	//string str20;
	/*cout << "Введите строку: \n";
	getline(cin, str20);
	str20[0] = tolower(str20[0]);
	for (int i = 0; i < str20.length(); i++)
		str20[i] = tolower(str20[i]);
	cout << str20 << endl;*/
	
	
	//Задача 1
	
	/*cout << "Задача 1\nВведите строку: \n";
	getline(cin, str21);
	cout << "Введите число:\n";
	cin >> n;
	cout << repeatStr(str21, n);
	cout << endl;*/

	//Задача 2
	string str22,str23;
	cout << "Задача 2\nВведите строку: \n";
	getline(cin, str22);
	cout << "Введите вторую строку: ";
	getline(cin, str23);
	if (compareSize(str22, str23) == 1)
		cout << "Длина первой строки больше\n\n";
	else
		if (compareSize(str22, str23) == -1)
			cout << "Длина второй строки больше";
		else
			cout << "Длины строк равны";
	









	cout << "\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}