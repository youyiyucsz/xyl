#include"xyl.hpp"
using namespace std;
typedef void(*SJ)();
no now;
cj now1;
ofstream fout;
ifstream fin;
int th[1000];
int tht=0;
int death=0;
void begin()
{
	system("CLS");
	system("color 78");
	cout<<"                         ";
	put("Ф���ֵĹ���");
	cout<<endl;
	put("���ߣ�������");
	cout<<endl;
	MessageBox(NULL,TEXT("Ԯ�����Խ��������֣����ò�����������ְ�\n �����汾Ϊ1.6.1 �����ʹ��Switcher����ϸ�˶԰汾��"),TEXT("���ߵ���������"),MB_OK);
	put("������:");
	for(int i=0;i<=5;i++)
	{
		cout<<"��";
		Sleep(600);
	} 
	cout<<endl<<"������ɣ�\nenjoy~~";
	cout<<endl<<"���������������Ϸ";
	getch();
	system("CLS");
}
void menu()
{
	system("CLS");
	shuiping();
	system("CLS");
	system("color 87");
	put("1,������Ϸ 2����¼ 3������ 4,ע������ 5,ͳ��,6,���� 7,�˳���Ϸ");
	cout<<endl;
	int a;
	a=getch()-48;
	switch(a)
	{
		case 1:
			return;
		case 2:
			fout.open("��¼.wsysh");
			//fout<<now.mx<<" "<<now.zj<<" "<<now.zr<<" "<<now.wl<<" "<<now.fx<<" "<<now.cat<<" "<<now.story<<endl;
			for(int i=0; i<total_of_achievements; i++)
			{
				string a;
				a=now1.get[i].fin==1?"�����":"δ���";
				fout<<i<<" "<<now1.get[i].name<<" "<<a<<endl;//<<"�Ƿ��ѵ���"<<!now1.get[i].f<<endl;
			}
			for(int i=1; i<=total_of_events; i++)
			{
				string a;
				a=th[i]==1?"�Ѵ���":"δ����";
				fout<<"s"<<i<<" "<<a<<endl;
			}
			fout<<"������¼����� "<<tht<<endl;
			fout<<"�������� "<<death<<endl;
			//fout<<now.year<<" "<<now.month<<" "<<now.day<<" ";
			fout.close();
			put("�ɹ������¼");
			cout<<endl;
			getch();
			menu();
			break;
		case 3:
//			fin.open("c.wsysh");
//			fin>>now.mx>>now.zj>>now.zr>>now.wl>>now.fx>>now.cat>>now.story;
//			for(int i=0;i<total_of_achievements;i++)
//			{
//				if (!fin.is_open())
//				{
//					cout<<"����ʧ��";
//				}
//				fin>>now1.get[i].fin>>now1.get[i].f;
//			}
//			for(int i=1; i<=total_of_events; i++)
//			{
//				fin>>th[i];
//			}
//			fin>>tht;
//			fin>>death;
//			fin>>now.year>>now.month>>now.day;
//			fin.close();
			put("��������BUG��ʱ�ر�");
			cout<<endl;
			getch();
			menu();
			break;
		case 4:
			put("1��һ����Ϸ��ֻ�ܶ����һ�ε�");
			cout<<endl;
			put("2,������error�ʵ����������ŵ�������");
			cout<<endl;
			put("3,��Ϸ�����н������˵��ٴν�����Ϸ�������ϴ��¼�");
			cout<<endl;
			system("pause");
			menu();
			break;
		case 5:
			system("CLS") ;
			int j;
miao:
			put("1,�ɾ� 2���¼� 3,��������");
			cout<<endl;
			j=getch()-'0';
			switch(j)
			{

				case 1:
					for(int i=0; i<total_of_achievements; i++)
					{
						cout<<i+1<<",";
						cout<<now1.get[i].name<<" ";
						if(now1.get[i].fin==1)
							put("�����");
						else
							put("δ���");
						cout<<endl;
					}
					break;
				case 2:
					cout<<"�����"<<tht<<"/"<<total_of_events;
					cout<<endl<<"��ɶ�"<<(double)tht/total_of_events;
					break;
				case 3:
					cout<<"�㹲����"<<death<<"��";
					break;
				default:
					cout<<"���벻��ȷ�����ٴ����롣"<<endl;
					goto miao;
			}
			getch();
			menu();
			break;
		case 6:
setting:
			cout<<"1,�´���Ϸ��ʼ��ʾ���� ESC,�˳� �������ܵȴ�����";
			cout<<endl;
			char ip;
			ip=getch();
			switch(ip)
			{
				case '1':
					now.story=0;
				case 27:
					break;
				default:
					cout<<"���벻��ȷ�����ٴ����롣"<<endl;
					goto setting;
					break;
					
			}
			menu();
			break;
		case 7:
			exit(0);
			break;
		default:
			cout<<"���벻��ȷ�����ٴ����롣"<<endl;
			system("pause");
			menu();
	}
}
bool pick(string t,string f)
{
	int a;
	cout<<"1:"<<t;
	cout<<" 0:"<<f<<" Esc���������˵�"<<endl;
	a=getch();
	if(a=='1'||a=='0')
	{
		return a-'0';
	}
	if (a == 27)
	{
		menu();
		system("CLS");
		system("color BF");
	}//������ESCʱѭ����ESC���ļ�ֵʱ27.
	else
	{
		cout<<"���벻��ȷ�����ٴ����롣"<<endl;
	}
	return pick(t,f);
}
void ztxs()
{
	cout<<"���� �ڽ� ��Ȼ ���� ����" <<endl<<setw(3)<<now.mx<<"  "<<setw(3)<<now.zj<<"  "<<setw(3)<<now.zr<<"  "<<setw(3)<<now.cl<<"  "<<setw(3)<<now.wl<<endl;
	cout<<"���˽���" <<now.fx<<endl;
	cout<<"��"<<now.year<<"�� "<<now.month<<"�� "<<now.day<<"��";
	cout<<endl;
}
void jq()
{
	if(now.story==1)
		return;
	else
	{
		system("color A8");
		put("�ܾúܾ���ǰ,��һ������Ĺ��ȡ��������ֹ� ��");
		put("��һ�� ���ɺ� ͻȻ���� ��������Ф���� ����������");
		cout<<endl;
		put("��������Ϊ������Сѧͬѧ�İְֵ����ӵ����ѵĳ��˵İְ�");
		cout<<endl;
		Sleep(1000);
		cout<<"��ľľ"<<endl;
		Sleep(1000);
		put("�������������!");
		cout<<endl;
		now.story=1;
	}
}
void setbegin()
{
	SMALL_RECT rc = {0,0,60,50};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	srand((unsigned)time(NULL));
	SetConsoleTitle("Ф���ֵĹ���");    
	now1.get[0].name="��Т��";
	now1.get[1].name="�����Ӳ���";
	now1.get[2].name="����������";
	now1.get[3].name="��è�Ȱ���";
	now1.get[4].name="�����";
	now1.get[5].name="��������";
	now1.get[6].name="�ܾ����";
	now.cl=50;
	//now.cat=0;
	now.mx=50;
	now.wl=50;
	now.zj=50;
	now.zr=50;
}
void s1()
{
	if(th[1]==0)
	{
		tht++;
		th[1]=1;
	}
	cout<<"ҳ�˿���Ū���㣨�����ҵ�����ְֵĶ���"<<endl;
	Sleep(2000);
	cout<<"���������ǿ������������ĥ��Сѧ����"<<endl;
	Sleep(2000);
	cout<<"�Բ��� ���� ��Ȼ��һ��Ӱ��"<<endl;
	if(pick("�ã�","�����̬"))
	{
		put("����������һ���˲ţ����Ϊ�Լ��ĺ�����Ϊ����Ч�����Ժ�");
		cout<<endl;
		now.mx+=5;
		now.zr-=1;
		now.cl-=5;
		now.zj+=4;
	}
	else
	{
		now.cl+=3;
	}
}
void s2()
{
	if(th[2]==0)
	{
		tht++;
		th[2]=1;
	}
	cout<<"������ҵ�����"<<endl;
	Sleep(2000);
	put("��������Ϊ�����ǿ���һ����԰���ù�����Է��ɡ�");
	cout<<endl;
	Sleep(2000);
	put("�Բ��� ������һ��Ӱ�� ����Ȼ��δ֪Ӱ��");
	cout<<endl;
	if(pick("��������","�ȹܺ��Լ�"))
	{
		now.mx+=6;
		now.zr-=1;
		now.cl-=5;
		now.zj+=2;
	}
	else
	{
		if(rand()%2==1)
		{
			put("�̻Ტû���������ǵ�̸��");
			cout<<endl;
			now.cl+=2;
		}
		else
		{
			put("���ǵ�̸�����̻�֪����");
			cout<<endl;
			put("���ǣ����ǣ���������һ�������");
			cout<<endl;
			now.zj-=4;
		}
	}
}
void s3()
{
	if(th[3]==0)
	{
		tht++;
		th[3]=1;
	}
	cout<<"һֻ�����ã������ã�͵͵�������"<<endl;
	Sleep(2000);
	put("������Ķ�����������");
	cout<<endl;
	Sleep(2000);
	put("�Բ��� ������һ��Ӱ�� �����ġ������");
	cout<<endl;
	if(pick("ץס��","��ηŹ���"))
	{
		now1.get[1].fin=1;
		put("��ץס�������ã��������˳���");
		cout<<endl;
		now.mx-=3;
		now.wl+=5;
		now.cl+=1;
	}
	else
	{
		now1.get[2].fin=1;
		put("������������");
		cout<<endl;
		now.cl-=5;
		now.wl-=3;
		now.mx+=3;
	}
}
void s4()
{
	if(th[4]==0)
	{
		tht++;
		th[4]=1;
	}
	cout<<"����ϸ����ڳ��ڵ�ҽԺ���Ѿ�����һϢ"<<endl;
	Sleep(2000);
	put("��һ��ȥ�������п�������͵��");
	cout<<endl;
	Sleep(2000);
	put("�Բ��� �ڽ���һ��Ӱ�� �����ġ������");
	cout<<endl;
	if(pick("�ҵ��ϸ�����","������������"))
	{
		now.mx+=3;
		now.zj+=2;
		now.cl-=2;
	}
	else
	{
		put("��ĸ��������Ǽ�ǿ����Ȼ��������");
		cout<<endl;
		now1.get[0].fin=1;
		now.zj-=3;
		now.mx-=3;
	}
}
void s5()
{
	if(th[5]==0)
	{
		tht++;
		th[5]=1;
	}
	cout<<"���˱�����һƬ�����Ż���"<<endl;
	Sleep(2000);
	cout<<endl;
	put("�Բ��� ��Ȼ��һ��Ӱ�� �����ġ����ǺǺ�");
	cout<<endl;
	if(pick("������ȥ��","�Ͻ�����"))
	{
		now.mx-=3;
		now.zr-=7;
	}
	else
	{
		now.cl-=3;
		now.mx+=3;
		now.zr+=4;
	}
}
void s6()
{
	if(th[6]==0)
	{
		tht++;
		th[6]=1;
	}
	cout<<"�ϴ�����Ŵ�粽�e����������������Ǯ������"<<endl;
	Sleep(2000);
	cout<<endl;
	put("�Բ��� �ڽ���һ��Ӱ�� �����ġ����ǺǺ�");
	cout<<endl;
	if(pick("�����¸��ؼ�","�����߿�"))
	{
		now.mx-=3;
		now.cl+=7;
		now.zj-=4;
	}
	else
	{
		now.cl-=1;
		now.mx+=1;
	}
}
void s7()
{
	if(th[7]==0)
	{
		tht++;
		th[7]=1;
	}
	cout<<"�㷢����һֻ���è����Ҫ������ʲô";
	Sleep(2000);
	cout<<endl;
	put("�Բ��� �ڽ� ������һ��Ӱ�� ");
	cout<<endl;
	if(pick("����ɶ��","����ȥ������"))
	{
		now.mx-=3;
		now.cl+=1;
		now.zj-=2;
	}
	else
	{
		now.cl-=1;
		now.mx+=3;
		now.cat++;
	}
	if(now.cat>=2)
	{
		now1.get[3].fin=1;
	}
}
void s8()
{
	if(now.month==10)
	{
		if(th[8]==0)
		{
			tht++;
			th[8]=1;
		}
		cout<<"����Ŀ��ｫ�ڱ��¾��У���Ҫ��ô�ٰ�"<<endl;
		Sleep(2000);
		cout<<endl;
		put("�Բ��� ��Ȼ ������һ��Ӱ�� ");
		cout<<endl;
		if(pick("�ٰ�","���ٰ�"))
		{
			if(pick("�߶˴����ϵ���","����һЩ"))
			{
				now.mx+=10;
				now.cl-=10;
				now.zr-=4;
			}
			else
			{
				now.cl-=1;
				now.mx+=1;
				now.zr-=1;
			}
		}
		else
		{
			now1.get[4].fin=1;
			now.mx-=2;
			now.cl+=1;
			now.zr+=1;
		}
	}
}
void s9()
{
	if(th[9]==0)
	{
		tht++;
		th[9]=1;
	}
	cout<<"���ֲ������������������˴󺵣�������"<<endl;
	Sleep(2000);
	cout<<endl;
	put("�Բ��� �ڽ� ������һ��Ӱ�� ");
	cout<<endl;
	if(pick("�ַ���ʳ","��Ҳû�취"))
	{
		put("���ڶ���ʮ�ָ�л,�̻�Ҳ��˱���");
		cout<<endl;
		now1.get[5].fin=1;
		now.mx+=15;
		now.cl-=6;
		now.zj+=4;
	}
	else
	{
		now.cl+=1;
		now.mx-=6;
		now.zj-=2;
	}
}
void s10()
{
	if(now.cat<4)
	{
		return;
	}
	if(th[10]==0)
	{
		tht++;
		th[10]=1;
	}
	cout<<"èʵ����̫���ˣ������ȫ��ë"<<endl;
	Sleep(2000);
	cout<<endl;
	put("�Բ��� �������� ���� ��Ȼ��һ��Ӱ�� ");
	cout<<endl;
	if(pick("����������","˭��������ô����"))
	{
		now.mx-=1;
		now.cl+=1;
		now.wl+=4;
		now.zr-=2;
		now.cat=0;
		put("���è���������ˣ���Ϊ���Ǹе�����");
		cout<<endl;
	}
	else
	{
		now.cl-=1;
		now.mx+=2;
		now.wl-=2;
	}
}
void s11()
{
	if(th[11]==0)
	{
		tht++;
		th[11]=1;
	}
	cout<<"һ��С֢����������ȥ���"<<endl;
	Sleep(2000);
	cout<<endl;
	put("�Բ��� �̻�  ���� ��Ȼ��һ��Ӱ�� ");
	cout<<endl;
	if(pick("��������������������������ˮ","������"))
	{
		now.mx+=2;
		now.cl+=6;
		now.wl+=4;
		now1.get[6].fin=1;
		cout<<endl;
	}
	else
	{
		now.cl-=5;
		now.mx-=8;
		now.wl-=2;
	}
}
void s12()
{
	if(th[12]==0)
	{
		tht++;
		th[12]=1;
	}
	cout<<"���˽����㷢չ��ҵ���Է�չ����ʵ��"<<endl;
	Sleep(2000);
	cout<<endl;
	put("���������Զ���һ��Ӱ�� ");
	cout<<endl;
	if(pick("������","��"))
	{
		now.mx+=4;
		now.cl+=4;
		now.wl+=4;
		now.zj+=4; 
		cout<<endl;
	}
	else
	{
		now.cl+=1;
		now.mx-=3;
		now.zj-=2;
	}
}
SJ zgb[]= {s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12};
int main()
{
	int ra=-1,rb=1,rc=-1;
	setbegin();
	begin();
	int er=rand()%1000;
	if(er==404||er==502||er==505)
	{
		error();
	}
	menu();
	jq();
	Sleep(1000);
	system("CLS");
	system("color 3A");
	while(1)
	{
		ztxs();
		Sleep(1000);
		srand((unsigned)time(NULL));
		do
		{
			if(ra==-1)
			{
				if(rb==-1)
				{
					rc=rand()%total_of_events;
				}
				else
				{
					ra=rb;
					rb=rc;
					rc=rand()%total_of_events;
				}
			}
			else
			{
				ra=rb;
				rb=rc;
				rc=rand()%total_of_events;
			}
		}
		while(rc==rb||ra==rc);
		zgb[rc]();
		now.day+=10;
		time(now);
		fxp(now);
		if(die(now)==0)
		{
			now.month=1,now.year=1,now.day=1;
			now.fx-=15;
			MessageBox(NULL,TEXT("������"),TEXT("����"),MB_OK);
			youqingxie();
			death++;
			system("CLS");
			SetColor(14,3);
			main();
			return 0;
		}
		cjp(now1.get);
	}
	return 0;
}

