#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<string>
#include"color.hpp"
#include"total.hpp"
;using namespace std;
struct no
{
	int mx=50,zj=50,zr=50,wl=50,cl=50,fx=0,cat;
	int month=1,year=1,day=1;
	bool story=0;
};
struct cjl
{
	bool fin=0;
	bool f=1;
	string name;
};
struct cj
{
	cjl get[total_of_achievements];
};
void put(char *p)
{
	while(1)
	{
		if(*p!=0)
			printf("%c",*p++);
		else
			break;
		Sleep(1);
	}
}
void time(no &a)
{
	if(a.day>data[a.month])
	{
		a.day-=data[a.month];
		a.month++;
	}
	if(a.month>12)
	{
		a.year+=1;
		a.month-=12;
	}
}
void error()
{
	while(1)
	{
		system("color 10");
		Sleep(50);
		system("color 21");
		Sleep(50);
		system("color 32");
		Sleep(50);
		system("color 43");
		Sleep(50);
		system("color 54");
		Sleep(50);
		system("color 65");
		Sleep(50);
		system("color 76");
		Sleep(50);
		system("color 87");
		Sleep(50);
		system("color 98");
		Sleep(50);
		system("color A9");
		Sleep(50);
		system("color BA");
		Sleep(50);
		system("color CB");
		Sleep(50);
		SetConsoleTitle("����");
	}
}
int die(no &a)
{
	if(a.cl>=100||a.cl<=0)
	{
		cout<<"���Ҿ���ʧ�⣬�㱻������.";
		return 0;
	}
	if(a.mx>=100||a.mx<=0)
	{
		cout<<"����ӿ����ң��㱻ѹ����.";
		return 0;
	}
	if(a.zj>=100||a.zj<=0)
	{
		cout<<"�̻���㼫�����⣬���ǰ��㰵ɱ��.";
		return 0;
	}
	if(a.zr>=100||a.zr<=0)
	{
		cout<<"�����񻯣������ˣ��ұ಻��ȥ�ˣ�.";
		return 0;
	}
	if(a.wl>=100||a.wl<=0)
	{
		cout<<"����Ը�������Ҳ�����������.";
		return 0;
	}
}
void fxp(no &a)
{
	if(a.cl>=30&&a.mx>=40&&a.mx<=70&&a.zj>=25&&a.wl>=25&&a.wl<=80&&a.zr>=20&&a.zr<=70)
	{
		a.fx+=3;
	}
	else
	{
		a.fx-=2;
	}
}
void cjp(cjl get[])
{
	if(get[0].fin==1&&get[0].f==1)
	{
		get[0].f=0;
		MessageBox(NULL,TEXT("�����Т�ӣ�����"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[1].fin==1&&get[1].f==1)
	{
		get[1].f=0;
		MessageBox(NULL,TEXT("�����Ӳ���"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[2].fin==1&&get[2].f==1)
	{
		get[2].f=0;
		MessageBox(NULL,TEXT("������ô�ɰ���ȻҪ��������"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[3].fin==1&&get[3].f==1)
	{
		get[3].f=0;
		MessageBox(NULL,TEXT("������Ǹ�ߣè��ħ��"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[4].fin==1&&get[4].f==1)
	{
		get[4].f=0;
		MessageBox(NULL,TEXT("���Ҵ������ܲ��ٰ졣"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[5].fin==1&&get[5].f==1)
	{
		get[5].f=0;
		MessageBox(NULL,TEXT("�����ǵ�һλ�ģ���"),TEXT("�ɾ�"),MB_OK);
	}
	if(get[6].fin==1&&get[6].f==1)
	{
		get[6].f=0;
		MessageBox(NULL,TEXT("��ֱ�ĺ��ӡ�"),TEXT("�ɾ�"),MB_OK);
	}
}
