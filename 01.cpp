#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;
//������;�� ע��
//���ﶨ��ı����ǲ��ܱ��޸ĵ�
//ע��:��ʶ������������
/*
1.��ʶ���������ǹؼ���
2.��ʶ�������֣���ĸ,�»��߹���
3.��ʶ����ͷ��һ���ַ�ֻ������ĸ���»���
4.���ε�ȡֵ��Χ�������һ�¾��У�Ȼ���Ƕ�ռ�е��ֽ���
*/
#define day 10
int main() {
	//cout <<"hello world"<<endl;
	//int a = 10;
//���ﶨ��ı����ǲ����޸ĵ�
	//const int b = 10;
	//long c = 10;
	//�൱��c�����е�print����
	//�����ͱ�����ʹ��
	//cout << "this week has" << day << "day" << endl;
	//cout << "this week has" << b << "day" << endl;
	//cout << "a=" << a << endl;
	//sizeof�ж���ռ���ֽ���
	//cout << "long���ֽ�����:" << sizeof(c) << endl;
    //ע���������f��ϵͳ���Զ�Ĭ����double����
	//float a = 1.222f;
	//ת��ΪASCII���������
	//char d = 'c';
	//cout << int(d) << endl;
	//ת���ַ�,���һ��/Ҫд������/
	//cout << "//" << endl;
	/*char str1[] = "hello world";
	string str2 = "hello world";
	cout << str1 << endl;
	cout << str2 << endl;*/
	//�������͵�ʵ�ʾ���0,1
	//bool g = true;
	//cout << g << endl;
	/*int f;
	cout << "���c�������и�ֵ:" << endl;
	cin >> f;
	cout << "f������ֵ��:" << f << endl;*/
	//����С�������������ȡģ���ҳ�����ȡ����ʱ���ĸ����Ϊ0
	//int num1 = 10;
	//int num2 = 2.2;
	//cout << num1 / num2 << endl;//�������������Ȼ������
	//�����͵ݼ�
	//ע��++h�����ǶԱ������м�1Ȼ���������
	//h++��ʾ�Ƚ�������
	//���ʽ�������������ö�����ͣ���������������
	//float h = 10.1;
	//int h2 = ++h * 10;
	//��=��c�����б�ʾ������
	//cout << h/2 << endl;
	//cout << h2 << endl;
	//�߼���,��c++��
	//int j = 10;
	//cout << !j << endl;
	//int r1 = 10;
	//int r2 = 0;
	//�߼���,��&& ||��ʾ
	//cout <<(r1 && r2)<< endl;
	/*
	1.if else if else if ��ʾ��������if�ж�
	2.if��ʽ��Ƕ�� �ܼ�
	3.��Ŀ������Ĳ���
	*/
	/*int p;
	cin >> p;
	cout << "���������:" << p << endl;
	if (p > 100) {
		cout << "��������" << endl;
	}*/
	//int c = 0;
	//int a = 10;
	//int b = 0;
	//�������һ�������������ǽ�b��ֵ������c
	//c = a > b ? a:b;
	/*
	switch(){
	case1:default
	case2:default
	while(condition){}
	*/
	//ctl+k+c��ʾ����ע�� ctl+k+u��ʾȡ������ע��
	/*while (true) {
	cout << c << endl;
		}*/
	//����1-100�������
	//������������
	//�����������ӵ�Ŀ�ľ��Ǹ���ϵͳ��ʱ��������������
	/*srand((unsigned int)time(NULL));
	int d = rand() % 100 + 1;
	int c = 0;
	while (1) {
		cin >> c;
		if (c > d) {
			cout << "����������ֹ���,����������" << endl;
		}
		else if(c<d) {
			cout << "����������ֹ���,����������" << endl;
		}
		else {
			break;
		}
	}*/
	//do - while ѭ�����:ע��һ��:��������ִ��do��������,Ȼ����ִ��while��������
	//�����е�ˮ�ɻ���
	//��λ�� bai = c/100  shi = c/10%10 ge = c%10   
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
    //��ӡ�˷���
//ע��i,j��ѭ���������Զ���ʧ
//break�����������ѡ��ṹ��ѭ���ṹ
//continue��ʾ��������ѭ����ִ����һ��ѭ��
//����
goto FLAG;
for (int i = 1; i < 10; i++) {
	for (int j = 1; j <= i;j++) {
		//�ٴν���ѭ��j��ֵ������
		//ע��ת���ַ�����д
		cout << i << "*" << j << "=" << i * j<<"\t";
	}
	//�������ڻ���
	cout << endl;
	}
//��Ǻ���
FLAG:
	system("pause");
	return 0;
}
//c++������ע�͵�ʹ��