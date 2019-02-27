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
const char *str1[] = {" "," один", " два" ," три" ," четыре"," пять"," шесть"," семь"," восемь"," девять"};
const char *posdes[] = {" "," одиннадцать"," двенадцать"," тринадцать"," четырнадцать"," пятнадцать"," шестнадцать", " семнадцать"," восемнадцать"," девятнадцать"};
const char *str2[] = {" "," десять" ," двадцать"," тридцать"," сорок"," пятьдесят"," шестьдесят"," семьдесят"," восемьдесят"," девяносто"};
const char *str3[] = {" "," сто"," двести"," триста"," четырста"," пятьсот"," шестьсот"," семьсот"," восемьсот"," девятьсот"};
const char *srt4[] = {" "," одна"," две"," три"," четыре"," пять"," шесть"," семь"," восемь"," девять" };
char str5[] = "-";//otladka

int main() {

int tmp;

setlocale(LC_ALL, "Russian");

cout<<"Введите первое число : ";
cin>>n1;
cout<<"Введите второе число : ";
cin>>n2;

cout<<"Что вы хотите сделать с первым и вторым числом? - Введите знак действия:  + , - , *   ";
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





 		     
 		     
 		     
