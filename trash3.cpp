#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

float n1=0;
float n2=0;
int m=255;
char d;
const char *str1[] = {" "," ����", " ���" ," ���" ," ������"," ����"," �����"," ����"," ������"," ������"};
const char *posdes[] = {" "," �����������"," ����������"," ����������"," ������������"," ����������"," �����������", " ����������"," ������������"," ������������"};
const char *str2[] = {" "," ������" ," ��������"," ��������"," �����"," ���������"," ����������"," ���������"," �����������"," ���������"};
const char *str3[] = {" "," ���"," ������"," ������"," ��������"," �������"," ��������"," �������"," ���������"," ���������"};
const char *srt4[] = {" "," ����"," ���"," ���"," ������"," ����"," �����"," ����"," ������"," ������" };
char str5[] = "-";//otladka

int main() {

int tmp;

setlocale(LC_ALL, "Russian");

cout<<"������� ������ ����� : ";
cin>>n1;
cout<<"������� ������ ����� : ";
cin>>n2;

cout<<"��� �� ������ ������� � ������ � ������ ������? - ������� ���� ��������:  + , - , *   ";
cin>>d;

switch(d)
{
case '+':
cout<<n1<<d<<n2<<"="<<n1+n2<<endl;
tmp=n1+n2;
	if ((tmp>0)&&(tmp/100>0))
	{
	printf(str5);
	printf(str3[(tmp%10)]);
	
    }


printf(str5);
break;

case '-':
tmp=n1-n2;
cout<<n1<<d<<n2<<"="<<n1-n2<<endl;
printf(str5);
break;

case '*':
tmp=n1*n2;
cout<<n1<<d<<n2<<"="<<n1*n2<<endl;
printf(str5);
break;
}


return 0;
}





 		     
 		     
 		     
