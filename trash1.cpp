#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

float n1=0;
float n2=0;
char d;
const char *str1[] = {" "," ����", " ���" ," ���" ," ������"," ����"," �����"," ����"," ������"," ������"};
const char *posdes[] = {" "," �����������"," ����������"," ����������"," ������������"," ����������"," �����������", " ����������"," ������������"," ������������"};
const char *str2[] = {" "," ������" ," ��������"," ��������"," �����"," ���������"," ����������"," ���������"," �����������"," ���������"};
const char *str3[] = {" "," ���"," ������"," ������"," ��������"," �������"," ��������"," �������"," ���������"," ���������"};
const char *str4[] = {" "," ����"," ���"," ���"," ������"," ����"," �����"," ����"," ������"," ������" };
char str5[] = "������";//otladka
char str6[] = "�����";
char str7[] = "������";

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
	if (tmp<0)
	{
				printf("�����");
	}
	
	if ( (tmp>-1) && (tmp<1) )
	{
		printf("����");
		break;
	}
for ((abs(tmp)>0)&&(abs(tmp)<1000000)){

for ((tmp>99999)&&(tmp<1000000)){
	printf(str3[tmp/100000]);printf(str6);
	tmp=tmp/10;
for ((tmp>19999)&&(tmp<100000))
{
	printf(str2[tmp/1000]);printf(str6);
	tmp=tmp/10;

for ((tmp>9999)&&(tmp<20000)){
	if (tmp<11000)
	{
	printf(str2[1]);printf(str6);
	tmp=tmp/10;
	}
		if(tmp>10999)
		{
			printf(posdes[(tmp/1000)%10]);printf(str6);
			tmp=tmp/10;
		}

for ( (tmp>999) && (tmp<10000){

if (tmp<2000)//1tis
{
	printf(str4[tmp/1000]);printf(str5);
	tmp=tmp/10;
}
if ( (tmp<3000) && (tmp>1999) )
{
	printf(str4[tmp/1000]);printf(str7);
	tmp=tmp/10;
}
if  (tmp>4999) //>5k
{
	printf(str4[tmp/1000]);printf(str6);
	tmp=tmp/10;
}
}
}
}
}

}
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






for ((tmp>99999)&&(tmp<1000000)){
	printf(str3[tmp/100000]);printf(str6);
	tmp=tmp/10;
for ((tmp>19999)&&(tmp<100000))
{
	printf(str2[tmp/1000]);printf(str6);
	tmp=tmp/10;

for ((tmp>9999)&&(tmp<20000)){
	if (tmp<11000)
	{
	printf(str2[1]);printf(str6);
	tmp=tmp/10;
	}
		if(tmp>10999)
		{
			printf(posdes[(tmp/1000)%10]);printf(str6);
			tmp=tmp/10;
		}

for ( (tmp>999) && (tmp<10000){

if (tmp<2000)//1tis
{
	printf(str4[tmp/1000]);printf(str5);
	tmp=tmp/10;
}
if ( (tmp<3000) && (tmp>1999) )
{
	printf(str4[tmp/1000]);printf(str7);
	tmp=tmp/10;
}
if  (tmp>4999) //>5k
{
	printf(str4[tmp/1000]);printf(str6);
	tmp=tmp/10;
}
}
}
}
}



 		     
 		     
 		     
