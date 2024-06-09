// ConsoleApplicationcprimerplus.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

/*
C++ PRIMER PLUS
2024_03_31  本书在讨论C++特性的同时，还讨论了基本c语言，使得两者成为有机的结合体。书中介绍了C++的
基本概念并通过短而小精悍的程序周期来阐明，这些程序都很容易复制和试验。书中还介绍了输入和输出，
如何让程序执行重复性任务，如何让程序做出选择，处理数据的多种方式，以及如何使用函数等内容。另外，本书还讲了C++在C语言的
基础上新增的很多特性，包括
 【类和对象】
 【继承】
 【多态，虚函数和RTTI(运行阶段类型识别)】
 【函数重载】
 【引用变量】
 【泛型（独立于类型）的编程，这种技术是由模板和标准模板库STL提供的】
 【处理错误条件的异常机制】
 【管理函数、类、和变量名的命名空间。】

1.1 C++简介
C++融合了3种不同的编程方式：
1、C语言代表的过程性语言。
2、C++在C语言的基础上添加的类代表的面向对象语言。
3、C++模板支持的泛型编程。
使用C++的原因之一是为了利用其面向对象的特性。要利用这种特性，必须对标准的C语言有较为深入的理解，因为它提供了基本类型，
运算符，控制结构，语法规则。
1.2 C++简史
20世纪70年代，C和Pascal这样的语言引入了人们进入结构化编程的时代，还可以生成快速简洁的程序，并提供了处理硬件的能力，如通信管理接口
和磁盘驱动器，这些因素使得C语言成为20世纪80年代占统治地位的编程语言。同时，20世纪80年代，人们也见证了一种编程模式的成长：
面向对象编程（OOP），SmallTalk和C++语言具备这种功能。
1.2.1 C语言
20世纪70年代早期，贝尔实验室的Dennis Ritchie致力于开发UNIX操作系统。高级语言致力于解决问题，而不是针对特定的硬件。一种被
称为编译器的特殊程序将高级语言翻译成特定计算机的内部语言，这样，通过对每个平台使用不同的编译器来在不同的平台上使用同一个
高级语言程序了。
低级语言的效率，硬件访问能力和高级语言的通用性，可以执行相融合。
1.2.2 C语言编程原理
自顶向下 函数编程。
1.2.3 面向对象编程
设计与问题本质特性相对应的数据格式。 OOP强调的是数据。
在C++中，【类是一种规范，它描述了这种新型数据格式】，【对象】是根据这汇总规范构造的特定数据结构，
例如，类可以是描述公司管理人员的基本特征，（姓名，头衔、工资、特长），而对象则代表特定的管理人员（Guiford Sheepblat、副总裁
￥8888，知道如何恢复Windows注册表。）
通常，类规定了可使用哪些【数据来表示对象】以及对这些数据【执行哪些操作】。

【例如，假设正在开发一个能够绘制矩形的计算机绘图程序，则可以定义一个【描述矩形的类】。
定义的【数据部分】 应包括【顶点的位置，长和宽，4条边的颜色和样式，矩形内部的填充颜色和图案】
定义的【操作部分】应包括【移动、改变大小、旋转、改变颜色和改变图案，将矩形复制到另外一个矩形上面等操作】

这样，当使用该程序来绘制矩形时，他将根据类定义创建一个对象。该对象保存了描述矩形的所有数据值，因此，可以使用该类方法修饰该
矩形。

如果需要绘制两个矩形，程序将创建两个对象，每个矩形对应一个。

OOP的程序设计方法首先设计类，他们准确地表达了程序要处理的东西。例如，绘图程序可能定义表示矩形，直线，圆，画刷，画笔的类。
类定义描述了对每个类可执行的操作，如移动圆或者旋转直线。

然后您便可以设计一个使用这些类的对象的程序，从低级组织（如类）到高级组织（如程序）的处理过程叫做自下而上（bottom-up）的编程。

【OOP的编程并不仅仅是将数据和方法合并为类定义】，例如，【OOP还有助于创建可重用的代码，这将减少大量的工作.】
信息隐藏可以保护数据，使其免遭不适当的访问。

【多态】能够为运算符和函数创建多个定义，通过编程上下文来确定使用哪个定义。
【继承】可以让你使用旧类派生出新类。

重点是将放在任务上，而是放在表示概念上。有时候不一定要用自上而下的编程方法，而是使用自下而上的编程的方法。

【设计有用、可靠的类是一项艰巨的任务，幸运的是，OOP语言使得程序员在编程种能够轻松地使用已有的类，厂商提供了大量有用的类库，
包括用于简化windows和Macintosh环境下的编程的类库。】

【**************C++的真正优点之一是：可以方便地重用和修改现有的，经过仔细测试的代码。**********】
1.2.4 C++和泛型编程
泛型编程（generic programming）是C++支持的一种编程模式。它与OOP的目标相同，即【使重用代码】和【抽象通用概念】的技术更简单。
不过，OOP强调的是编程的数据方面，而泛型编程强调的是独立于特定的数据类型。他们的侧重类型不同。

OOP是一个管理大型项目的工具，而泛型编程提供了执行常见任务（如对数据排序或者合并链表）的工具。
术语 泛型（generic）指的是创建独立于类型的代码。
C++的数据表示有多种类型-整数、小数、字符、字符串，用户定义的、由多种类型组成的符合结构。

例如：要对不同类型的数据进行排序，通常必须为每种类型创建一个排序函数。
【泛型编程】需要对语言进行扩展，以便可以只编写一个泛型函数，并将其应用于各种实际类型。C++模板提供了完成这汇总任务的机制。】
1.2.5 C++的起源
与C语言一样，C++


#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
	system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#include<iostream>
#include<climits>

int main()
{

	using namespace std;

	int n_int = INT_MAX;

	short n_short = SHRT_MAX;

	long n_long = LONG_MAX;

	long long n_lllong = LLONG_MAX;

	//sizeof operator yields size of type or of variable

	cout << "int :\t" << sizeof(n_int) << endl;

	cout << "short\t" << sizeof(n_short) << endl;

	cout << "long\t" << sizeof(n_long) << endl;

	cout << "long long \t" << sizeof(n_lllong) << endl;

	cout << "Maxmun values" << endl;

	cout << "int :\t" << n_int << endl;

	cout << "short\t" << n_short << endl;

	cout << "long\t" << n_long << endl;

	cout << "long long \t" << n_lllong << endl;

	cout << "int min" << INT_MIN << endl;

	cout << "bits per byte " << CHAR_BIT << endl;

	//c++11 initialize syntax
	int huf = { 12 };
	int hub{ 12 };
	int hus{};
	cout << "huf = " << huf << endl;
	cout << "hus = " << hus << endl;
	cout <<"hub is = "<< hub << endl;

	//
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;
	cout << "cuts a striking fugure!\n" << endl;

	cout << "chest = " << chest << endl;
	cout << "waist = " << waist << endl;
	cout << "inseam = " << inseam << endl;

	char b;//declare a char variable

	cin >> b;
	cout << "thanks you for the " << b << "  character." << endl;

	char ch = 'M';
	int i = ch;
	cout << "i = " << i << endl;
	ch = ch + 1;
	i = ch;
	cout << "i = " << i << endl;

	//using the cout.put() member function to display a char
	cout << "display char: ";
	cout.put(ch);
	cout <<"\n and i will using direct ch to display a char: "<< endl;

	cout << ch << endl;

	cout << '\a';
	return 0;
}

int :   4
short   2
long    4
long long       8
Maxmun values
int :   2147483647
short   32767
long    2147483647
long long       9223372036854775807
int min-2147483648
bits per byte 8
huf = 12
hus = 0
hub is = 12



#include <iostream>

int main()
{
	using namespace std;
	std::cout << "Hello World!\n";
	std::cout << '\a';
	wchar_t bob = L'P';
	wcout << L"tall" << endl;
	wcout << bob << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	float tub = 10.0 / 3.0;     // good to about 6 places
	double mint = 10.0 / 3.0;   // good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;


	/////////////////////
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;     // int converted to float
	int guess = 3.9832; // float converted to int
	int debt = 7.2E12;  // result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;


	int a = 1;
	float b = 2.345;
	int c = a + b;
	cout << "c = " << c << endl;




	
}

#include<iostream>
using namespace std;
void print_blind(void);
void print_they(void);
int main()
{
	print_blind();
	print_blind();
	print_they();
	print_they();
	return 0;

}
void print_blind(void)
{
	cout << "Three blind mice" << endl;
}
void print_they(void)
{
	cout << "See how they run" << endl;
}


#include<iostream>
using namespace std;

int celsius_To_Fahrenheit(const int &celsius);
int main()
{
	int celsius = 0;
	cout << "Please enter a Celsius value:";
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << celsius_To_Fahrenheit(celsius) << " degrees Fahrenheit." << endl;
}

int celsius_To_Fahrenheit(const int &celsius) 
{

	return celsius * 1.8 + 32.0;
}

#include<iostream>
using namespace std;

double light_year_to_astronomical(const double &light_year);

int main()
{
	//cout.setf(ios_base::fixed, ios_base::floatfield);

	double light_year = 0.0;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	cout << light_year << " light years = " << light_year_to_astronomical(light_year) << " astronomical units." << endl;
	return 0;
}
double light_year_to_astronomical(const double & light_year)
{
	return light_year * 63240;
}

#include<iostream>
using namespace std;
void hour_min(const int &hour, const int &min);
int main()
{
	int  hours = 0;
	int minute = 0;
	cin >> hours;
	cin >> minute;
	hour_min(hours,minute);
	return 0;
}
void hour_min(const int & hour, const int & min)
{
	cout << " Enter the number of hour:" << hour <<"\n Enter the number of minutes"<<min<<"\n Time: "<<hour<<":"<<min<<endl;
}


#include<iostream>
using namespace std;

int main()
{
	char c = 80;
	cout << c << endl;
	int d = 80;
	cout << char(d) << endl;
	cout << char(80) << endl;
}


#include<iostream>
using namespace std;
int main()
{
	int height = 0;
	cout << "Please enter your height:_";
	const int anux = 3;
	cin >> height;
	cout << "Your height is " << height << " and your en is" << height * anux << endl;

	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
//BMI =  kg / height^2
const double poundTokilo = 2.2;
const double feetToinches = 12;
const double inchestoMeter = 0.0254;
double funBMI(const int &feet, const int &inches, const int &pound);
int main()
{
	int feet = 0;
	int inches = 0;
	int pound = 0;
	cout << "Please input your height as feet and inches type : ";
	cin >> feet >> inches;

	cout << "Please input your pound : ";
	cin >> pound;

	cout << "Your BMI is: " << funBMI(feet,inches,pound) << endl;

	cout << (double)2 / (double)2.2 / (pow((double)2, double((27 * 0.0254)))) << endl;

	cout <<"my cal="<< 1.8181818181818181 / pow((double)2, 0.68579999999999997) << endl;

	cout << pow(2, 4) << endl;

	return 0;

	//Please input your height as feet and inches type : 2 3
	//Please input your pound : 4
	//	Your BMI is : 1.13029
	//	0.565146
	//	my cal = 1.13029
	//	16

}

double funBMI(const int & feet, const int & inches, const int & pound)
{
	double kilogram = 0.0;
	kilogram = (double)pound / poundTokilo;//1.8181818181818181
	double height = 0.0; 
	height = ((double)feet * 12 + (double)inches)*inchestoMeter; //0.68579999999999997
	double resultBMI = kilogram / pow(2, height);
	return resultBMI;
}


*/
/*
#include<iostream>
using namespace std;
int main()
{
	int degrees = 0;
	int minutes = 0;
	int second = 0;
	double resultdegree = 0.0;
	cout << "Enter a latitude ub degrees,minutes,and second:\nFirst,enter the degrees:";
	cin >> degrees;
	cout << "\nNext,enter the minutes of arc:";
	cin >> minutes;
	cout << "\nFinally,enter the second of arc:";
	cin >> second;
	resultdegree = (double)degrees + (double)minutes / 60 + (double)second / 3600;
	//resultdegree = degrees + minutes / 60 + second / 3600;
	cout << "\n" << degrees << " degrees, " << minutes << "minutes, " << second << " seconds = " << resultdegree << endl;
	return 0;
}


#include<iostream>
using namespace std;
const int day_hours = 24;
const int hours_min = 60;
const int min_second = 60;

int main()
{
	long long inputsecond = 0;
	cout << "Enter the number of seconds:";
	cin >> inputsecond;
	cout << inputsecond << " seconds = " << inputsecond / (day_hours*hours_min*min_second) << "days,"
		<< (inputsecond % (day_hours*hours_min*min_second)) / (hours_min*min_second) << " hours,"
		<< ((inputsecond % (day_hours*hours_min*min_second))) % (hours_min*min_second) / min_second<<" minutes,"
		<<inputsecond%min_second<<" seconds" << endl;
	return 0;
}


#include<iostream>
using namespace std;

int main()
{
	long long world_population = 0;
	long long us_population = 0;
	cout << "Enter the world's population:";
	cin >> world_population;
	cout << "Enter the population of the US:";
	cin >> us_population;
	Enter the world's population:6898758899
		Enter the population of the US : 310783718
		The population of the US is 4.50492% of the world population.
	cout << "The population of the US is " << double(us_population) / double(world_population) *100 << "% of the world population." << endl;
	return 0;
}


#include<iostream>
using namespace std;

int main()
{
	int mile=0;
	int gal=0;
	cout << "Please enter the mile and gal:";
	cin >> mile >> gal;
	cout << "mile = " << mile << " and the gal = " << gal << " and per gal of mile = " << (double)mile / double(gal) << endl;
}

#include<iostream>
using namespace std;
int main()
{
	double l_hunderd = 0.0;
	cout << "Please enter your gal:";
	cin >> l_hunderd;
	cout << "your per hundered gal is" << l_hunderd << ",and mpg = " << 62.14  /( l_hunderd / 3.785 )<< endl;
	return 0;
}


 //1、机测 。
 //2、docker.
 //3、技术文档编写。
 //4、问答。OSI。15min.
 //5、线下面试。  
#include<iostream>

using namespace std;

int main()
{
	int yams[3];
	yams[0] = 1;
	yams[1] = 2;
	yams[2] = 3;

	int yamcoasts[3] = { 20,30,5 };

	cout << "Total yams  = ";

	cout << yams[0] + yams[1] + yams[2] << endl;

	cout << "The package with " << yams[1] << "yams costs";

	int total = yams[0] & yamcoasts[0] + yams[1] * yamcoasts[1];

	total = total + yams[2] * yamcoasts[2];

	cout << "The total yam expense is" << total << " cents.\n";

	cout << "\nSize of yams array" << sizeof yams;

	cout << "bytes.\n";

	cout << "size of one element = " << sizeof yams[0];
	cout << "bytes.\n";


	return 0;
}

Total yams = 6
The package with 2yams costsThe total yam expense is15 cents.

Size of yams array12bytes.
size of one element = 4bytes.


#include<iostream>
using namespace std;

int main()
{
	long plifts[] = {24,65,3.0};

	char slifpd[4] = { 'h','2',2323323,'\0' };

	char thisd[4]{'h','i',112,'\0'};

	cout << "hello ";
	char cat[8] = { 'f','a','r','t','6','e','g','\0' };

	char dog[8] = { 'a','c','r','I','f',' ','g','r' };
	cout << "dog:";
	cout << dog << endl;

	cout << cat << endl;

	


	 return 0;
}





#include<iostream>
using namespace std;

int main()
{
	char bird[11] = "Mr.cheaps";//the "\0" is understood。
	char fish[] = "Bubbles";//let the compile count 
	char sta[4] = { 'a',0,'b','\0' };

	cout << sta << endl;

}




#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int size = 15;
	char name1[size];
	char name2[size] = "C++OWBOY";//string constant

	cout << name2 << endl;
	cin >> name1;
	cout << "your name has" << strlen(name1) << "letters"
	<<"and stored" << sizeof(name1) << "bytes" << endl;
	name2[3] = '\0';
	cout <<name2<< endl;
};

C++OWBOY
Basicman
your name has8lettersand stored15bytes
C++



#include<iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious" << dessert;
	cout << "for,you," << name << "\n";
	//由于不能通过键盘输入空字符，[cin使用（空格 制表符 和换行符）来确定字符串的结束位置]。
	//这意味着只读取一个单词，读取该单词后，cin将该字符串放到数组当中，并自动在末尾添加空字符。

}
#include<iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name" << endl;

	//cin ArSize char str;
	cin.getline(name, ArSize);

	cout << "Enter your favorite dessert" << endl;

	cin.getline(dessert, ArSize);

	cout << "I have some delicous [" << dessert << "]  for you [" <<name<<"]\n";

}


#include<iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name" << endl;

	cin.get(name, ArSize).get();

	cout << "Enter your favorite dessert" << endl;

	cin.get(dessert, ArSize).get();

	cout << "I have some delicous [" << dessert << "]  for you [" << name << "]\n";

	
}



#include<iostream>
using namespace std;
int main()
{
	const int ArSize = 3000;
	char name[ArSize];
	int i = 0;

	while (i<=2)
	{
		cin.getline(name,20);
		i++;
	}
	cout <<"This is my input:\n"<< name << endl;
}

#include<iostream>
using namespace std;
int main()
{
	cout << "what year was your house bulit?\n";
	int year;
	cin >> year;
//	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built:" << year << endl;
	cout << "Address: " << address << endl;


}

#include<iostream>
#include<string>

int main()
{
	using namespace std;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	cout << "Enter a kind of feline:";
	cin >> charr1;

	cout << "Enter another kind of feline:";
	cin >> str1;

	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;

	cout << charr2 << " " << charr2[2] << endl;
	cout << str2 << " " << str2[2] << endl;


}




#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	s2 = s1;//assign s2 to s2
	cout << " s1 = " << s1 << " s2 = " << s2 << endl;
	//assign c- style string to a string object.\n
	s2 = "buzzed";
	cout << " s2 = " << s2;

	//concatenate strings s3 = s1 + s2

	s3 = s1 + s2;

	cout << " s3 = " << s3 << endl;

	s1 += s2;

	cout << s1 << endl;
}



#include<iostream>
#include<string>
#include<cstring>


char *strcat_my(char *dest, const char*src, size_t n);
char *strcpy_n(char *dest, const char*src, size_t n);
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20]="linux2024";
	string str1;
	string str2 = "panter";
	str1 = str2;
	//copy charr2 to charr1
	//strcpy_s(charr1,charr2);
	strcpy_n(charr1, charr2, strlen(charr2)+1);
	strcat_my(charr1, charr2, strlen(charr2));
	cout << "charr1 = " << charr1 << " len charr1 = " << strlen(charr1) << endl;
}

char *strcat_my(char * dest, const char * src, size_t n)
{

	size_t dest_len = strlen(dest);

	size_t i=0;
	for (i; i < n && src[i] != '\0'; ++i)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i ] = '\0';
	return dest;
}

char * strcpy_n(char * dest, const char * src, size_t n)
{
	size_t i = 0;
	for (i; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	//copy less than n byte

	for (; i < n; i++)
	{
		dest[i] = '\0';	
	}
	return dest;
}





#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout << "Length of string in charr before input:"
	<< strlen(charr) << endl;
	cout << "Length of string in str before input:"
		<< str.size()<<endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);//indicate maximun legth
	cout << "Your entered:" << charr << endl;

	cout << "Enter another line of text:\n";
	getline(cin, str);//cin now an argument;no length specifier
	cout << "Your entered:" << str << endl;
	cout << "Length of string in charr after input:"
		<< strlen(charr) << endl;

	cout << "Length of string in str after input:"
		<< str.size();
}
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	wchar_t tittle[] = L"Chief Astropter";
	char16_t name[] = u"Felot uision";
	char32_t car[] = U"Humber Super Snipe";
	//C++还支持Unicode 字符编码方案UTF-8，根据编码的数字值，字符可存储为1-4个八位组。
	//C++新增的另一种类型是原始RAW，
	cout << R"(Jim "King" Tutt uses "\n" instesd of end)" << '\n';

	//如果使用标准字符，则
	cout<<"Jim \"King \"\Tutt uses \"\\n \"\insted of end .\("<<"\n";
	//
	//Jim "King" Tutt uses "\n" instesd of end
	//Jim "King "Tutt uses "\n "insted of end .
	//如果要在原始字符串中包含)"，该如何怎么办呢？ 编译器见到第一个）"字符时，会认为到此，字符串就结束了。
	//但是RAW字符串语法允许您在表示字符串开头的"和(之间添加其他字符，这意味者表示字符串结尾的”和）之间也必须包含这些字符。
	//因此，使用R"+*(表示原始字符串的开头时，必须使用)+*"标识原始字符串的结尾。
	cout << R"+*("Who wouldn't?)",she whispered.)+*" << endl;
	cout << R"+#("It is really amazing ,he's really awesome?),yes ,it is.)+#" << endl;
	//总之，使用"+*("和)+*"代替了默认界定符号，自定义定界符时，在默认定界符之间添加任意数量的基本字符，但空格，左括号，右括号，斜杠和控制字符
	//除外，例如制表符和换行符。
	//Jim "King" Tutt uses "\n" instesd of end
	//Jim "King "Tutt uses "\n "insted of end .(
	//	"Who wouldn't?)", she whispered.
	//	"It is really amazing ,he's really awesome?),yes ,it is.
}

#include<iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;

	inflatable guest = {"Glora",1.00,4.564};
	cout << guest.name << endl;
	inflatable p{};
	cout << p.price << p.volume << p.name << endl;
}


#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;

	inflatable bounquet =
	{
		"flowers",
		0.2,
		12.45
	};
	//define object
	inflatable choice;
	cout << "bounquet = :" << bounquet.name << "for $";
	cout << bounquet.price << endl;

	choice = bounquet;

	cout << "choice = :" << choice.name << "for $";
	cout << choice.price << endl;
}

#include<iostream>
struct
{
	int col;
	int row;
}martix = {};
struct flutter
{
	float ful;
};
struct foile
{
	int a;
}f_a, f_b = {5};

int main()
{
	using namespace std;
	cout << "martix = " <<"martix.col = "<< martix.col <<" martix.row = "<< martix.row << endl;
	flutter f;
	f.ful = 5.6;
	cout << f.ful << endl;
	f_a = f_b;
	cout << "f_a.a = "<<f_a.a << endl;
}

#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable guest[2] = //initializing an array of structs
	{
		{"Bob",0.5,21.99},
		{"Godzilla",2000,643.66}
	};

	cout << "The guests " << guest[0].name << " and " << guest[1].name
		<< "\n have a combined volume of "
		<< guest[0].volume + guest[1].volume << " cubic feet.\n";
}

#include<iostream>
struct inflatable
{
	unsigned int SN:4;
	unsigned int :4;
	bool goodIn : 1;
	bool goodTogrgle : 1;
}p;

int main()
{
	using namespace std;
	//
	inflatable tr = {10,true,false};
	cout << p.goodIn <<" " <<tr.SN <<endl;
}

*/
///////////////
/*
#include<iostream>
struct widget
{
	int type;
	char brand[20];
	union id
	{
		long id_num;
		char id_char[20];
	}id_val;
};
widget prize;

int main()
{
	if (prize.type == 1)
	{
		cin >> prize.id_val.id_num;
	}
	else
	{
		cin >> prize.id_val.id_char;
	}
}


//匿名 共用体 anynymous union 没有名称，
//其成员将成为位于相同地址处的变量，显然，每次只有一个成员时当前成员。

#include<iostream>
struct widget
{
	char brand[20];
	int type;
	union //anonymous union
	{
		long id_num; // type 1 widgets
		char  id_char[20];//other widgets
	};
};

widget prize;

int main()
{
	using namespace std;
	if (prize.type == 1)
	{
		cin >> prize.id_num;
	}
	else
	{
		cin >> prize.id_char;
	}
}
//共用体通常用于节省内存。当前系统的内存多达GB,TB，好像没必要节省内存，但并非所有的C++程序都时这样编写的
//共用体经常用于操作系统数据结构或者硬件数据结构。





#include<iostream>

enum MyEnum
{
	red,orange,yellow,green
};
int main()
{
	using namespace std;
	MyEnum myen;
	int color = yellow;
	myen = static_cast<MyEnum>(orange + green);
	//myen = orange + green; //enumeration could plus together,
	//but i woundering about ,why c++ primer say this cannot add together.
	// orange and green are enumeration .
	// orange is 1,and green is 3 orange + green is 4 exceed about MyEnum
	//but it can assign to myen. This is my question about this statement.
	myen = yellow;// 2 valid  yellow is  MyEnum  type of enumeration
	myen =static_cast<MyEnum>(myen + red);// 2 + 0 -> enumeration 2 = yellow
	myen = static_cast<MyEnum>(myen + green);//2+3 = 5 over MyEnum ,not valid.
	myen =static_cast<MyEnum>(30004);//invalid ,int can not convert enumeration type
//	myen =static_cast<MyEnum>(3 + red);//3+0 = 3 is green ,need convert to enumeration
	cout << myen << endl;

	myen =MyEnum(30004);//invalid ,int can not convert enumeration type
//	myen =static_cast<MyEnum>(3 + red);//3+0 = 3 is green ,need convert to enumeration
	cout << myen << endl;

}



#include<iostream>


enum 
{
	zero,nu=0,one,one_num=1
};

enum 
{
	mon=5,tru=10,fri,oran = 20,blue
};

int main()
{
	using namespace std;
	cout << "MyEnum1_all_same_value" << "zero=" << zero << "nu = " << nu << "one = " << one << " one_num = " << one_num << endl;
	//one = 1 one_num = 1
	cout << "MyEnum of partily assign value = " << "fri = " << fri << " " << "blue = " << blue << endl;
	//fri = 11 blue = 21

}

#include<iostream>
enum MyEnum
{
	one = -6,six,hundered = 100
};
int main()
{
	using namespace std;

	MyEnum bits1;

	MyEnum bits2;

	MyEnum bits3;
	bits1 = MyEnum(127);
	bits2 = static_cast<MyEnum>(126);//noe exceded this enumeration range
	bits3 = static_cast<MyEnum>(200);//exceded this enumeration limits.

	//now ,puts them to the screem
	cout << "bits1 = " << bits1 << endl;
	cout << "bits2 = " << bits2 << endl;
	cout << "bits3 = " << bits3 << endl;
	//now the result is correct,but i have some questions about this result.
	//why 200 is over this MyEnum value range ,and also could assign to this object?
	//think try 10 times about this assign.
	//i tried 10 times without any error in Micsoft Visual Studio 2017.
}

#include<iostream>
int main()
{
	using namespace std;
	int a = 100;
	double p = 29.00;

	cout << a << "and address of a using & to display" << &a << endl;
	cout << p << "and address of p using & to display" << &p << endl;

}


#include<iostream>

int main()
{
	using namespace std;

	int updates = 6;
	int *p_updates;
	p_updates = &updates;//assign address of int to pointer

	cout << "Value: updates" << updates << " , *p_updates=" << *p_updates << endl;

	cout << "Address: updates" << &updates << ", p_updates=" << p_updates << endl;
	
	//using pointer to change value
	*p_updates = *p_updates + 1;
	//*p_updates is the pointed value ,like a temp value ,using pointer can change its value.
	cout << "Now update is" << updates << endl;
	++(*p_updates);
	cout << "Now update is" << updates << endl;
}



#include<iostream>

int main()
{
	using namespace std;
	//int new int
	int nights = 1001;

	int *pt = new int;//allocate space for an int

	*pt = 1001;//store a value there

	cout << "night value = " << nights << " location is  " << &nights << endl;

	cout << "pt location = " << pt << " value of pt = " << *pt << endl;

	//double new double

	double *pd = new double;

	*pd = 23.32323232;

	cout << "pd location = " << pd << " value is :" << *pd << endl;

	cout << "sizeof(pt) = " << sizeof(pt) << " and sizeof(pd) = :" << sizeof(pd) << endl;
}



#include<iostream>
int main()
{
	int *ps = new int;
	delete ps;
	delete ps;
	int jugs = 5;
	int *p = &jugs;
	delete p;
}




#include<iostream>
int main()
{
	using namespace std;

	int *pt = new int;//allocate an int

	short *ps = new short[100];//allocate 100 ints of dynamic

	delete[]pt;//dont't know it,undefined process

	delete ps;//dont't know it,undefined process

	//new 和 delete使用时，遵守下面的规则
	//不要用delete释放不是new分配的内存
	//不要使用delete释放同一个内存两次
	//如果使用new[]来为数组分配内存，则使用delete []来释放
	//如果使用new为一个单独的变量分配内存，则使用delete来释放申请的内存
	//对空指针应用delete是安全的。

}


#include<iostream>

int main()
{
	using namespace std;

	double *p3 = new double[3];//get a block of 3 double types

	p3[0] = 0.02;

	p3[1] = 0.03;

	p3[2] = 0.05;

	cout << "p3[1] = " << p3[1] << endl;//0.03


	p3 = p3 + 1;//increment the pointer

	cout << "p3[0] is " << p3[0] << " ,and p3[1] = " << p3[1] << endl;

	p3 = p3 - 1;//pointer back to beginning

	delete[]p3;
	//free memory
}

#include<iostream>
int main()
{
	using namespace std;
	double wges[3] = { 10000.0,2000.0,30000.0 };
	short stacks[3] = {3,2,1};

	//here are two ways to get the address of any array

	double *pw = wges;
	short *ps = &stacks[0]; //or use address operator

	cout << "pw = " << pw << " ,*pw=" <<*pw<< endl;
	//0xXXXXXX 10000.0

	pw = pw + 1;

	cout << "add to the pw pointer:\n";
	cout << "pw = " << pw << " ,*pw" << *pw << endl;
	//0xxxxxx1 20000.0
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	//0xxxxxxx 3
	ps = ps + 1;

	cout << "add to the ps pointer:\n\n";

	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	//0xxxxxx 2
	cout << "access two elements with array notation\n";
	cout << "stacks[0]= " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	//3 2

	cout << "access two elements with pointer notation\n";

	cout << "*statks = " << *stacks << endl;
	//3

	cout << ",*(stacks+1)" << *(stacks + 1) << endl;
	//2
	cout << "sizeof(wages) = " << sizeof(wges) << "sizeof wges array\n";
	//24
	cout << "sizeof(pw)=" << sizeof(pw) << "= size of pw pointer\n";
	//4

}


#include<iostream>
int main()
{
	//指针数组 数组指针
	using namespace std;
	//指针数组： 本质上来说是一个数组，数组的元素是指针类型的。
	const char * arra[4] = {"hello","world","shanxi","xian"};//[] 优先级高于 解引用 *运算符
	cout << **(arra+1) << endl;//w
	//*(*(arr+1)+0)

	//数组指针：本质上是一个指针，指针存放数组的首地址。
	char(*pa)[4];//pa是一个指针，指向一个char[4]的数组。
	short tell[10];
	short *(pas)[10] = &tell;//二维数组。
	//数组需要看linux C.
}


#include<iostream>
#include<cstring>
#include "ConsoleApplicationcprimer.h"
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char *ps;
	cout << animal <<"\t"<< bird << endl;

	cout << "Enter a kind of amimai:";
	cin >> animal;

	ps = animal;

	cout << "Before strcpy()=" << animal
		<< " at " << (int*)animal << endl;

	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];

	strcpy_my(ps, animal,strlen(animal)+1);

	cout << "After using strcpy():\n";
	cout << animal << "at" << (int*)animal << endl;

	cout << ps << " at " << (int *)ps << endl;

	delete[]ps;

}

char * strcpy_my(char * dest, char * src, size_t n)
{
	size_t i = 0;
	for (i; i < n && *(src+i) != '\0'; ++i)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; ++i)
		*(dest + i) = '\0';
	return dest;
}


#include<iostream>
struct inflatable //struct definition
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable *ps = new inflatable;

	cout << "Enter name of inflatable item:";

	cin.get(ps->name,20);
	cout << "Enter your volume in cubic feet:";
	cin >> (*ps).volume;
	cout << "Enter price:";
	cin >> ps->price;

	cout << "Name = " << (*ps).name << endl;
	cout << "Volume = " << ps->volume;
	cout << "Price = " << ps->price << endl;
	delete ps;
	cin.get();
	return 0;
}



#include<iostream>
#include<cstring>
#include "ConsoleApplicationcprimer.h"
using namespace std;

char * getname(void);//function prototype

int main()
{
	char *name;//create pointer but no storage
	name = getname();//assign address of string to name
	cout << "name = " << name << " at " << (int *)name << "\n";
	delete[] name;//memory freed

	name = getname();//reruse freed memory

	cout << "name=" << name << " at " << (int*)name << endl;

	delete[]name;
}

char * getname(void)
{
	char temp[80];
	cout << "Enter last name:";
	cin >> temp;
	char *pn = new char[strlen(temp) + 1];
	strcpy_my(pn, temp, strlen(temp) + 1);
	return pn;
}

char * strcpy_my(char * dest, char * src, size_t n)
{
	size_t i = 0;
	for (i; i < n && *(src + i) != '\0'; ++i)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; ++i)
		*(dest + i) = '\0';
	return dest;
}

#include<iostream>
struct antartica_year_end
{
	int year;
};
int main()
{
	using namespace std;
	antartica_year_end s01, s02, s03;// s01 = 1998 s02 =  1999
	s01.year = 1998;
	antartica_year_end *ps = &s02;
	ps->year = 1999;
	antartica_year_end trio[3];//array of 3 structure
	trio[0].year = 2003;
	(*(trio + 2)).year = 2004;
	cout << trio->year << endl;  //2003
	cout << trio[2].year << endl;  //2004
	const antartica_year_end *arp[3] = {&s01,&s02,&s03};//指针数组
	cout << arp[1]->year << endl;//1999
	const antartica_year_end **ppa = arp;
	cout << (*ppa)->year << endl;//1998
	cout << (*(ppa + 1))->year << endl;//1999
	
}


// choices.cpp -- array variations
#include <iostream>
#include <vector>   // STL C++98
#include <array>    // C++0x
int main()
{
	using namespace std;
	// C, original C++
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };
	// C++98 STL
	vector<double> a2(4);   // create vector with 4 elements
// no simple way to initialize in C98
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	// C++0x -- create and initialize array object
	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
	array<double, 4> a4;
	a4 = a3;     // valid for array objects of same size
// use array notation
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	// misdeed
	a1[-2] = 20.2;
	cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
	//  cin.get();
	return 0;
}

#include<iostream>
struct Fish
{
	char name[20];//品种
	int weight;//重量
	double length;//长度
};
int main()
{
	using namespace std;
	Fish *fh = new Fish;
	cin.get(fh->name, 20);
	(*fh).length = 23.33;
	cout << (*fh).name << endl;
	delete fh;
}
//1.
#include<iostream>

int main()
{
	using namespace std;
	char fname[10];
	char lname[10];
	int age;
	char grade;
	cout << "What is your name?";
	cin.getline(fname, 10);
	//
	cout << "What is your lase name?";
	cin.getline(lname, 10);
	//
	cout << "What letter grade do you deserve?";
	cin.get(grade).get();
	cout << "What is your age?";
	cin >> age;
	cout << "Name:" << lname << ", " << fname << endl;
	cout << "Grade:" << char(grade+1) << endl;
	cout << "Age:" << age;

}


#include<iostream>
#include<string> //make string class valiable
#include<cstring>
int main()
{
	using namespace std;
	string name;
	string dessert;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << "for you," << name << endl;

}

#include<iostream>
#include<cstring> //c -lib
int main()
{
	using namespace std;
	char fname[20];
	char lname[20];
	cout << "Enter your first name:";
	cin.get(fname, 20).get();
	cout << "Enter your last name:";
	cin.getline(lname, 20);

	strcat_s(lname,",");
	strcat_s(lname, fname);
	cout << "Here's the information in a single string:" << lname << endl;
}
#include<iostream>
#include<string>//make std::string avaliable
#include<cstring> //c -lib
int main()
{
	using namespace std;
	string fname;
	string lname;
	cout << "Enter your first name:";
	getline(cin, fname);
	cout << "Enter your last name:";
	getline(cin, lname);
	cout << "Here's the information in a single string:" << lname+","+fname << endl;
}


#include<iostream>
struct CandBar
{
	char brandname[20];
	double weight;
	int Steam;

}snack=
{"Moncha Munch",
2.3,
350};
int main()
{
	using namespace std;
	cout << "brandname = " << snack.brandname
		<< " weight = " << snack.weight
		<< " Steam = " << snack.Steam << endl;

}


#include<iostream>
struct CandBar
{
	char brandname[20];
	double weight;
	int Steam;

}snack[3] =
{
	{ "Moncha Munch",2.3, 350 },
	{ "Moncha Munbh",1.3, 450 },
	{ "Moncha Mgggch",3.3, 550 }

};
int main()
{
	using namespace std;
	for (int i = 0; i < 3; i++)
	{
		cout << "snack ["  <<i<<  "] brandname = " << snack[i].brandname
			<< " weight  [" << i << "] snack.weight = "<<snack[i].weight
			<< " Steam  [" << i << "]  snack.Steam=" << snack[i].Steam<< endl;
	}
	

}

#include<iostream>
#include<string>
struct William
{
	std::string  company_name;//公司名称
	double length;//直径
	double weight;//重量

};
int main()
{
	using namespace std;
	William *wm = new William;
	cout << "Enter company name:";
	getline(cin,(*wm).company_name);
	cout << "Enter length:";
	cin >> (*wm).length;
	cout << "Enter weight:";
	cin >> (*wm).weight;
	cout << "[Willia Wingate]:\n\t [Company]:\t" << (*wm).company_name
		<< "\n\t[Length]:\t" << (*wm).length << "\n\t[weight]:\t" << (*wm).weight << endl;
	delete wm;
}

#include<iostream>
#include<string>
#include<cstring>
struct William
{
	std::string  company_name;//公司名称
	double length;//直径
	double weight;//重量

};
//cin 只读取一个单词或者一个字符
//cin遇到空格制表符 换行符。
//getline()丢弃换行符
//get()保存换行符，
int main()
{
	using namespace std;
	William *wm = new William;
	cout << "Enter length:";
	cin >> (*wm).length;
	cin.get();
	cout << "Enter company name:";
	getline(cin,(*wm).company_name);
	cout << "Enter weight:";
	cin>>(*wm).weight;
	cout << "[Willia Wingate]:\n\t [Company]:\t" << (*wm).company_name
		<< "\n\t[Length]:\t" << (*wm).length << "\n\t[weight]:\t" << (*wm).weight << endl;
	delete wm;
}
/*
#include<iostream>
#include<string>
struct CandBar
{
	char brandname[20];
	double weight;
	int Steam;

};
int main()
{

	CandBar *cp = new CandBar[3];
	delete []cp;
}
#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double, 3>  ascore;
	int i = 0;
	while (i < 3)
	{
		cin >> ascore[i];
		i++;
	}
	i = 0;
	while (i<3)
	{
		cout << "["<< i<<"] grade:" << ascore[i] << endl;
		i++;
	}
	cout << "AVERAGE GRADE = " << double(ascore[0] + ascore[1] + ascore[2]) / 3 << endl;
}
//强化 字符串输入和结构体NEW DELETE


// forloop.cpp -- introducing the for loop
#include <iostream>
int main()
{
	using namespace std;
	int i;  // create a counter
//   initialize; test ; update
	for (i = 0; i < 5; i++)
		cout << "C++ knows loops.\n";
	cout << "C++ knows when to stop.\n";
	// cin.get();
	return 0;
}

// num_test.cpp -- use numeric test in for loop
#include <iostream>
int main()
{
	using namespace std;
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)     // quits when i is 0
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	// cin.get();
	// cin.get();
	return 0;
}
// express.cpp -- values of expressions
#include <iostream>
int main()
{
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);//new c++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	/// cin.get();
	return 0;
}

#include<iostream>
const int ArSize = 8;
int main()
{
	long long factorials[ArSize];

	factorials[0] = factorials[1] = 1LL;

	//
	for (int i = 2; i < ArSize; ++i)
	{
		factorials[i] = i * factorials[i - 1];
	}
	
	for (int i = 0; i < ArSize; ++i)
		std::cout << i << "!=:" << factorials[i] << std::endl;
	return 0;
}


// plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
	using std::cout;
	int a = 20;
	int b = 20;

	cout << "a   = " << a << ":   b = " << b << "\n"; // 20 20
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";//20 21
	cout << "a   = " << a << ":   b = " << b << "\n";//21 21
	// std::cin.get();
	return 0;
}


// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	// physically modify string object
	char temp;
	
	int i, j;
	for (i=0,j = word.size()-1; j >i; ++i,--j)
	{
		temp = word[j];
		word[j] = word[i];
		word[i] = temp;
	}
	// end block
	cout << word << "\nDone\n";
	// cin.get();
	// cin.get();
	return 0;
}

// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring>     // prototype for strcmp()
int main()
{
	using namespace std;
	char word[5] = "?ate";

	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	// cin.get();
	return 0;
}



// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>     // string class
int main()
{
	using namespace std;
	string word = "?ate";

	for (char ch = 'a'; word != "mate"; ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	// cin.get();
	return 0;
}

// while.cpp -- introducing the while loop
#include <iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	char name[ArSize];

	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;                  // start at beginning of string
	while (name[i] != '\0')     // process to end of string
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;                    // don't forget this step
	}
	// cin.get();
	// cin.get();
	return 0;
}

// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;      // use basic input
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;          // get a character
	while (ch != '#')   // test the character
	{
		cout << ch;     // echo the character
		++count;        // count the character
		cin >> ch;      // get the next character
	}
	cout << endl << count << " characters read\n";
	// get rid of rest of line
		 // while (cin.get() != '\n')
			// ;
	//cin.get();
	return 0;
}


// textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;

	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);        // use the cin.get(ch) function
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);    // use it again
	}
	cout << endl << count << " characters read\n";
	// get rid of rest of line
		// while (cin.get() != '\n')
		//    ;
		//cin.get();
	return 0;
}

// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock()-start < delay);
     // wait until time elapses;                                   // note the semicolon
	cout << "done \a\n";
	// cin.get();
	// cin.get();
	return 0;
}

// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Please input your info:\n";
	cin.get(ch);        // attempt to read a char
	while (cin.fail() == false)  // test for EOF
	{
		cout << ch;     // echo character
		++count;
		cin.get(ch);    // attempt to read another char
	}
	cout << endl << count << " characters read\n";
	return 0;
}
#include<iostream>
#include<ctime>
#include<cctype>
int main()
{
	using namespace std;
	int sec = 0;

	cin >> sec;

	clock_t delay = sec * CLOCKS_PER_SEC;
	
	char ch;
	int count = 0;
	cout << "Pleaase input your info:\n";
	cin.get(ch);//attempt to read a char
	//while (cin.fail() == false)
	while(cin)
	{
		cout << ch; //echo char
		++count;
		cin.get(ch);
	}
	clock_t now = clock();
	while (clock() - now < delay);
	cout << endl << count << " characters read!" << endl;
	return 0;
}

#include<iostream>
using namespace std;


int main()
{
	char ch;
	int count = 0;
	cin.get(ch);//explicit arguments is type of char
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);//explicit arguments is type of char
	}
}


#include<iostream>
using namespace std;
int main()
{
	int ch;
	ch = cin.get();
	int count = 0;
	while (ch != EOF)
	{
		cout.put(ch);
		++count;
		ch = cin.get();
	}
	//if ch is char str,loop to display it ,or meets EOF,then stop this loop.
	//有些系统中没有char类型，并且char是unsigned的，所以其值必大于0，也就是大于EOF（-1），
	//如果在显示时，必须将其强转为char类型（static_cast<char>(ch);）

}
#include<iostream>
using namespace std;
int main()
{
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(static_cast<char>(ch));
		++count;
	}
	//werwere#$#$#@$#@$#$$#%~!@~!@RETEW
	int size = strlen("werwere#$#$#@$#@$#$$#%~!@~!@RETEW");
	cout << "size = " << size << endl;
	cout << "Reading " << count << " characters !" << endl;

}

////////////////////////////////////////////////////////////////////
#include<iostream>
int main()
{
	using namespace std;
	int count = 0;
	//用char cin.get(char) it's back to object of iostream and using cout.
	//put(ch) not using static_cast<char> to explicit convert it.

	char ch;
	cout << "Please input your str:\n";
	cin.get(ch);
	while (cin.fail() == false)
	{
		cout.put(ch);
		++count;
		cin.get(ch);
	}
	cout << "Reading " << count << " characters words!" << endl;
	return 0;
}


#include<iostream>
int main(void)
{
	using namespace std;
	int count = 0;
	int ch;
	//using cin.get()
	while ((ch = cin.get()) != EOF)
	{
		cout.put(static_cast<char>(ch));
		++count;
	}
	cout << "Reading " << count << " characters words!" << endl;
}

// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[Cities] =   // array of pointers
	{                               // to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] =   // 2-D array
	{
		{96, 100, 87, 101, 105},   // values for maxtemps[0]
		{96, 98, 91, 107, 104},   // values for maxtemps[1]
		{97, 101, 93, 108, 107}, // values for maxtemps[2]
		{98, 103, 95, 109, 108}   // values for maxtemps[3]
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	// cin.get();
	return 0;
}*/

