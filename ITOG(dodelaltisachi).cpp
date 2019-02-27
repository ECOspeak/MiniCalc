#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

float n1=0;
float n2=0;
char d;
const char *str1[] = {" "," один", " два" ," три" ," четыре"," п€ть"," шесть"," семь"," восемь"," дев€ть"};
const char *posdes[] = {" "," одиннадцать"," двенадцать"," тринадцать"," четырнадцать"," п€тнадцать"," шестнадцать", " семнадцать"," восемнадцать"," дев€тнадцать"};
const char *str2[] = {" "," дес€ть" ," двадцать"," тридцать"," сорок"," п€тьдес€т"," шестьдес€т"," семьдес€т"," восемьдес€т"," дев€носто"};
const char *str3[] = {" "," сто"," двести"," триста"," четырста"," п€тьсот"," шестьсот"," семьсот"," восемьсот"," дев€тьсот"};
const char *str4[] = {" "," одна"," две"," три"," четыре"," п€ть"," шесть"," семь"," восемь"," дев€ть" };
char str5[] = " минус";
char str6[] = " тыс€ча";
char str7[] = " тыс€ч";
char str8[] = " тыс€чи";
char str9[] = " миллиона";
char str10[]= " миллионов";

int main() {
setlocale(LC_ALL, "Russian");
int tmp;
cout<<"¬ведите первое число : ";
cin>>n1;
cout<<"¬ведите второе число : ";
cin>>n2;

cout<<"„то вы хотите сделать с первым и вторым числом? - ¬ведите знак действи€:  + , - , *   ";
cin>>d;

switch(d)
{
case '+':
cout<<n1<<d<<n2<<"="<<n1+n2<<endl;
tmp=n1+n2;

	if (tmp<0)
	{
				printf(str5);
	}
	
	if (tmp==0)
	{
		printf("ноль");
	}

switch (tmp / 1000)
{
case 1: printf(str4[1]);printf(str6); break;
case 2: printf(str4[2]);printf(str8); break;
case 3: printf(str4[3]);printf(str8); break;
case 4: printf(str4[4]);printf(str8); break;
case 5: printf(str4[5]);printf(str7); break;
case 6: printf(str4[6]);printf(str7); break;
case 7: printf(str4[7]);printf(str7); break;
case 8: printf(str4[8]);printf(str7); break;
case 9: printf(str4[9]);printf(str7); break;
}
if ( ((tmp/1000)>0) && (tmp/100!=0) ){

	switch (((tmp/100)%10) ) 
{
case 1: printf(str3[((tmp/100)%10)]); break;
case 2: printf(str3[((tmp/100)%10)]); break;
case 3: printf(str3[((tmp/100)%10)]); break;
case 4: printf(str3[((tmp/100)%10)]); break;
case 5: printf(str3[((tmp/100)%10)]); break;
case 6: printf(str3[((tmp/100)%10)]); break;
case 7: printf(str3[((tmp/100)%10)]); break;
case 8: printf(str3[((tmp/100)%10)]); break;
case 9: printf(str3[((tmp/100)%10)]); break;
}

}
switch (tmp / 100) 
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
}
switch ((tmp % 100) / 10)
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
if ((tmp % 100 >= 10)&&(tmp % 100 < 20) )
 {
switch (tmp % 100)
{
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
case 0: printf(" ");break;
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


	if (tmp<0)
	{
				printf(str5);
	}



if (tmp==0)
	{
		printf("ноль");
	}

switch (tmp / 1000)
{
case 1: printf(str4[1]);printf(str6); break;
case 2: printf(str4[2]);printf(str8); break;
case 3: printf(str4[3]);printf(str8); break;
case 4: printf(str4[4]);printf(str8); break;
case 5: printf(str4[5]);printf(str7); break;
case 6: printf(str4[6]);printf(str7); break;
case 7: printf(str4[7]);printf(str7); break;
case 8: printf(str4[8]);printf(str7); break;
case 9: printf(str4[9]);printf(str7); break;
}
if ( ((tmp/1000)>0) && (tmp/100!=0) ){

	switch (((tmp/100)%10) ) 
{
case 1: printf(str3[((tmp/100)%10)]); break;
case 2: printf(str3[((tmp/100)%10)]); break;
case 3: printf(str3[((tmp/100)%10)]); break;
case 4: printf(str3[((tmp/100)%10)]); break;
case 5: printf(str3[((tmp/100)%10)]); break;
case 6: printf(str3[((tmp/100)%10)]); break;
case 7: printf(str3[((tmp/100)%10)]); break;
case 8: printf(str3[((tmp/100)%10)]); break;
case 9: printf(str3[((tmp/100)%10)]); break;
}

}
switch (tmp / 100) 
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
}
switch ((tmp % 100) / 10)
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
if ((tmp % 100 >= 10)&&(tmp % 100 < 20) )
 {
switch (tmp % 100)
{
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
case 0: printf(" ");break;
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
	
	if (tmp<0)
	{
				printf(str5);
	}

if (tmp==0)
	{
		printf("ноль");
	}

switch (tmp / 1000)
{
case 1: printf(str4[1]);printf(str6); break;
case 2: printf(str4[2]);printf(str8); break;
case 3: printf(str4[3]);printf(str8); break;
case 4: printf(str4[4]);printf(str8); break;
case 5: printf(str4[5]);printf(str7); break;
case 6: printf(str4[6]);printf(str7); break;
case 7: printf(str4[7]);printf(str7); break;
case 8: printf(str4[8]);printf(str7); break;
case 9: printf(str4[9]);printf(str7); break;
}
if ( ((tmp/1000)>0) && (tmp/100!=0) ){

	switch (((tmp/100)%10) ) 
{
case 1: printf(str3[((tmp/100)%10)]); break;
case 2: printf(str3[((tmp/100)%10)]); break;
case 3: printf(str3[((tmp/100)%10)]); break;
case 4: printf(str3[((tmp/100)%10)]); break;
case 5: printf(str3[((tmp/100)%10)]); break;
case 6: printf(str3[((tmp/100)%10)]); break;
case 7: printf(str3[((tmp/100)%10)]); break;
case 8: printf(str3[((tmp/100)%10)]); break;
case 9: printf(str3[((tmp/100)%10)]); break;
}

}
switch (tmp / 100) 
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
}
switch ((tmp % 100) / 10)
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
if ((tmp % 100 >= 10)&&(tmp % 100 < 20) )
 {
switch (tmp % 100)
{
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
case 0: printf(" ");break;
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

}//switch

return 0;
}
