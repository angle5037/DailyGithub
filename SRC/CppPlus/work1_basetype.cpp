
/*
OOP����������̣�ǿ�����ݣ���ͼ�����������������Ҫ��OOP������Ʒ�ʽ��������࣬�����ڴ���Ŀ�����

C++֧�ַ��ͱ�̱�̣�ģ�壩ģʽ����OOP��Ŀ����ͬ������Ϊ�����ô���ͼ򻯳��������Ƿ��ͱ��ǿ�����Ƕ������ض��������� 

����ֲ�������ϰ���Ӳ�� + ���Բ��� ����> �±�׼ C++98,C++11,C99

���򴴽�: Դ���� -> ����ɻ������� + Ŀ����������ӳ����������룬����룩-> ��ִ�д���
Դ�����ļ���չ��ȡ����C++��ʵ�֣���UNIX�����ִ�Сд��

C����������������ƽṹ�ͺ��������ԡ�C++�����˶���������̺ͷ��ͱ�̵�֧��
ISOC++��׼��C++98/03��C++11��Ϊȷ���ڶ�ʵ�ֵļ����ṩ�˻���
*/


#include <iostream>	//#include <iostream.h>
#include <cmath>	//<math.h>
#include <climits>  //������ų���������������ֵ��:#define INT_MAX 32767 ...
#include <typeinfo>
#include <vector>
#include <cstring> //<string.h>
#include <string>	//class
using namespace std;	//�����ռ����ָ��

struct student 	//tag �ޱ�ǩ֮���޷������������� 
{
	int age;
	std::string name;	// char name[20];
	double score;
}s1 = 
{ 
	22, 
	"zhangsan", 
	85.0
};

union num	//������ֻ�ܴ洢����һ���������ͣ�int��long�� ,����Ϊ����Ա 
{
	int x;
	long y;
}; 

struct widget
{
	int type;	//id���ͱ�ʶ��(����Ա��д) 
	union		//����������(anonymous union)��Ա�����ַ��ͬ 
	{
		int id1;
		char id2[20];	
	};	
};
/*
	widget w1;
	if (w1.type == 1)
		cin >> w1.id1;
	else
		cin >> w1.id2; 
*/ 

int 

