
#include<iostream>
#include<string> //���������� ���� �����
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
	//1  ������
	/*char word[5] = {'H','e','y','!','\0'};
	for (int i = 0; i < 5; i++)	{
		cout << word[i];
	}
	cout << endl;
	//2 ������
	char line[] = "Hellow world!";
	cout << line << endl;
	cout << line[1] << line[2] << endl;
	char sym = line[3];
	cout << sym;
	line[7] = 'W';
	cout << line << endl;*/

	/*string str;//�������� ������, ���������� ������
	str = "hellow world!!!";
	cout << str<<endl;
	str = "Bye World";
	cout << str<<endl;
	str = ""; //��������� ���������� ����������(�������)
	string str2 = str;
	cout << str2;*/

	//������ ������� ������� ������
	/*string s1;//������ ������
	string s2 = "hellow"; //hellow
	string s3("welcome"); //welcome
	string s4(5, 'h'); //hhhhh
	string s5= s2;//hellow*/

	//������������ �����
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
	//��������� �����
	string str5 = "hellow";
	string str6 = "world";
	if (str5 == str6)
		cout << "true\n";
	else
		cout << "false\n";*/
			
	//��� ������ ����� �������
	//string str = "";
	/*cout << "������� �����: ";
	getline(cin, str);
	cout << "�� ����� �����: " + str + "\n\n";
	//������� getline()
	cout << "������� �����������: ";
	getline(cin, str); 
	cout << "�� �����: " + str << endl;*/
	//��������� � ��������� ��������� ������
	/*str = "Hi men!";
	for (int i = 0; i< 7; i++)//����� ����� ������
	{
		cout << str[i];
	}
	cout << endl;

	for (int i = 6; i >=0; i--)	{ //� �������� �������
		cout << str[i];

	}
	cout << endl;

	str = "Hellow\nworl"; //��������� � ����� ������ ������ �����
	cout << str << endl;*/

	//������ �����
	//����� .length() � .size()
	/*string str7;
	cout << "������� �����: ";
	getline(cin, str7);
	int len = str7.length();
	int len2 = str7.size();
	cout << "������ ������ ����� size = " + str   << len<<endl;
	cout << "������ ������ ����� lenth = " + str << len<<endl;*/
	//����� .insert
	/*string str8;
	cout << "������� ������ ������: \n";
	getline(cin, str8);
	string str9;
	cout << "������� ������ ������: \n";
	getline(cin, str9);
	str8.insert(3, str9);
	cout << str8;
	str8.replace(2, 3, str9);
	cout << endl;*/
	//����� .replace()
	/*string str10 = "oranges";
	string str11 = "1234567";
	str10.replace(2, 3, str11);
	cout << str10<<endl;*/
	//����� .find()  ����� �������� � ������ ������
	/*string str12 = "Hello world!";
	int index = str12.find("l");//���� ������ ���������� � l ��� index=2
	cout <<"������ ���������� index =  "<< index << endl;
	index = str12.find("l", 6); //���� ���������� l ������� � 6�� ������� ���������� �� 9 �������� index=10;
	cout << "���������� ������� � 6 �������� index = "<< index << endl;*/
	//����� .rfind() ����� �������� � ����� ������
	/*string str13 = "Hello world!";
	int index = str13.rfind("l");//���� ������ ���������� � l ��� index=9
	cout << "������ ���������� index =  " << index << endl;
	index = str13.rfind("l", 6); //���� ���������� l ������� � 6�� ������� ���������� ��  �������� index=3;
	cout << "���������� ������� � 6 �������� index = " << index << endl; */

	//����� .substr()
	/*string str14 = "Hello World!";
	string str15 = str14.substr(3);
	cout << str15 << endl; //�� ������ lo world!
	str15 = str14.substr(3, 5);
	cout << str15 << endl;	//�� ������ lo wo 
	//3 - �������, � ������ ������� ��������
	//5 - �������������� ��������, ����������� �� �� ����� ����� ����� ���������.*/

	//�������������� ����� � ������ ������� to_string()
	/*int N = 123;
	string str16 = to_string(N);
	cout << str16 << endl;//�� ������ 123
	str16 += "abc";
	cout << str16 << endl;//�� ������ 123abc*/

	//�������������� ������ � ����� ������� stoi()
	/*cout << "������� �����: ";
	cin >> n;
	string str18 = to_string(n);
	string newStr;

	for (int i = str18.length()-1; i >=0; i--)
		newStr += str18[i];
	int newN = stoi(newStr);
	cout << newStr << endl;*/

	//���������� ������ � ������� ������� ������� toupper()
	/*string str20;
	cout << "������� ������: \n";
	getline(cin, str20);
	str20[0] = toupper(str20[0]);
	for (int i = 0; i < str20.length(); i++)
		str20[i] = toupper(str20[i]);
	cout << str20 << endl;*/
	//���������� ������ � ������ ������� ������� toupper()
	//string str20;
	/*cout << "������� ������: \n";
	getline(cin, str20);
	str20[0] = tolower(str20[0]);
	for (int i = 0; i < str20.length(); i++)
		str20[i] = tolower(str20[i]);
	cout << str20 << endl;*/
	
	
	//������ 1
	
	/*cout << "������ 1\n������� ������: \n";
	getline(cin, str21);
	cout << "������� �����:\n";
	cin >> n;
	cout << repeatStr(str21, n);
	cout << endl;*/

	//������ 2
	string str22,str23;
	cout << "������ 2\n������� ������: \n";
	getline(cin, str22);
	cout << "������� ������ ������: ";
	getline(cin, str23);
	if (compareSize(str22, str23) == 1)
		cout << "����� ������ ������ ������\n\n";
	else
		if (compareSize(str22, str23) == -1)
			cout << "����� ������ ������ ������";
		else
			cout << "����� ����� �����";
	









	cout << "\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}