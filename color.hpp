#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
       HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
       SetConsoleTextAttribute(hCon,ForeColor+BackGroundColor*0x10);
}
//水平彩带函数
void shuiping()
{
       int i,j,k;
       for(i=0;i<25;++i)
       {
              for(j=0;j<=79;++j)
              {
                     k=i%16;
                     SetColor(k,k);
                     putchar('A');
              }
       }
}
//垂直彩带函数
void chuizhi()
{
       int i,j,k;
       for(i=0;i<25;++i)
       {
              for(j=0;j<40;++j)
              {
                     k=j%16;
                     SetColor(k,k);
                     putchar('A');
                     putchar('A');
        }            
       }
}
//右倾斜彩带函数
void youqingxie()
{
       int i,j,k;
       for(i=0;i<25;++i)
       {
              for(j=0;j<40;++j)
              {
                     if(j-i>=0)
                            k=(j-i)%16;
                     else
                            k=(j-i)%16+16;
                     SetColor(k,k);
                     putchar('A');
                     putchar('A');
              }
       }
}
//左倾斜彩带函数
void zuoqingxie()
{
       int i,j,k;
       for(i=0;i<25;++i)
       {
              for(j=0;j<40;++j)
              {
                     k=(i+j)%16;
                     SetColor(k,k);
                     putchar('A');
                     putchar('A');
              }
       }
}
//箭头状彩带函数
void jiantou()
{
       int i,j,k;
       for(i=0;i<16;++i)
       {
              for(j=0;j<40;++j)
              {
                     k=(i+j)%16;
                     SetColor(k,k);
                     putchar('A');
                     putchar('A');
              }
       }
       for(i=0;i<16;++i)
       {
              for(j=0;j<40;++j)
              {
                     if(j-i>=0)
                            k=(j-i)%16;
                     else
                            k=(j-i)%16+16;
                     SetColor(k,k);
                     putchar('A');
                     putchar('A');
              }
       }
}