main(void)	//�Ϸ���ʽ���س���ո�ɻ�����
{
	
	cout << "hello" 
		<< "world\n";	//���͵�cout����Ϣ�� << (���������)
	int a, b, c;
	a = b = c = 2;	//�Ϸ�����������ֵ��c=2, b=c, a=b
	a = (b = 3) + 3;
	cin >> a;		//cin��һ��istream�����
					//cin.get()��Ҫ������䣬��һ����ȡ���ڶ�����ֱͣ������enter
	std::cout << a << b << c; //cout�������滻�ɵ�ǰֵ25��Ȼ���ֵת���ɺ��ʵ�����ַ�
	cout << endl;	//������
	//return 0;		//���ظ�����ϵͳANSI/ISO C++��׼����ʽ����������䣬������main()

	int t = true; int f = false;	// **<-->bool
	bool start = -100; bool stop = 0;
	const int Months = 12;			//�޶���
	
	char ch = 'a';
	int i = ch;
	cout.put(ch);	//a
	cout.put(i);	//a	����ַ�
	cout.put(97);	//a
	cout.put('a');	//a
	cout << i;		//97
	cout << 'a';	//a
	cout << '\n';
	//cout << "\"hello\" \u00E2"; //ת���ַ���ͨ���ַ���
	//wchar_t op = L'p'; //���ַ����ͣ��������ͣ�	
	//char16_t ch1 = u'q';//�������ͣ��޷��ţ�	�汾��������
	//char32_t ch2 = U'\u0000222B';
	//wout << L"tall" << endl;

	//��������
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float f = 10.0 / 3.0;
	double d = 10.0 / 3.0;
	float million = 1.0e6;
	cout << f << d << endl;				//3.333333
	cout << f * million << endl;		//3333333.250000	���߸�ֵ��������
	cout << 10 * f * million << endl;	//33333332.000000
	cout << d * million << endl;		//3333333.333333
	float f1 = 2.34e+22f;
	float f2 = f1 + 1.0;
	cout << f2 - f1;			//0	���ȶ�ʧ
	float f = 120 / 4 * 5;		//150	���ȼ���ͬ��������
	float ff = 1 * 2 + 2 * 3;	//8
	
	//��������ת�����⣺long��short)û���⣻short��long���������⣨����ǿ��ת��static_cast<>��
	cout << sqrt(4) << endl << pow(2, 3) << endl << rand() << endl;
	int int_max = INT_MAX;
	int a(25);	//Cû�еĳ�ʼ���﷨
	int b{ 25 };// b = {25} �Ⱥ�ʹ����񶼿�
	int c{}; // c = {} ��ʼ��Ϊ0
	const int x1 = 65;
	int x2 = 95;
	char c1 = { x1 };	//A �����Ϸ�
	//char c2 = { x2 };	//�������Ϸ�(x2���ܴܺ�)
	cout << sizeof(int) << ":" << INT_MIN << "~" << INT_MAX << endl;
	int oc = 042; //34
	int hx = 0xA5; //10*16+5=165
	
	//�Զ��ƶ�����
	auto a = 1.3e12L; 
	cout << typeid(a).name(); //long double
	std::vector<double>scores;
	auto pv = scores.begin(); //std::vector::iterator pv = scores.begin();
	auto b = 0;    // �Զ��ƶ����ͳ�ʼ��Ϊ0���������
	
	//����
	int arr[] = { 1, 2, 3 }; //�Զ�ʶ�������С
	//int arr[] = { 1, 2, 3.0 }; //error
	char ch[3]{ '1', 'a', '\0' }; //new C++
	float f[3];
	//f[3] = {0};    //error ����ʱ���ܳ�ʼ��
	f[0] = 1.0;
	cout << sizeof arr << sizeof arr[0] << arr[1] * arr[2] << endl; //12 4 6
	cout << f[0] << " " << f[1] << " " << f[2] << endl;	//1 -1.07374e+08 -1.07374e+08
	//char ch = "S"; //illegal "S"('S'+'\0')��ʾ�ַ����ڴ��ַ
	cout << "I am a stu"
		"dent";  //�κ������հ��ַ����������Զ�ƴ�ӳ�һ��
	char str_arr[12] = "hello"; //�ַ�������
	cout << str_arr << strlen(str_arr) << endl; //hello 5 strlen()��������ַ�
	str_arr[2] = '\0';
	cout << str_arr << strlen(str_arr) << endl; //he 2 ���ַ�'\0'��ᱻ����
	
	//�����е����Ա����
	const int Asize = 12;
	char name[Asize];
	char food[Asize];
	cin >> name; //zhang san cin�Ὣ���з������������,�´�������ȡ
	cin >> food; // name=zhang food=san ������ַ�ʹname���ֿ���ȡ��ͬʱ����Խ�����⣩
	
	cin.getline(name, Asize); //�ַ�������(Asize-1)ֱ�����з��� ������'\n'('\0'�滻)
	cin.getline(food, Asize);
	//or cin.getline(name, Asize).getline(food, Asize);	//�ϲ��������б�ʾ��������
	
	cin.get(name, Asize);  //���滻�з�����������У��ڶ���get()���ȡ�޷����
	cin.get(food, Asize);  //problem ������ 	
	cin.get(name, Asize);  //ʹ�ò����δ����з��������
	cin.get();     //or cin.get(name, Asize).get(); //��Ա����ƴ�Ӻϲ�
	cin.get(food, Asize);
	cin.clear();  //�������������ʧЧλfailbit��clear()�ָ�����

	int age = 0; //��������ַ���������
	cin >> age;	
	cin.get();	 //or (cin >> age).get();
	cin.getline(name, Asize);
	cout << "age = " << age << " name = " << name << endl;

	//string��
	char s[20];
	cout << strlen(s) << endl;	//486 ���ȴ���20��δ��ʼ�������һ�����ַ�λ���������
	cin.getline(s, 20);			//һ�������ȡ�������У�cin��istream����getline()��istream�෽����
	char s1[] = { "hhh" };//��ʼ��
	char s2[]{ "fff" };
	//s1 = s2;	//invalid
	
	string str;	
	cout << str.size();	// 0 δ��ʼstring���󳤶��Զ�����Ϊ0���Զ�����str���ȣ�
	string str1 = "hhh";	
	string str2 = { "xxx" };
	string str3{ "yyy" };
	//cin >> str1;
	getline(cin, str1);	//hahaha  string����Ԫ������istream����û�д���string������෽��
	cout << str1.size() << str1.length() << str1[1] << endl;	// 6 6 a
	str1 = str2;	//valid string����ֵ == strcpy(str1, str2)
	str1 = str2 + str3;	//�ϲ�ƴ�������	
	str1 += str2;	//strcat(str1, str2)

	wchar_t t1[] = L"ifconfig";	//new C++
	char16_t t2[] = u"ifconfig";
	char32_t t3[] = U"ifconfig";
	cout << R"(zh"\n"ang)";		//zh"\n"ang  R���Ϊԭʼ��raw���ַ�����ʡת������\��
	cout << R"+*("(zh)"ang)+*";	//"(zh)"ang  ����������)"�ͻ������()ͷβ+*���
	
	//�ṹ��
	//student s1 = { 22, "zhangsan", 85.0 };
	student s2{};	// ��ʼ��=��ʡ��
	cout << s2.age << s2.score << endl;	//0 0 ��{}��ʼ��Ĭ��Ϊ0
	student s[2] = 
	{
		{ 22, "zhangsan", 85.0 }, 
		{ 24, "lisi", 88.0 }
	};	//��ʼ���ṹ������ 
	
	struct teacher
	{
		unsigned int birthyaer : 4;	//new λ�ֶ�ָ��ռ��λ�� (�ͼ����)
		bool man : 1;
	};
	
	//ö��
	enum led{red=-5, green=0, orange, blue=1, yellow = 9};	// ������ö�� {ö����(�Զ���+Ĭ�Ϻ��ǰ��1)} ������const
	//enum {red, green, blue};	//����������ֻʹ�ó�����ʡ��������
	cout << red << green << orange << blue << yellow << endl;	// -5 0 1 1 9 ö����ֵ������ͬ
	led led1;	//ö�ٱ���
	led1 = red;	//valid
	int color = 3 + blue;	// 4 ö����-->int
	//led1 = 5;	//invalid ֻ��ʹ�ö���ʱ��ö����
	//led1++;	//invalid ö��ֻ�и�ֵ�����û����������
	//led1 = red + blue;	//��Ϊö�٣���Ϊint/long/long long�����Ͳ�һ��
	//ö��ȡֵ��Χ��[0(min>=0)��С��min��-2����ֵ+1(min<0), ����max��2����ֵ-1],����ledö�ٷ�ΧΪ[-2^3+1, 2^4-1] = [-7,15]
	led1 = led(6);			//��Чֵǿ��ת��
	led1 = led(66);			//undefined ���ʵ�ֵ�����ȷ����(���н��û����)

	return 0;
}
