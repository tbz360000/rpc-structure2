#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;
//不能有;号 注意
//这里定义的变量是不能被修改的
//注意:标识符的命名规则：
/*
1.标识符不可以是关键字
2.标识符由数字，字母,下划线构成
3.标识符开头第一个字符只能是字母和下划线
4.整形的取值范围这个随便查一下就行，然后是多占有的字节数
*/
#define day 10
int main() {
	//cout <<"hello world"<<endl;
	//int a = 10;
//这里定义的变量是不能修改的
	//const int b = 10;
	//long c = 10;
	//相当于c语言中的print函数
	//常量和变量的使用
	//cout << "this week has" << day << "day" << endl;
	//cout << "this week has" << b << "day" << endl;
	//cout << "a=" << a << endl;
	//sizeof判断所占的字节数
	//cout << "long的字节数是:" << sizeof(c) << endl;
    //注意如果不加f，系统会自动默认是double类型
	//float a = 1.222f;
	//转换为ASCII码进行运行
	//char d = 'c';
	//cout << int(d) << endl;
	//转义字符,输出一个/要写上两个/
	//cout << "//" << endl;
	/*char str1[] = "hello world";
	string str2 = "hello world";
	cout << str1 << endl;
	cout << str2 << endl;*/
	//布尔类型的实质就是0,1
	//bool g = true;
	//cout << g << endl;
	/*int f;
	cout << "请给c变量进行赋值:" << endl;
	cin >> f;
	cout << "f变量的值是:" << f << endl;*/
	//两个小数能相除，不能取模，且除法和取余数时候分母不能为0
	//int num1 = 10;
	//int num2 = 2.2;
	//cout << num1 / num2 << endl;//两个整数相除仍然是整数
	//递增和递减
	//注意++h首先是对变量进行加1然后进行运算
	//h++表示先进行运算
	//表达式必须具有整数和枚举类型，除法可以有整数
	//float h = 10.1;
	//int h2 = ++h * 10;
	//！=在c语言中表示不等于
	//cout << h/2 << endl;
	//cout << h2 << endl;
	//逻辑非,在c++中
	//int j = 10;
	//cout << !j << endl;
	//int r1 = 10;
	//int r2 = 0;
	//逻辑与,或&& ||表示
	//cout <<(r1 && r2)<< endl;
	/*
	1.if else if else if 表示多条件的if判断
	2.if格式的嵌套 很简单
	3.三目运算符的操作
	*/
	/*int p;
	cin >> p;
	cout << "请输入分数:" << p << endl;
	if (p > 100) {
		cout << "分数出错" << endl;
	}*/
	//int c = 0;
	//int a = 10;
	//int b = 0;
	//输出的是一个变量，这里是将b的值赋给了c
	//c = a > b ? a:b;
	/*
	switch(){
	case1:default
	case2:default
	while(condition){}
	*/
	//ctl+k+c表示多行注释 ctl+k+u表示取消多行注释
	/*while (true) {
	cout << c << endl;
		}*/
	//生成1-100的随机数
	//添加随机数种子
	//添加随机数种子的目的就是根据系统的时间随机生成随机数
	/*srand((unsigned int)time(NULL));
	int d = rand() % 100 + 1;
	int c = 0;
	while (1) {
		cin >> c;
		if (c > d) {
			cout << "您输入的数字过大,请重新输入" << endl;
		}
		else if(c<d) {
			cout << "您输入的数字过大,请重新输入" << endl;
		}
		else {
			break;
		}
	}*/
	//do - while 循环语句:注意一点:即他会先执行do里面的语句,然后再执行while里面的语句
	//求所有的水仙花数
	//三位数 bai = c/100  shi = c/10%10 ge = c%10   
	/*int num = 100;
	do {
		int ge = num % 10;
		int shi = num / 10 % 10;
		int bai = num / 100;
		if (ge*ge*ge + shi*shi*shi + bai*bai*bai == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);*/
    //打印乘法表
//注意i,j在循环结束后自动消失
//break语句用于跳出选择结构和循环结构
//continue表示跳出本次循环，执行下一次循环
//跳到
goto FLAG;
for (int i = 1; i < 10; i++) {
	for (int j = 1; j <= i;j++) {
		//再次进入循环j的值被重置
		//注意转义字符的书写
		cout << i << "*" << j << "=" << i * j<<"\t";
	}
	//到这里在换行
	cout << endl;
	}
//标记函数
FLAG:
	system("pause");
	return 0;
}
//c++语言中注释的使用