/*
#include<iostream>
using namespace std;
int main()
{
	int maxtemp[4][5] =
	{
		{4,5,6,7,8},
		{23,34,45,65,32},
		{234,43534,345,234,565},
		{2432,32423,234324,665765,786876867}
	};
	cout << "This is 2-D data cout:\n";
	for (int row = 0; row < 4; ++row)
	{
		for (int col = 0; col < 5; ++col)
		{
			cout << maxtemp[row][col] << "\t";
		}
		cout << "\n";
	}
}

#include<iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;

	const char* cities[Cities] = {"UCSF","MIT","HAV","UCLA","OXF"};
	
	int maxtemp[Years][Cities] = {
		{96, 100, 87, 101, 105},   // values for maxtemps[0]
		{96, 98, 91, 107, 104},   // values for maxtemps[1]
		{97, 101, 93, 108, 107}, // values for maxtemps[2]
		{98, 103, 95, 109, 108}   // values for maxtemps[3]
	};

	cout << "Maxmin four year in five cities temperature:\n";

	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << " : \t";
		for (int year = 0; year < Years; ++year)
		{
			cout << cities[city] << " : \t";
			cout << maxtemp[year][city] << "\t";
		}
		cout << cities[city];
		cout << endl;
	}


	
}
#include<iostream>
#include<string>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;

	const string cities[Cities] = { "UCSF","MIT","HAV","UCLA","OXF" };

	int maxtemp[Years][Cities] = {
		{96, 100, 87, 101, 105},   // values for maxtemps[0]
		{96, 98, 91, 107, 104},   // values for maxtemps[1]
		{97, 101, 93, 108, 107}, // values for maxtemps[2]
		{98, 103, 95, 109, 108}   // values for maxtemps[3]
	};

	cout << "Maxmin four year in five cities temperature:\n";

	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << " : \t";
		for (int year = 0; year < Years; ++year)
		{
			cout << cities[city] << " : \t";
			cout << maxtemp[year][city] << "\t";
		}
		cout << cities[city];
		cout << endl;
	}
}


#include<iostream>
int main()
{
	using namespace std;
	int j;
	for (j = 0; j < 11; j += 3)
	{
		cout << j;
		cout << endl << j << endl;

	}
	//0
	//0
	//3
	//3
	//6
	//6
	//9
	//9

}

#include<iostream>
int main()
{
	using namespace std;

	int j = 5;
	while (++j <9)//j=6 j=8
	{
		cout << j++ << endl;//6 (j=7 )  8(j=9)
	}
	//6
	//8
	//
	//

}
#include<iostream>
int main()
{
	using namespace std;
	int k = 8;
	do
	{
		cout << " k =" << k << endl;
	} while (k++ <5);//k++ = 8 
	//k=8
}

#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	int forgin = 1;
	int sum = 0;
	cout << forgin << "\t";
	for (int i = 1; i < 7;++i)
	{
		sum = forgin *2;
		cout << sum << "\t";//2 
		forgin = sum;
	}
	cout << endl;
}
// 1 2 4 8 16 32 64
//2 4 8 16 32 64
//1 2 4 8 16 32
#include<iostream>
using namespace std;
int main()
{

	int x = (1024);
	int y;
	y = 1024;

	cout << x <<"\t"<<y << endl;
}


#include<iostream>
int main()
{
	using namespace std;
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (a; a <= b; a++)
	{
		sum = sum + a;
	}
	cout << sum << endl;
}
#include <iostream>
const int ArSize = 16;      // example of external declaration
int main()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
	return 0;
}
0!= 1
1!= 1
2!= 2
3!= 6
4!= 24
5!= 120
6!= 720
7!= 5040
8!= 40320
9!= 362880
10!= 3628800
11!= 39916800
12!= 479001600
13!= 6227020800
14!= 87178291200
15!= 1307674368000


#include<iostream>
#include<array>
const int ArSize = 16;
int main()
{
	using namespace std;
	std::array<long double,ArSize> factorials;
	factorials[0] = factorials[1] = 1;
	for (int i = 2; i < ArSize; ++i)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; ++i)
	{
		cout << i << "! = " << factorials[i] << endl;
	}
	//vector<double> a1(4);
	//array<double,4> a4;
		0!= 1
		1!= 1
		2!= 2
		3!= 6
		4!= 24
		5!= 120
		6!= 720
		7!= 5040
		8!= 40320
		9!= 362880
		10!= 3.6288e+06
		11!= 3.99168e+07
		12!= 4.79002e+08
		13!= 6.22702e+09
		14!= 8.71783e+10
		15!= 1.30767e+12
}
#include<iostream>
#include<vector>
int main()
{
	using namespace std;
	int number = 1;
	int sum = 0;
	cout << "We will begin this game:\n";
	vector<int> vvalue;
	while (number != 0)
	{
		cin >> number;
		vvalue.push_back(number);
		sum = number + sum;
		cout << "From now ,we input :";
		for (int i : vvalue)
			cout << i <<" ";
		cout << endl;
		cout<<"we static totaly number is:" << sum << endl;
	}
}
#include<iostream>
#include<array>
int main()
{
	using namespace std;
	//Daphne
	//Cloe
	const int ArSize = 100;
	const int cash = 100;
	const double drate = 0.1;
	const double crate = 0.05;
	double dmoney = 0;
	double cmoney = 0;
	double cformermoney = 0;
	array<double, ArSize> carvalue;
	carvalue[0] = cash + cash * crate;//c first year
	cmoney = carvalue[0];
	dmoney = cash + cash * drate;
	cout << "【1】year"<<"\t[domey:" << dmoney << "\tcmoney:" << cmoney << "]" << endl;
	if (cmoney > dmoney)
	{
		cout << "************* cmoney is" << cmoney << "\t" << "dmoney is " << dmoney;
		return 0;
	}
	for (int year = 1; year < ArSize; year++)
	{
		carvalue[year] = carvalue[year - 1] + carvalue[year - 1] * crate;
		cmoney = carvalue[year];
		dmoney = cash + cash * drate * (year+1);
		cout << "【"<< year+1<<"】"<<"year\t[domey:" << dmoney <<"\tcmoney:" << cmoney <<"]" <<endl;
		if (cmoney > dmoney)
		{
			cout << "【" << year + 1 << "】" << "************* cmoney is" << cmoney << "\t" << "dmoney is " << dmoney;
			break;
		}
	}
}
【1】year[domey:110      cmoney : 105]
【2】year[domey:120      cmoney : 110.25]
【3】year[domey:130      cmoney : 115.763]
【4】year[domey:140      cmoney : 121.551]
【5】year[domey:150      cmoney : 127.628]
【6】year[domey:160      cmoney : 134.01]
【7】year[domey:170      cmoney : 140.71]
【8】year[domey:180      cmoney : 147.746]
【9】year[domey:190      cmoney : 155.133]
【10】year[domey:200      cmoney : 162.889]
【11】year[domey:210      cmoney : 171.034]
【12】year[domey:220      cmoney : 179.586]
【13】year[domey:230      cmoney : 188.565]
【14】year[domey:240      cmoney : 197.993]
【15】year[domey:250      cmoney : 207.893]
【16】year[domey:260      cmoney : 218.287]
【17】year[domey:270      cmoney : 229.202]
【18】year[domey:280      cmoney : 240.662]
【19】year[domey:290      cmoney : 252.695]
【20】year[domey:300      cmoney : 265.33]
【21】year[domey:310      cmoney : 278.596]
【22】year[domey:320      cmoney : 292.526]
【23】year[domey:330      cmoney : 307.152]
【24】year[domey:340      cmoney : 322.51]
【25】year[domey:350      cmoney : 338.635]
【26】year[domey:360      cmoney : 355.567]
【27】year[domey:370      cmoney : 373.346]
【27】************* cmoney is373.346    dmoney is 370
C:\Users\人就是人的未来\source\repos\ConsoleApplicationcprimer\ConsoleApplicationcprimer\x64\Debug\ConsoleApplicationcprimer.exe(进程 14664)已退出，返回代码为: 0。
	若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
	按任意键关闭此窗口...


#include<iostream>
#include<string>
int main()
{
	using namespace std;
	const int ArSize = 12;
	const string month[ArSize] = {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Dec","Oct","Nov"};
	int number_of_books[ArSize];
	int count = 0;
	cout << "Please input 12 month book sales condition:\n";
	for (int i = 0; i < ArSize; ++i)
	{
		cin >> number_of_books[i];
		count = count + number_of_books[i];
	}
	cout << "Here is the book sales info:" << endl;
	cout << "[Month\t\tNumber]\n";
	for (int j = 0; j < ArSize; ++j)
	{
		cout << month[j] << "\t\t" << number_of_books[j] << endl;
	}
	cout << "Totaly sales books is:" << count<<"\n【end】";
}
Please input 12 month book sales condition :
12
45
56
78
34
376
43543
34
34
54
56
12
Here is the book sales info :
[Month          Number]
Jan             12
Feb             45
Mar             56
Apr             78
May             34
June            376
July            43543
Aug             34
Sep             34
Dec             54
Oct             56
Nov             12
Totaly sales books is : 44334
【end】
C : \Users\人就是人的未来\source\repos\ConsoleApplicationcprimer\ConsoleApplicationcprimer\x64\Debug\ConsoleApplicationcprimer.exe(进程 15512)已退出，返回代码为: 0。
	若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
	按任意键关闭此窗口...


#include<iostream>
#include<string>
int main()
{
	using namespace std;
	const int ArSize = 12;
	const int BookYear = 3;
	const string month[ArSize] = { "Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Dec","Oct","Nov" };
	int number_of_books[BookYear][ArSize];
	int count = 0;
	cout << "Please input 12 month book sales condition:\n";
	for (int year = 0; year < BookYear; ++year)
	{
		for (int i = 0; i < ArSize; ++i)
		{
			cin >> number_of_books[year][i];
			count = count + number_of_books[year][i];
		}

	}
	cout << "Here is the book sales info:" << endl;
	cout << "[Month\t\tNumber]\n";
	for (int year = 0; year < BookYear; ++year)
	{
		cout << "[" << year + 1 << "]:\n";
		for (int j = 0; j < ArSize; ++j)
		{
			cout << month[j] << "\t\t" << number_of_books[year][j] << endl;
		}
	}
	cout << endl;
	cout << "Totaly sales books is:" << count << "\n【end】";
}
Please input 12 month book sales condition :
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
Here is the book sales info :
[Month          Number]
[1] :
	Jan             1
	Feb             2
	Mar             3
	Apr             4
	May             5
	June            6
	July            7
	Aug             8
	Sep             9
	Dec             10
	Oct             11
	Nov             12
	[2]:
Jan             13
Feb             14
Mar             15
Apr             16
May             17
June            18
July            19
Aug             20
Sep             21
Dec             22
Oct             23
Nov             24
[3]:
Jan             25
Feb             26
Mar             27
Apr             28
May             29
June            30
July            31
Aug             32
Sep             33
Dec             34
Oct             35
Nov             36

Totaly sales books is : 666
【end】
C : \Users\人就是人的未来\source\repos\ConsoleApplicationcprimer\ConsoleApplicationcprimer\x64\Debug\ConsoleApplicationcprimer.exe(进程 9980)已退出，返回代码为: 0。
	若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
	按任意键关闭此窗口...

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct Car
{
	string production;//production name
	int year;//product year
};
int main()
{
	
	int calalog = 0;
	cout << "How many cars do you wish to catalog?";
	cin >> calalog;
	cin.get();
	Car *car = new Car[calalog];
	for (int i = 0; i < calalog; ++i)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make:";
		getline(cin,car[i].production);
		cout << "Please enter the year made:";
		cin >> car[i].year;
		cin.get();
	}
	for (int i = 0; i < calalog; ++i)
	{
		cout << car[i].year << "\t" << car[i].production << endl;
	}
}

How many cars do you wish to catalog ? 2
Car #1
Please enter the make : Hudson Hornet
Please enter the year made : 1952
Car #2
Please enter the make : Kaiser
Please enter the year made : 1951
1952    Hudson Hornet
1951    Kaiser

C : \Users\人就是人的未来\source\repos\ConsoleApplicationcprimer\ConsoleApplicationcprimer\x64\Debug\ConsoleApplicationcprimer.exe(进程 17544)已退出，返回代码为: 0。
	若要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
	按任意键关闭此窗口...
	
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
const int ArSize = 100;
int main()
{
	cout << "Enter words (to stop,type the word done):" << endl;
	int counternub = 0;
	int sum = 0;
	while (true)
	{
		char aralue[ArSize];
		cin.get(aralue,ArSize).get();
		cout << "[";
		int count = 0;
		int i = 0;
		int j = 0;
		char word[ArSize] = { '\0' };//singal word
		while (aralue[i] != '\0')
		{
			
			if (aralue[i] == ' ')
			{
				if (strlen(word) > 0)
				{
					count++;
					word[j] = '\0';
					cout << " " << word << " ";
					j = 0;
					if (strcmp(word, "done") == 0)
					{
						sum = sum + count;
						cout << "\tcount : " << count;
						cout << "]";
						cout << "\n Totaly sum:" << sum << endl;
						cout << "\n successfully!\n" << endl;
						return 0;
					}
					else
					{
						strcpy_s(word, ArSize, "");
					}
				}
				i++;
				continue;
			}
			else
			{
				word[j] = aralue[i];
				j++;
				i++;
			}

		}
		if (strlen(word) > 0)
		{
			count++;
			word[j] = '\0';
			cout << " " << word << " ";
			j = 0;
			if (strcmp(word, "done") == 0)
			{
				cout << "count :\t" << count;
				cout << "]";
				sum = sum + count;
				cout << "\n Totaly sum:" << sum << endl;
				cout << "\n successfully!\n" << endl;
				return 0;
			}
			else
			{
				strcpy_s(word, ArSize, "");
			}
		}
		sum = sum + count;
		cout << "count :\t" << count;
		cout << "]";
		cout << endl;
	}
	cout << "\n Totaly sum:" << sum << endl;
	cout << "\n successfully!\n" << endl;
}


//using std::string to overwrite it.
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;
const int ArSize = 100;
int main()
{
	cout << "Enter words (to stop,type the word done):" << endl;
	int counternub = 0;
	int sum = 0;
	while (true)
	{
		string aralue;
		//char aralue[ArSize];
		//cin.get(aralue, ArSize).get();
		getline(cin,aralue);
		cout << "[";
		int count = 0;
		int i = 0;
		int j = 0;
		char word[ArSize] = { '\0' };//singal word
		while (aralue[i] != '\0')
		{

			if (aralue[i] == ' ')
			{
				if (strlen(word) > 0)
				{
					count++;
					word[j] = '\0';
					cout << " " << word << " ";
					j = 0;
					if (strcmp(word, "done") == 0)
					{
						sum = sum + count;
						cout << "\tcount : " << count;
						cout << "]";
						cout << "\n Totaly sum:" << sum << endl;
						cout << "\n successfully!\n" << endl;
						return 0;
					}
					else
					{
						strcpy_s(word, ArSize, "");
					}
				}
				i++;
				continue;
			}
			else
			{
				word[j] = aralue[i];
				j++;
				i++;
			}

		}
		if (strlen(word) > 0)
		{
			count++;
			word[j] = '\0';
			cout << " " << word << " ";
			j = 0;
			if (strcmp(word, "done") == 0)
			{
				cout << "count :\t" << count;
				cout << "]";
				sum = sum + count;
				cout << "\n Totaly sum:" << sum << endl;
				cout << "\n successfully!\n" << endl;
				return 0;
			}
			else
			{
				strcpy_s(word, ArSize, "");
			}
		}
		sum = sum + count;
		cout << "count :\t" << count;
		cout << "]";
		cout << endl;
	}
	cout << "\n Totaly sum:" << sum << endl;
	cout << "\n successfully!\n" << endl;
}

#include<iostream>
using  namespace std;
inline void print_row(int row);
int main()
{
	using namespace std;
	int count;
	while (cin.fail() == false)
	{
		cout << "Enter number of rows:" << endl;
		cin >> count;
		cin.get();
		print_row(count);
	}
}

inline void print_row(int row)
{
	int i = 1;
	int point = 1;
	int sta = 1;
	while (i<=row)
	{
		point = row - i;
		int ipoint = 0;
		while (ipoint<point)
		{
			cout << ".";
			ipoint++;
		}
		ipoint = 0;
		while (ipoint<i)
		{
			cout << "*";
			ipoint++;
		}
		cout << endl;
		i++;
	}
}

#include<stdio.h>
#include<Windows.h>
int main()
{

	while (1)
	{
		system(" color 0c");//设计程序颜色 
		printf("叶韵诗,爱你哟！！！\n");//打印文字 

		float x, y, a;//定义变量x,y,a 

		for (y = 1.5f; y > -1; y -= 0.1f)
		{
			for (x = -1.5f; x < 1.5f; x += .05f) {
				a = x * x + y * y - 1;
				
				putchar(a*a*a - x * x*y*y*y < 0.0f ? 'x' : ' ');
			}
			Sleep(100);//停顿函数（1.5秒钟） 
			putchar('\n'); //换行 
		}
		system("cls");
	}
	return 0;
}

// if.cpp -- using the if statement
#include <iostream>
int main()
{
	using std::cin;     // using declarations
	using std::cout;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')   // quit at end of sentence
	{
		if (ch == ' ')  // check if ch is a space
			++spaces;
		++total;        // done every time
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";
	// cin.get();
	// cin.get();
	return 0;
}


// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;     // done if newline
		else
			std::cout << ++ch;   // done otherwise
		std::cin.get(ch);
	}
	// try ch + 1 instead of ++ch for interesting effect
	std::cout << "\nPlease excuse the slight confusion.\n";
	// std::cin.get();
	// std::cin.get();
	return 0;
}

// ifelseif.cpp -- using if else if else
#include <iostream>
const int Fave = 27;
int main()
{
	using namespace std;
	int n;

	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again: ";
		else if (n > Fave)
			cout << "Too high -- guess again: ";
		else
			cout << Fave << " is right!\n";
	} while (n != Fave);
	return 0;
}

// or.cpp -- using the logical OR operator
#include <iostream>
int main()
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')             // y or Y
		cout << "You were warned!\a\a\n";
	else if (ch == 'n' || ch == 'N')        // n or N
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or n! Apparently you "
		"can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";
	// cin.get();
	// cin.get();
	return 0;
}

// and.cpp -- using the logical AND operator
#include <iostream>
const int ArSize = 6;
int main()
{
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0) // 2 quitting criteria
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)             // room left in the array,
		{
			cout << "Next value: ";
			cin >> temp;            // so get next value
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	// cin.get();
	// cin.get();
	return 0;
}


// more_and.cpp -- using the logical AND operator

#include <iostream>
const char * qualify[4] =       
{                              
	"10,000-meter race.\n",
	"mud tug-of-war.\n",
	"masters canoe jousting.\n",
	"pie-throwing festival.\n"
};
int main()
{
	using namespace std;
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You qualify for the " << qualify[index];
	return 0;
}

// not.cpp -- using the not operator
#include <iostream>
#include <climits>
bool is_int(double);
int main()
{
	using namespace std;
	double num;

	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))    // continue while num is not int-able
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);    // type cast
	cout << "You've entered the integer " << val << "\nBye\n";
	// cin.get();
	// cin.get();
	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX and x >= INT_MIN)   // use climits values
		return true;
	else
		return false;
}

// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype>              // prototypes for character functions
int main()
{
	using namespace std;
	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);                // get first character
	while (ch != '@')            // test for sentinel
	{
		if (isalpha(ch))         // is it an alphabetic character?
			chars++;
		else if (isspace(ch))    // is it a whitespace character?
			whitespace++;
		else if (isdigit(ch))    // is it a digit?
			digits++;
		else if (ispunct(ch))    // is it punctuation?
			punct++;
		else
			others++;
		cin.get(ch);            // get next character
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";
	// cin.get();
	// cin.get();
	return 0;
}


// condit.cpp -- using the conditional operator
#include <iostream>
int main()
{
	using namespace std;
	int a, b,c;
	cout << "Enter three integers: ";
	cin >> a >> b>>c;
	int d = 0;
	cout << "The larger of " << a << " and  " << b<<" and "<<c;
	d = (a>b?a:b) >c ? ((a>b?a:b)): c;   // c = a if a > b, else c = b
	cout << " is " << d << endl;
	// cin.get();
	// cin.get();
	return 0;
}

// switch.cpp -- using the switch statement
#include <iostream>
using namespace std;
void showmenu();   // function prototypes
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1:   cout << "\a\n";
			break;
		case 2:   report();
			break;
		case 3:   cout << "The boss was in all day.\n";
			break;
		case 4:   comfort();
			break;
		default:   cout << "That's not a choice.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
	// cin.get();
	// cin.get();
	return 0;
}

void showmenu()
{
	cout << "Please enter 1, 2, 3, 4, or 5:\n"
		"1) alarm           2) report\n"
		"3) alibi           4) comfort\n"
		"5) quit\n";
}
void report()
{
	cout << "It's been an excellent week for business.\n"
		"Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
	cout << "Your employees think you are the finest CEO\n"
		"in the industry. The board of directors think\n"
		"you are the finest CEO in the industry.\n";
}

// enum.cpp -- using enum
#include <iostream>
// create named constants for 0 - 6
enum { red, orange, yellow, green, blue, violet, indigo };

int main()
{
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red: cout << "Her lips were red.\n"; break;
		case orange: cout << "Her hair was orange.\n"; break;
		case yellow: cout << "Her shoes were yellow.\n"; break;
		case green: cout << "Her nails were green.\n"; break;
		case blue: cout << "Her sweatsuit was blue.\n"; break;
		case violet: cout << "Her eyes were violet.\n"; break;
		case indigo: cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
	// cin.get();
	// cin.get();
	return 0;
}

// jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
int main()
{
	using namespace std;
	char line[ArSize];
	int spaces = 0;

	cout << "Enter a line of text:\n";
	cin.get(line, ArSize);
	cout << "Complete line:\n" << line << endl;
	cout << "Line through first period:\n";
	for (int i = 0; line[i] != '\0'; i++)
	{
		cout << line[i];    // display character
		if (line[i] == '.') // quit if it's a period
			break;
		if (line[i] != ' ') // skip rest of loop
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
	// cin.get();
	// cin.get();
	return 0;
}


// cinfish.cpp -- non-numeric input terminates loop
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	// get data
	double fish[Max];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << Max
		<< " fish <q to terminate>.\n";
	cout << "fish #1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]) {
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
	// calculate average
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	// report results
	if (i == 0)
		cout << "No fish\n";
	else
		cout << total / i << " = average weight of "
		<< i << " fish\n";
	cout << "Done.\n";
	// code to keep VC execution window open if q is entered
	//	if (!cin)  // input terminated by non-numeric response
	//	{
	//	    cin.clear();  // reset input
	//	    cin.get();    // read q
	//	}
	//	cin.get();    // read end of line after last input
	//	cin.get();    // wait for user to press <Enter>
	return 0;
}

// cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	// get data
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;
	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter number:";
		}
	}
	// calculate average
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	// report results
	cout << total / Max << " = average score "
		<< Max << " rounds\n";
	// cin.get();
	// cin.get();
	return 0;
}

#include<iostream>
int main()
{
	using namespace std;
	char ch;
	cin >> ch;
	cout << ch;
}
#include<iostream>
int main()
{
	using namespace std;
	char ch[50];
	cin.getline(ch, 50);
	cout << ch;
}
#include<iostream>
#include<fstream> //for file I/O

int main()
{
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;//create an ofstream object for output

	outFile.open("carinfo.txt");

	cout << "Enter the make and model of automobile: ";

	cin.getline(automobile, 50);

	cout << "Enter the model year: ";

	cin >> year;

	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	//diaplay information on screen with cout

	cout << fixed;//// set floatfield to fixed 这行代码设置了浮点数的输出格式为固定小数点表示法。这意味着浮点数将以固定的小数位数显示，而不是科学计数法。

	cout.precision(3);//set precision to argument 这行代码设置了浮点数输出的精度为2位小数。这意味着无论实际的浮点数值是多少，都将显示两位小数。

	cout.setf(ios_base::showpoint);//这行代码设置了输出时显示小数点后的零。即使小数部分为零，也会显示小数点和零

	cout << "Make and model: " << automobile << endl;

	cout << "Year: " << year << endl;

	cout << "Was asking $" << a_price << endl;

	cout << "Now asking $" << d_price << endl;

	//using outFile instead of cout

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);

	outFile << "Make and model: " << automobile << endl;

	outFile << "Year: " << year << endl;

	outFile << "Was asking $" << a_price << endl;

	outFile << "Now asking $" << d_price << endl;
	//done with file .
	outFile.close();

}

#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE = 60;
int main()
{
	using namespace std;

	char filename[SIZE];
	ifstream inFile;
	cin.getline(filename, SIZE);

	inFile.open(filename);

	if (!inFile.is_open())
	{
		cout << "Could not open" << filename << endl;
		cout << "exit()" << endl;
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0;

	int count = 0;
	//最后一次的读取是否成功。
//	inFile >> value;

	while (inFile >> value)
	{
		++count;
		sum += value;
	//	inFile >> value;
		cout << value << " ";
	}
	cout << endl;
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
}
// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;     // done if newline
		else
			std::cout << ++ch;   // done otherwise
		std::cin.get(ch);
	}
	// try ch + 1 instead of ++ch for interesting effect
	std::cout << "\nPlease excuse the slight confusion.\n";
	// std::cin.get();
	// std::cin.get();
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	//Hi
	//Send $10 or $20 now!
	char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$')
	{
		cout << ch;//Hi\nS e n  d 
		ct1++;//1 2 3 4 5 6 7 8
		if (ch = '$')//ch = $ ch =$ \n = $ . . . ..
			ct2++;//1  2 3 4 5 6 7 8
		cout << ch;//$$$$$$$$
	}
	cout << "ct1 = " << ct1 << " , ct2= " << ct2;
}
//H$i$
//$S$e$n$d$ $

#include<iostream>
#include<cctype>
#include "ConsoleApplicationcprimer.h"
using namespace std;
bool numberjud(int weight);
int main()
{
	int n;
	while (cin >> n)
	{
		bool flag = numberjud(n);
		if (flag)
		{
			cout << "n = " << n << endl;
			continue;;
		}
		else
		{
			break;
		}
	}
}
bool numberjud(int weight)
{
	if (((weight >= 115) ) && (weight <= 125))
	{
		cout << "vertification ok!";
		return true;
	}
	else
	{
		return false;
	}
	
}

#include<iostream>
using namespace std;
int main()
{
	bool n = true;
	if (!!n == n)
	{
		cout << "ok!" << endl;
	}
	else
	{
		cout << "some error    " << !!n << endl;
	}
}
#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	if (x < 0)
		x = -x;
	else
		x = x;
	cout << x;
}

//请重写该代码片段。不要使用break和continue.
int line = 0;
char ch;
while (cin.get(ch))
{
	if (ch == 'Q')
		break;
	if (ch != '\n')
		continue;
	line++
}
#include<iostream>
using namespace std;
int main()
{
	//int line = 0;
	//char ch;
	//while (cin.get(ch) && !(ch == 'Q'))
	//{
	//	if (ch == '\n')
	//		line++;
	//}
	//cout << "LINE   = " << line << endl;
	int line = 0;
	char ch;
	while (cin.get(ch))
	{
		if (ch == 'Q')
			break;
		if (ch != '\n')
			continue;
		line++;
	}
	cout << "line = "<<line << endl;
}
*/
