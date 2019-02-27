#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

float n1=0;
float n2=0;
char d;
const char *str1[] = {" "," один", " два" ," три" ," четыре"," пять"," шесть"," семь"," восемь"," девять"};
const char *posdes[] = {" "," одиннадцать"," двенадцать"," тринадцать"," четырнадцать"," пятнадцать"," шестнадцать", " семнадцать"," восемнадцать"," девятнадцать"};
const char *str2[] = {" "," десять" ," двадцать"," тридцать"," сорок"," пятьдесят"," шестьдесят"," семьдесят"," восемьдесят"," девяносто"};
const char *str3[] = {" "," сто"," двести"," триста"," четырста"," пятьсот"," шестьсот"," семьсот"," восемьсот"," девятьсот"};
const char *str4[] = {" "," одна"," две"," три"," четыре"," пять"," шесть"," семь"," восемь"," девять" };
char str5[] = "минус";


int main() {
setlocale(LC_ALL, "Russian");
int tmp;
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
	if (tmp>1000)
	{
		printf("Функция представления прописью такого числа не рализована ");
	}
	if (tmp<0)
	{
				printf(str5);
	}
	
switch (tmp / 100) //start
{
case 1: printf(str3[tmp/100]); break;
case 2: printf(str3[tmp/100]); break;
case 3: printf(str3[tmp/100]); break;
case 4: printf(str3[tmp/100]); break;
case 5: printf(str3[tmp/100]); break;
case 6: printf(str3[tmp/100]); break;
case 7: printf(str3[tmp/100]); break;
case 8: printf(str3[tmp/100]); break;
case 9: printf(str3[tmp/100]); break;
}switch ((tmp % 100) / 10)
{
case 2: printf(str2[((tmp % 100) / 10)]); break;
case 3: printf(str2[((tmp % 100) / 10)]); break;
case 4: printf(str2[((tmp % 100) / 10)]); break;
case 5: printf(str2[((tmp % 100) / 10)]); break;
case 6: printf(str2[((tmp % 100) / 10)]); break;
case 7: printf(str2[((tmp % 100) / 10)]); break;
case 8: printf(str2[((tmp % 100) / 10)]); break;
case 9: printf(str2[((tmp % 100) / 10)]); break;
}
if ((tmp % 100 >= 10)&&(tmp % 100 < 20) ) {
switch (tmp % 100){
case 10: printf(str2[1]); break;
case 11: printf(posdes[(tmp % 100)/10]); break;
case 12: printf(posdes[(tmp % 100)/10]); break;
case 13: printf(posdes[(tmp % 100)/10]); break;
case 14: printf(posdes[(tmp % 100)/10]); break;
case 15: printf(posdes[(tmp % 100)/10]); break;
case 16: printf(posdes[(tmp % 100)/10]); break;
case 17: printf(posdes[(tmp % 100)/10]); break;
case 18: printf(posdes[(tmp % 100)/10]); break;
case 19: printf(posdes[(tmp % 100)/10]); break;
}
}
else{
switch (tmp % 10)
{
case 0: printf("ноль");break;
case 1: printf(str1[tmp%10]); break;
case 2: printf(str1[tmp%10]); break;
case 3: printf(str1[tmp%10]); break;
case 4: printf(str1[tmp%10]); break;
case 5: printf(str1[tmp%10]); break;
case 6: printf(str1[tmp%10]); break;
case 7: printf(str1[tmp%10]); break;
case 8: printf(str1[tmp%10]); break;
case 9: printf(str1[tmp%10]); break;
}
}
break;



case '-':
tmp=n1-n2;
cout<<n1<<d<<n2<<"="<<n1-n2<<endl;
	if (tmp>1000)
	{
		printf("Функция представления прописью такого числа не рализована,т.к. я хлебушек и откладывал написание этой проги :( ");
	}

	if (tmp<0)
	{
				printf(str5);
	}
	
switch (tmp / 100) //start
{
case 1: printf(str3[tmp/100]); break;
case 2: printf(str3[tmp/100]); break;
case 3: printf(str3[tmp/100]); break;
case 4: printf(str3[tmp/100]); break;
case 5: printf(str3[tmp/100]); break;
case 6: printf(str3[tmp/100]); break;
case 7: printf(str3[tmp/100]); break;
case 8: printf(str3[tmp/100]); break;
case 9: printf(str3[tmp/100]); break;
}switch ((tmp % 100) / 10)
{
case 2: printf(str2[((tmp % 100) / 10)]); break;
case 3: printf(str2[((tmp % 100) / 10)]); break;
case 4: printf(str2[((tmp % 100) / 10)]); break;
case 5: printf(str2[((tmp % 100) / 10)]); break;
case 6: printf(str2[((tmp % 100) / 10)]); break;
case 7: printf(str2[((tmp % 100) / 10)]); break;
case 8: printf(str2[((tmp % 100) / 10)]); break;
case 9: printf(str2[((tmp % 100) / 10)]); break;
}
if ((tmp % 100 >= 10)&&(tmp % 100 < 20)){
switch (tmp % 100){
case 10: printf(str2[1]); break;
case 11: printf(posdes[(tmp % 100)/10]); break;
case 12: printf(posdes[(tmp % 100)/10]); break;
case 13: printf(posdes[(tmp % 100)/10]); break;
case 14: printf(posdes[(tmp % 100)/10]); break;
case 15: printf(posdes[(tmp % 100)/10]); break;
case 16: printf(posdes[(tmp % 100)/10]); break;
case 17: printf(posdes[(tmp % 100)/10]); break;
case 18: printf(posdes[(tmp % 100)/10]); break;
case 19: printf(posdes[(tmp % 100)/10]); break;
}
}
else{
switch (tmp % 10)
{
case 0: printf("ноль");break;
case 1: printf(str1[tmp%10]); break;
case 2: printf(str1[tmp%10]); break;
case 3: printf(str1[tmp%10]); break;
case 4: printf(str1[tmp%10]); break;
case 5: printf(str1[tmp%10]); break;
case 6: printf(str1[tmp%10]); break;
case 7: printf(str1[tmp%10]); break;
case 8: printf(str1[tmp%10]); break;
case 9: printf(str1[tmp%10]); break;
}
}
break;


case '*':
tmp=n1*n2;
cout<<n1<<d<<n2<<"="<<n1*n2<<endl;
	if (tmp>1000)
	{
		printf("Функция представления прописью такого чиcла не рализована");
	}
	if (tmp<0)
	{
				printf(str5);
	}
	
switch (tmp / 100) //start
{
case 1: printf(str3[tmp/100]); break;
case 2: printf(str3[tmp/100]); break;
case 3: printf(str3[tmp/100]); break;
case 4: printf(str3[tmp/100]); break;
case 5: printf(str3[tmp/100]); break;
case 6: printf(str3[tmp/100]); break;
case 7: printf(str3[tmp/100]); break;
case 8: printf(str3[tmp/100]); break;
case 9: printf(str3[tmp/100]); break;
}switch ((tmp % 100) / 10)
{
case 2: printf(str2[((tmp % 100) / 10)]); break;
case 3: printf(str2[((tmp % 100) / 10)]); break;
case 4: printf(str2[((tmp % 100) / 10)]); break;
case 5: printf(str2[((tmp % 100) / 10)]); break;
case 6: printf(str2[((tmp % 100) / 10)]); break;
case 7: printf(str2[((tmp % 100) / 10)]); break;
case 8: printf(str2[((tmp % 100) / 10)]); break;
case 9: printf(str2[((tmp % 100) / 10)]); break;
}
if ((tmp % 100 >= 10)&&(tmp % 100 < 20))   
 {
switch (tmp % 100){
case 10: printf(str2[1]); break;
case 11: printf(posdes[(tmp % 100)/10]); break;
case 12: printf(posdes[(tmp % 100)/10]); break;
case 13: printf(posdes[(tmp % 100)/10]); break;
case 14: printf(posdes[(tmp % 100)/10]); break;
case 15: printf(posdes[(tmp % 100)/10]); break;
case 16: printf(posdes[(tmp % 100)/10]); break;
case 17: printf(posdes[(tmp % 100)/10]); break;
case 18: printf(posdes[(tmp % 100)/10]); break;
case 19: printf(posdes[(tmp % 100)/10]); break;
}
}
else{
switch (tmp % 10)
{
case 0: printf("ноль");break;
case 1: printf(str1[tmp%10]); break;
case 2: printf(str1[tmp%10]); break;
case 3: printf(str1[tmp%10]); break;
case 4: printf(str1[tmp%10]); break;
case 5: printf(str1[tmp%10]); break;
case 6: printf(str1[tmp%10]); break;
case 7: printf(str1[tmp%10]); break;
case 8: printf(str1[tmp%10]); break;
case 9: printf(str1[tmp%10]); break;
}
}
break;

}

return 0;
}
