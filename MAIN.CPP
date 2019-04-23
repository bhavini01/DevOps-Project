#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<fstream.h>
#include<director.h>
#include<time.h>
#include<wecome.h>
#include<process.h>

time_t rtime;
void status();
void buyf(int);
void save();
void read();
void fert();
void succ();
void game();
void pStep(int);
class SInfo
{ public:
 int id;
 int price;
 int reward;
 int time;
 int color;
 int style;
};
SInfo s1={1,50,70,1,WHITE,WIDE_DOT_FILL},s2={2,80,120,3,RED,LTSLASH_FILL},s3={3,120,170,10,YELLOW,INTERLEAVE_FILL},s4={4,200,320,15,MAGENTA,SOLID_FILL},s5={5,350,600,30,RED,LINE_FILL},s6={6,600,1240,60,CYAN,HATCH_FILL},s7={7,3000,9000,720,BLUE,XHATCH_FILL};

class PInfo
{ public:
 int Seeds[40];
 int SLim;
 int SQuant[40];
 int Fert[40];
 int FLim;
 int FQuant[40];
 int cash;

};
class FieldInfo
{ public:
 int color;
 int style;
 int init;
 double min;
 int i;
 int j;
 int time;
 int Fcheck;
 int Fid;
 int Ftime;
 int Sid;
 time_t ctime;
};
PInfo p1;
FieldInfo f[8];
int givi(double k,int tem){
if(k<tem/2){
	if(k<tem/4)
	return 0;
	else
	return 25;
}else{
	if(k<tem)
	return 50;
	else{
	return 75;}
};
};
void succ(){

clrscr();
int gd= DETECT,gm;

clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(0,50,"SUCCESSFULL!");
settextstyle(DEFAULT_FONT,HORIZ_DIR, 2);
setcolor(RED);
outtextxy(70,447,"Press any key");
getch();
closegraph();
};
int givj(double k,int tem){
if(k<tem/2){
	if(k<tem/4)
	return 0;
	else
	return 14;
}else{
	if(k<tem)
	return 29;
	else
	return 35;
};
};
void refresh(){
save();
clock_t tnow = clock();
double now;
now=tnow;
for (int ik=0;ik<8;ik++){
if(f[ik].init>=1){
	if(now<f[ik].min)
	now = f[ik].min+now;
int tchek;
tchek = (now-f[ik].min)/CLOCKS_PER_SEC + difftime(rtime,f[ik].ctime);
f[ik].i=givi(tchek,f[ik].time);
f[ik].j=givj(tchek,f[ik].time);
if(givi(tchek,f[ik].time)==75)
f[ik].init=2;
};
};
};
#include<shop.h>
#include<plant.h>
#include<game.h>
#include<status.h>
void save()
{
fstream file;
char root[20];
for(int i=0;i<8;i++){
sprintf(root,"f%d.bin",i);
//delay(500);
file.open(root,ios::out | ios::binary);
file.write((char*)&f[i],sizeof(FieldInfo));
file.close();}
};
void read()
{
fstream file;
char root[20];
for(int i=0;i<8;i++){
sprintf(root,"f%d.bin",i);
//delay(500);
file.open(root,ios::in | ios::binary);
file.read((char*)&f[i],sizeof(FieldInfo));
file.close();};
};
void main()
{
//for(int m=0;m<9;m++)
//{f[m].init=0;
// f[m].Fcheck=0;}
//save();
read();
refresh();
p1.SLim=0;
p1.cash=10000;
//welcome();
time(&rtime);
game();};