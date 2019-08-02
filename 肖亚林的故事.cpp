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
	put("肖亚林的故事");
	cout<<endl;
	put("作者：有益于");
	cout<<endl;
	MessageBox(NULL,TEXT("援助来自舰长和亚林，觉得不好玩就削亚林吧\n 另：本版本为1.6.1 如果你使用Switcher请仔细核对版本号"),TEXT("作者的免责声明"),MB_OK);
	put("加载中:");
	for(int i=0;i<=5;i++)
	{
		cout<<"■";
		Sleep(600);
	} 
	cout<<endl<<"加载完成！\nenjoy~~";
	cout<<endl<<"输入任意键进入游戏";
	getch();
	system("CLS");
}
void menu()
{
	system("CLS");
	shuiping();
	system("CLS");
	system("color 87");
	put("1,进行游戏 2，记录 3，读档 4,注意事项 5,统计,6,设置 7,退出游戏");
	cout<<endl;
	int a;
	a=getch()-48;
	switch(a)
	{
		case 1:
			return;
		case 2:
			fout.open("记录.wsysh");
			//fout<<now.mx<<" "<<now.zj<<" "<<now.zr<<" "<<now.wl<<" "<<now.fx<<" "<<now.cat<<" "<<now.story<<endl;
			for(int i=0; i<total_of_achievements; i++)
			{
				string a;
				a=now1.get[i].fin==1?"已完成":"未完成";
				fout<<i<<" "<<now1.get[i].name<<" "<<a<<endl;//<<"是否已弹窗"<<!now1.get[i].f<<endl;
			}
			for(int i=1; i<=total_of_events; i++)
			{
				string a;
				a=th[i]==1?"已触发":"未触发";
				fout<<"s"<<i<<" "<<a<<endl;
			}
			fout<<"总完成事件数量 "<<tht<<endl;
			fout<<"死亡次数 "<<death<<endl;
			//fout<<now.year<<" "<<now.month<<" "<<now.day<<" ";
			fout.close();
			put("成功输出记录");
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
//					cout<<"读档失败";
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
			put("本功能因BUG暂时关闭");
			cout<<endl;
			getch();
			menu();
			break;
		case 4:
			put("1，一次游戏中只能读或存一次档");
			cout<<endl;
			put("2,若触发error彩蛋，请勿想着等它结束");
			cout<<endl;
			put("3,游戏过程中进入主菜单再次进入游戏后会继续上次事件");
			cout<<endl;
			system("pause");
			menu();
			break;
		case 5:
			system("CLS") ;
			int j;
miao:
			put("1,成就 2，事件 3,死亡次数");
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
							put("已完成");
						else
							put("未完成");
						cout<<endl;
					}
					break;
				case 2:
					cout<<"共完成"<<tht<<"/"<<total_of_events;
					cout<<endl<<"完成度"<<(double)tht/total_of_events;
					break;
				case 3:
					cout<<"你共死亡"<<death<<"次";
					break;
				default:
					cout<<"输入不正确，请再次输入。"<<endl;
					goto miao;
			}
			getch();
			menu();
			break;
		case 6:
setting:
			cout<<"1,下次游戏开始显示剧情 ESC,退出 后续功能等待开发";
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
					cout<<"输入不正确，请再次输入。"<<endl;
					goto setting;
					break;
					
			}
			menu();
			break;
		case 7:
			exit(0);
			break;
		default:
			cout<<"输入不正确，请再次输入。"<<endl;
			system("pause");
			menu();
	}
}
bool pick(string t,string f)
{
	int a;
	cout<<"1:"<<t;
	cout<<" 0:"<<f<<" Esc：返回主菜单"<<endl;
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
	}//当按下ESC时循环，ESC键的键值时27.
	else
	{
		cout<<"输入不正确，请再次输入。"<<endl;
	}
	return pick(t,f);
}
void ztxs()
{
	cout<<"民心 宗教 自然 财力 武力" <<endl<<setw(3)<<now.mx<<"  "<<setw(3)<<now.zj<<"  "<<setw(3)<<now.zr<<"  "<<setw(3)<<now.cl<<"  "<<setw(3)<<now.wl<<endl;
	cout<<"复兴进度" <<now.fx<<endl;
	cout<<"第"<<now.year<<"年 "<<now.month<<"月 "<<now.day<<"日";
	cout<<endl;
}
void jq()
{
	if(now.story==1)
		return;
	else
	{
		system("color A8");
		put("很久很久以前,有一个神奇的国度——“亚林国 ”");
		put("有一天 岩松鹤 突然降临 给国王“肖亚林 ”下了诅咒");
		cout<<endl;
		put("现在你作为国王的小学同学的爸爸的孙子的朋友的仇人的爸爸");
		cout<<endl;
		Sleep(1000);
		cout<<"亚木木"<<endl;
		Sleep(1000);
		put("复兴这个王国吧!");
		cout<<endl;
		now.story=1;
	}
}
void setbegin()
{
	SMALL_RECT rc = {0,0,60,50};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	srand((unsigned)time(NULL));
	SetConsoleTitle("肖亚林的故事");    
	now1.get[0].name="不孝子";
	now1.get[1].name="这兔子不错";
	now1.get[2].name="可怜的兔子";
	now1.get[3].name="黄猫热爱者";
	now1.get[4].name="老穷鬼";
	now1.get[5].name="社会主义好";
	now1.get[6].name="拒绝溜冰";
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
	cout<<"页八口想弄死你（大雾）找到了你爸爸的儿子"<<endl;
	Sleep(2000);
	cout<<"她建议你加强基础教育，折磨中小学生。"<<endl;
	Sleep(2000);
	cout<<"对财力 民心 自然有一定影响"<<endl;
	if(pick("好！","你个变态"))
	{
		put("国家又有了一批人才，大家为自己的孩子能为国家效力而自豪");
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
	cout<<"顾祖菊找到了你"<<endl;
	Sleep(2000);
	put("他建议你为民众们开设一个公园，让公民可以放松。");
	cout<<endl;
	Sleep(2000);
	put("对财力 民心有一定影响 对自然有未知影响");
	cout<<endl;
	if(pick("民众优先","先管好自己"))
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
			put("教会并没有听到你们的谈话");
			cout<<endl;
			now.cl+=2;
		}
		else
		{
			put("你们的谈话被教会知道了");
			cout<<endl;
			put("他们（它们？）对你有一定的厌恶");
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
	cout<<"一只神秘兔（土巴兔）偷偷到了你家"<<endl;
	Sleep(2000);
	put("他对你的东西虎视眈眈");
	cout<<endl;
	Sleep(2000);
	put("对财力 武力有一定影响 对民心……你猜");
	cout<<endl;
	if(pick("抓住它","这次放过它"))
	{
		now1.get[1].fin=1;
		put("你抓住了土巴兔，把它炖了吃了");
		cout<<endl;
		now.mx-=3;
		now.wl+=5;
		now.cl+=1;
	}
	else
	{
		now1.get[2].fin=1;
		put("土巴兔逃走了");
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
	cout<<"你的老父亲在城内的医院里已经奄奄一息"<<endl;
	Sleep(2000);
	put("你一旦去看他就有可能遭遇偷盗");
	cout<<endl;
	Sleep(2000);
	put("对财力 宗教有一定影响 对民心……你猜");
	cout<<endl;
	if(pick("我的老父亲呐","让他自生自灭"))
	{
		now.mx+=3;
		now.zj+=2;
		now.cl-=2;
	}
	else
	{
		put("你的父亲是在是坚强，竟然活了下来");
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
	cout<<"有人报告有一片亚林着火了"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对财力 自然有一定影响 对民心……呵呵呵");
	cout<<endl;
	if(pick("让它烧去吧","赶紧扑灭"))
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
	cout<<"老大哥迈着大哥步卐走来，看起来很有钱的样子"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对财力 宗教有一定影响 对民心……呵呵呵");
	cout<<endl;
	if(pick("问他致富秘籍","厌恶地走开"))
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
	cout<<"你发现了一只大黄猫，你要对他做什么";
	Sleep(2000);
	cout<<endl;
	put("对财力 宗教 民心有一定影响 ");
	cout<<endl;
	if(pick("关我啥事","带回去当宠物"))
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
		cout<<"国庆的狂欢里将在本月举行，你要怎么举办"<<endl;
		Sleep(2000);
		cout<<endl;
		put("对财力 自然 民心有一定影响 ");
		cout<<endl;
		if(pick("举办","不举办"))
		{
			if(pick("高端大气上档次","简朴一些"))
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
	cout<<"亚林不作美啊，现在遭遇了大旱，民不聊生"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对财力 宗教 民心有一定影响 ");
	cout<<endl;
	if(pick("分发粮食","我也没办法"))
	{
		put("民众对你十分感谢,教会也因此被打动");
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
	cout<<"猫实在是太多了，搞得你全是毛"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对财力 物理（大雾） 民心 自然有一定影响 ");
	cout<<endl;
	if(pick("把他们扔了","谁叫他们那么黄呢"))
	{
		now.mx-=1;
		now.cl+=1;
		now.wl+=4;
		now.zr-=2;
		now.cat=0;
		put("你的猫都被你扔了，真为它们感到悲哀");
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
	cout<<"一呆小症患者邀请你去溜冰"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对财力 教会  民心 自然有一定影响 ");
	cout<<endl;
	if(pick("滚滚滚滚滚滚滚滚滚长江东逝水","走走走"))
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
	cout<<"有人建议你发展工业，以发展国家实力"<<endl;
	Sleep(2000);
	cout<<endl;
	put("对所有属性都有一定影响 ");
	cout<<endl;
	if(pick("好主意","穷"))
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
			MessageBox(NULL,TEXT("你卒了"),TEXT("作者"),MB_OK);
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

